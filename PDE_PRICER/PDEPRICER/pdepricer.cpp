#include "pdepricer.h"
#include "StructureSettings.h"
#include "RunSettings.h"
#include "RunLinker.h"
#include "ProductSettings.h"
#include "ProductLinker.h"
#include "ui_PDEPricer.h"
#include "C_RunLauncher.h"

#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>

PDEPricer::PDEPricer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PDEPricer)
{
    // Création de la fenetre principale
    ui->setupUi(this);
    // Création des privés
    OpenItems = new WorkTab(ui->WorkTab);
    OpenItems->RemoveAllRow();
    Structures = new StructureTree(ui->Structures,ui->AddStructure,ui->DeleteStructure);
    Runs = new RunTree(ui->Runs,ui->AddRun,ui->DeleteRun);
    WorkSpace = new Workspace();
    Products = new List();
    // Connections
    connect(ui->Go, SIGNAL(clicked()), this, SLOT(RunLauncher()));
    connect(ui->NewWorkspace, SIGNAL(triggered()), WorkSpace, SLOT(NewWorkspaceBox()));
    connect(ui->LoadWorkspace, SIGNAL(triggered()), WorkSpace, SLOT(LoadWorkspaceBox()));
    connect(ui->ShowRunSettings, SIGNAL(triggered()), this, SLOT(HideRunSettings()));
    connect(ui->ShowStructures, SIGNAL(triggered()), this, SLOT(HideStructures()));
    connect(WorkSpace, SIGNAL(LoadedStructure(QString,QStringList)), this, SLOT(LoadStructure(QString,QStringList)));
    connect(WorkSpace, SIGNAL(LoadedProduct(QString,Prod*)), this, SLOT(LoadProduct(QString,Prod*)));
    connect(WorkSpace, SIGNAL(LoadedProductInStructure(QString,Prod*,StructureSetting*)), this, SLOT(LoadProductInStructure(QString, Prod*,StructureSetting*)));
    connect(WorkSpace,SIGNAL(DeleteProductInStructure(QString,QString)),Structures,SLOT(DeleteProductInStructure(QString,QString)));
    connect(Structures,SIGNAL(ChangeName(QString,QString)),WorkSpace, SLOT(ChangeStructureName(QString,QString)));
    connect(Structures,SIGNAL(ChangeProductNameInSTructure(QString,QString,QString)),WorkSpace,SLOT(ChangeProductNameInSTructure(QString,QString,QString)));
    connect(Structures, SIGNAL(AddStructure(QString)), this, SLOT(AddStructure(QString)));
    connect(Runs,SIGNAL(ChangeName(QString,QString)),WorkSpace, SLOT(ChangeRunName(QString,QString)));
    connect(Runs, SIGNAL(AddRun(QString)), this, SLOT(AddRun(QString)));
    connect(Runs, SIGNAL(RunLoaded(QString,Run*)), this, SLOT(LoadRun(QString,Run*)));
    connect(Structures , SIGNAL(DeleteItem(StructureLinker*)),this, SLOT(DeleteStructure(StructureLinker*)));
    connect(Structures,SIGNAL(OpenProduct(QWidget* ,QString)), OpenItems, SLOT(OpenProduct(QWidget* ,QString)));
    connect(OpenItems , SIGNAL(ProductSetted(Prod*,QString,QString)),WorkSpace, SLOT(SetProduct(Prod*,QString,QString)));
    connect(OpenItems , SIGNAL(AddProduct(ProductSettings*)),WorkSpace, SLOT(AddProduct(ProductSettings*)));
    connect(OpenItems , SIGNAL(AddProduct(ProductSettings*)),this, SLOT(AddGeneralProduct(ProductSettings*)));
    connect(OpenItems,SIGNAL(DeleteProductFile(QString)),WorkSpace,SLOT(DeleteProductFile(QString)));
    connect(OpenItems,SIGNAL(DeleteProductFile(QString)),this,SLOT(DeleteGeneralProduct(QString)));

//    connect(Runs,SIGNAL(ChangeName(QString,QString)),WorkSpace, SLOT(SetStructure(QString,QString)));
//    connect(Runs, SIGNAL(AddStructure(QString)), this, SLOT(AddStructure(QString)));
    connect(Runs , SIGNAL(DeleteItem(RunLinker*)),WorkSpace, SLOT(DeleteRun(RunLinker*)));
    connect(Runs , SIGNAL(DeleteItem(RunLinker*)),OpenItems, SLOT(Close(RunLinker*)));
//    connect(Runs,SIGNAL(OpenProduct(QWidget* ,QString)), OpenItems, SLOT(OpenProduct(QWidget* ,QString)));



}
PDEPricer::~PDEPricer()
{
    delete OpenItems;
    delete Structures;
    delete Runs;
    delete WorkSpace;
    delete Products;
    delete ui;
}
void PDEPricer::RunLauncher()
{
    QTableWidget*  result = WorkSpace->GetResult();
    ComputePrice();
    OpenItems->ShowResults(result);
}
void PDEPricer::LoadLastWorkSpace()
{
    // On récupère l'adrees du dernier Workspace
    QString Adress = WorkSpace->GetLastAdress();
    // On charge le dernier workspace
    WorkSpace->LoadWorkspace(Adress);
}
void PDEPricer::HideStructures()
{
    ui->StructureWindow->hide();
    disconnect(ui->ShowStructures, SIGNAL(triggered()), this, SLOT(HideStructures()));
    connect(ui->ShowStructures, SIGNAL(triggered()), this, SLOT(ShowStructures()));
}
void PDEPricer::HideRunSettings()
{
    ui->RunsWindow->hide();
    disconnect(ui->ShowRunSettings, SIGNAL(triggered()), this, SLOT(HideRunSettings()));
    connect(ui->ShowRunSettings, SIGNAL(triggered()), this, SLOT(ShowRunSettings()));
}
void PDEPricer::ShowStructures()
{
    ui->StructureWindow->show();
    disconnect(ui->ShowStructures, SIGNAL(triggered()), this, SLOT(ShowStructures()));
    connect(ui->ShowStructures, SIGNAL(triggered()), this, SLOT(HideStructures()));
}
void PDEPricer::ShowRunSettings()
{
    ui->RunsWindow->show();
    disconnect(ui->ShowRunSettings, SIGNAL(triggered()), this, SLOT(ShowRunSettings()));
    connect(ui->ShowRunSettings, SIGNAL(triggered()), this, SLOT(HideRunSettings()));
}
void PDEPricer::AddStructure(QString StructureName)
{   
    // On créé le fichier
    WorkSpace->AddStructure(StructureName);
    // On créé la fenètre de paramètres
    StructureSetting* Settings = new StructureSetting();
    Settings->SetName(StructureName);
    Settings->setAccessibleName(StructureName);
    WorkSpace->LoadAllProductsInStructure(Settings);
    // On connecte tous les signaux provenant des listes de produits
    connect(Settings,SIGNAL(Open(QWidget* ,QString)), OpenItems, SLOT(OpenProduct(QWidget* ,QString)));
    connect(OpenItems,SIGNAL(AddProduct(ProductSettings*)), Settings, SLOT(AddProduct(ProductSettings*)));
    connect(Settings,SIGNAL(WorkSpaceIntegrateProductsInStructure(QListWidget*,QString)),WorkSpace,SLOT(IntegrateProductsInStructure(QListWidget*,QString)));
    connect(Settings,SIGNAL(TreeIntegrateProductsInStructure(QListWidget*,QString)),Structures,SLOT(IntegrateProductsInStructure(QListWidget*,QString)));
    connect(Settings,SIGNAL(CloseProductSettings(QWidget*)),OpenItems,SLOT(Close(QWidget*)));
    // On créé le linker de la structure
    StructureLinker* Structure = new StructureLinker(ui->Structures,Settings,StructureName);
    Structure->setParent(this);
    // On connecte tous les signaux provenant de la structure
    connect(Structure,SIGNAL(Selected(StructureLinker*)), Structures, SLOT(SetCurrent(StructureLinker*)));
    connect(Structures,SIGNAL(NewSelection(QTreeWidgetItem*,int)), Structure, SLOT(SelectIf(QTreeWidgetItem*,int)));
    connect(Structure,SIGNAL(Open(QWidget* ,QString)), OpenItems, SLOT(OpenStructure(QWidget* ,QString)));
    connect(Structure,SIGNAL(changeChildName(QString,QString)), Runs, SLOT(changeChildName(QString,QString)));
    connect(Structure,SIGNAL(ChangeItemName(QTreeWidgetItem*,QString)), Structures, SLOT(ChangeItemName(QTreeWidgetItem*,QString)));     
    connect(Structure,SIGNAL(ApplySettings(QString,StructureSetting*)), this, SLOT(SetStructure(QString,StructureSetting*)));
    //On ouvre le paramétrage
    OpenItems->OpenStructure(Structure->GetSettings(),StructureName);
}
void PDEPricer::AddRun(QString RunName)
{
    // On créé le fichier
    WorkSpace->AddRun(RunName);
    // On créé la fenètre de paramètres
    RunSettings* Settings = new RunSettings();
    Settings->setParent(this);
    Settings->SetSettingName(RunName);
    Settings->setAccessibleName(RunName);
    WorkSpace->LoadAllStructuresInRun(Settings);
    // On connecte tous les signaux provenant des listes de produits
//    connect(Settings,SIGNAL(Open(QWidget* ,QString)), OpenItems, SLOT(OpenProduct(QWidget* ,QString)));
//    connect(OpenItems,SIGNAL(AddProduct(ProductSettings*)), Settings, SLOT(AddProduct(ProductSettings*)));
    connect(Settings,SIGNAL(SetRun(QString,Run*)),WorkSpace,SLOT(SetRun(QString,Run*)));
    connect(Settings,SIGNAL(SetRun(QString,Run*)),Runs,SLOT(SetRun(QString,Run*)));
//    connect(Settings,SIGNAL(CloseProductSettings(QWidget*)),OpenItems,SLOT(Close(QWidget*)));
    // On créé le linker du Run
    RunLinker* run = new RunLinker(ui->Runs,Settings,RunName);
    run->setParent(this);
//    // On connecte
    connect(run,SIGNAL(ChangeTabName(QWidget*,QString)),OpenItems,SLOT(ChangeTabName(QWidget*,QString)));
    connect(run,SIGNAL(ChangeItemName(QTreeWidgetItem*,QString)),Runs,SLOT(ChangeItemName(QTreeWidgetItem*,QString)));
    connect(run,SIGNAL(Selected(RunLinker*)), Runs, SLOT(SetCurrent(RunLinker*)));
    connect(Runs,SIGNAL(NewSelection(QTreeWidgetItem*,int)), run, SLOT(SelectIf(QTreeWidgetItem*,int)));
    connect(run,SIGNAL(Open(QWidget* ,QString)), OpenItems, SLOT(OpenRun(QWidget* ,QString)));
    connect(Settings,SIGNAL(ChangeName(QString)), run, SLOT(ChangeName(QString)));
//    connect(Structure,SIGNAL(ApplySettings(QString,StructureSetting*)), this, SLOT(SetStructure(QString,StructureSetting*)));
//    //On ouvre le paramétrage
    OpenItems->OpenRun(Settings,RunName);
}
void PDEPricer::LoadRun(QString RunName,Run* run)
{
    // On créé la fenètre de paramètres
//    RunSettings* Settings = new RunSettings();
//    Settings->Se
//    Settings->setParent(this);
//    Settings->SetSettingName(RunName);
//    Settings->setAccessibleName(RunName);
//    WorkSpace->LoadAllStructuresInRun(Settings);
//    // On connecte tous les signaux provenant des listes de produits
////    connect(Settings,SIGNAL(Open(QWidget* ,QString)), OpenItems, SLOT(OpenProduct(QWidget* ,QString)));
////    connect(OpenItems,SIGNAL(AddProduct(ProductSettings*)), Settings, SLOT(AddProduct(ProductSettings*)));
//    connect(Settings,SIGNAL(SetRun(QString,Run*)),WorkSpace,SLOT(SetRun(QString,Run*)));
//    connect(Settings,SIGNAL(SetRun(QString,Run*)),Runs,SLOT(SetRun(QString,Run*)));
////    connect(Settings,SIGNAL(CloseProductSettings(QWidget*)),OpenItems,SLOT(Close(QWidget*)));
//    // On créé le linker du Run
//    RunLinker* run = new RunLinker(ui->Runs,Settings,RunName);
//    run->setParent(this);
////    // On connecte
//    connect(run,SIGNAL(ChangeTabName(QWidget*,QString)),OpenItems,SLOT(ChangeTabName(QWidget*,QString)));
//    connect(run,SIGNAL(ChangeItemName(QTreeWidgetItem*,QString)),Runs,SLOT(ChangeItemName(QTreeWidgetItem*,QString)));
//    connect(run,SIGNAL(Selected(RunLinker*)), Runs, SLOT(SetCurrent(RunLinker*)));
//    connect(Runs,SIGNAL(NewSelection(QTreeWidgetItem*,int)), run, SLOT(SelectIf(QTreeWidgetItem*,int)));
//    connect(run,SIGNAL(Open(QWidget* ,QString)), OpenItems, SLOT(OpenRun(QWidget* ,QString)));
//    connect(Settings,SIGNAL(ChangeName(QString)), run, SLOT(ChangeName(QString)));
////    connect(Structure,SIGNAL(ApplySettings(QString,StructureSetting*)), this, SLOT(SetStructure(QString,StructureSetting*)));
////    //On ouvre le paramétrage
//    OpenItems->OpenRun(Settings,RunName);



}
void PDEPricer::DeleteStructure(StructureLinker* Structure)
{
    // On supprime le fichier
    WorkSpace->DeleteStructure(Structure->GetName());
    // On ferme le paramétrage
    OpenItems->Close(Structure->GetSettings());
}
void PDEPricer::LoadStructure(QString StructureName,QStringList)
{
    // On créé la fenetre de paramétrage de la structure
    StructureSetting* Settings = new StructureSetting();
    Settings->SetName(StructureName);
    Settings->setAccessibleName(StructureName);
    // On connecte tous les signaux provenant des listes de produits
    connect(Settings,SIGNAL(Open(QWidget* ,QString)), OpenItems, SLOT(OpenProduct(QWidget* ,QString)));
    connect(OpenItems,SIGNAL(AddProduct(ProductSettings*)), Settings, SLOT(AddProduct(ProductSettings*)));
    connect(Settings,SIGNAL(WorkSpaceIntegrateProductsInStructure(QListWidget*,QString)),WorkSpace,SLOT(IntegrateProductsInStructure(QListWidget*,QString)));
    connect(Settings,SIGNAL(TreeIntegrateProductsInStructure(QListWidget*,QString)),Structures,SLOT(IntegrateProductsInStructure(QListWidget*,QString)));
    connect(WorkSpace,SIGNAL(AffectProductIfName(QString,QString)),Settings,SLOT(AffectProductIfName(QString,QString)));
    connect(WorkSpace,SIGNAL(ApplyWithoutSaving()),Settings,SLOT(ApplyWithoutSaving()));
    // On créé le linker de la structure
    StructureLinker* Structure = new StructureLinker(ui->Structures,Settings,StructureName);
    Structure->setParent(this);
    // On connecte tous les signaux provenant de la structure
    connect(Structure,SIGNAL(Selected(StructureLinker*)), Structures, SLOT(SetCurrent(StructureLinker*)));
    connect(Structures,SIGNAL(NewSelection(QTreeWidgetItem*,int)), Structure, SLOT(SelectIf(QTreeWidgetItem*,int)));
    connect(Structure,SIGNAL(Open(QWidget* ,QString)), OpenItems, SLOT(OpenStructure(QWidget* ,QString)));
    connect(Structure,SIGNAL(changeChildName(QString,QString)), Runs, SLOT(changeChildName(QString,QString)));
    connect(Structure,SIGNAL(ChangeItemName(QTreeWidgetItem*,QString)), Structures, SLOT(ChangeItemName(QTreeWidgetItem*,QString)));
    connect(Structure,SIGNAL(ApplySettings(QString,StructureSetting*)), this, SLOT(SetStructure(QString,StructureSetting*)));
    connect(this,SIGNAL(AddProduct(ProductSettings*)), Settings, SLOT(AddProduct(ProductSettings*)));
    connect(Settings,SIGNAL(CloseProductSettings(QWidget*)),OpenItems,SLOT(Close(QWidget*)));
}
void PDEPricer::LoadProduct(QString ProductName,Prod* Product)
{
    // On créé la fenetre de paramétrage du produit
    ProductSettings* Settings = new ProductSettings();
    Settings->setParent(this);
    Settings->SetSettingName(ProductName);
    Settings->setAccessibleName(ProductName);
    Settings->SetProduct(Product);
    ProductLinker* ProdLinker = new ProductLinker(Products->GetList(),Settings,ProductName);
    connect(ProdLinker,SIGNAL(ChangeItemName(QListWidgetItem*,QString)), this, SLOT(ChangeGeneralProductName(QListWidgetItem*,QString)));
    connect(ProdLinker,SIGNAL(Selected(ProductLinker*)), Products, SLOT(SetCurrent(ProductLinker*)));
    connect(ProdLinker,SIGNAL(TapOutItem(QListWidgetItem*)), this, SLOT(DeleteGeneralProduct(QListWidgetItem*)));
    connect(Products,SIGNAL(NewSelection(QListWidgetItem*)), ProdLinker, SLOT(SelectIf(QListWidgetItem*)));
    // On envoi un signal à toutes les Structures
    emit AddProduct(Settings);
}
void PDEPricer::LoadProductInStructure(QString ProductName,Prod*,StructureSetting* structureSettings)
{
    // On récupère ProductSetting de la liste Générale
    Products->SetCurrent(ProductName);
    ProductSettings* Settings = Products->GetCurrentSettings();
    // On ajoute le produit dans la premiere liste de la structure
    structureSettings->AddProduct(Settings);
}
void PDEPricer::SetStructure(QString Name,StructureSetting* Settings)
{
    // On change le nom de l'onglet
    OpenItems->ChangeTabName(Settings,Name);
}
void PDEPricer::SetProduct(QString Name,ProductSettings* Settings)
{
    // On change le nom de l'onglet
    OpenItems->ChangeTabName(Settings,Name);
}
void PDEPricer::ChangeGeneralProductName(QListWidgetItem* Item,QString NewName)
{
    // Si le nom est libre ...
    if(!(IsIn(NewName,Products->GetList()->row(Item))))
    {
        // On change le nom de l'item
        Item->setText(NewName);
    }
}
void PDEPricer::DeleteGeneralProduct(QString ProductName)
{
    // On récupère l'item produit de la liste Générale
    Products->SetCurrent(ProductName);
    QListWidgetItem* Item = Products->GetCurrentItem();
    // On le supprime
    delete Item;
}
void PDEPricer::DeleteGeneralProduct(QListWidgetItem* item)
{
    // On récupère l'item produit de la liste Générale
    Products->SetCurrent(item->text());
    QListWidgetItem* Item = Products->GetCurrentItem();
    // On le supprime
    delete Item;
}
void PDEPricer::AddGeneralProduct(ProductSettings* Settings)
{
    ProductLinker* ProdLinker = new ProductLinker(Products->GetList(),Settings,Settings->GetSettingName());
    connect(ProdLinker,SIGNAL(ChangeItemName(QListWidgetItem*,QString)), this, SLOT(ChangeGeneralProductName(QListWidgetItem*,QString)));
    connect(ProdLinker,SIGNAL(TapOutItem(QListWidgetItem*)), this, SLOT(DeleteGeneralProduct(QListWidgetItem*)));
    connect(Products,SIGNAL(NewSelection(QListWidgetItem*)), ProdLinker, SLOT(SelectIf(QListWidgetItem*)));
}
bool PDEPricer::IsIn(QString text, short ExcludedId)
{
    short ItemCard = Products->GetList()->count();
    bool In = false;
    for(short i=0;i<ExcludedId;i++)
    {
        if(strcmp(Products->GetList()->item(i)->text().toUtf8(),text.toUtf8())==0)
       {
            In = true;
       }
    }
    for(short i=ExcludedId+1;i<ItemCard;i++)
    {
        if(strcmp(Products->GetList()->item(i)->text().toUtf8(),text.toUtf8())==0)
       {
            In = true;
       }
    }
    return In;
}
QListWidgetItem* PDEPricer::GetGeneralItemProduct(QString ProductName)
{
    short ItemCard = Products->GetList()->count();
    QListWidgetItem* GeneralItemProduct;
    for(short i=0;i<ItemCard;i++)
    {
        if(strcmp(Products->GetList()->item(i)->text().toUtf8(),ProductName.toUtf8())==0)
       {
            GeneralItemProduct = Products->GetList()->item(i);
       }
    }
    return GeneralItemProduct;
}
