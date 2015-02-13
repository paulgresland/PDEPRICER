#include "StructureSettings.h"
#include "ui_StructureSettings.h"

#include <QMessageBox>

StructureSetting::StructureSetting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StructureSetting)
{
    ui->setupUi(this);
    Products = new List(ui->Product , ui->AddProduct ,ui->DeleteProduct);
    StructureProducts = new List(ui->StructureProduct);

    connect(ui->Appliquer,SIGNAL(clicked()),this,SLOT(Apply()));
    connect(ui->Integrate,SIGNAL(clicked()),this,SLOT(IntegrateProduct()));
    connect(ui->Remove,SIGNAL(clicked()),this,SLOT(RemoveProduct()));
    connect(Products,SIGNAL(AddProduct(QString)),this,SLOT(AddProduct(QString)));
    connect(Products,SIGNAL(ChangeItemNameIf(QString,QString)),StructureProducts,SLOT(changeItemNameIfNameIs(QString,QString)));
    connect(Products,SIGNAL(Delete(QListWidgetItem*)),this,SLOT(DeleteItem(QListWidgetItem*)));
}
StructureSetting::~StructureSetting()
{
    delete StructureProducts;
    delete Products;
    delete ui;
}
void StructureSetting::SetName(QString Name)
{
    // On retraite le nom
       Name = Name.toUtf8();
    // On affiche le nom dans les paramètres
    ui->Name->setText(Name);
}
QString StructureSetting::GetName()
{
    // On retraite le nom
    QString Name = ui->Name->text();
    Name = Name.toUtf8();
    return Name;
}
void StructureSetting::IntegrateProduct(QString ProductName)
{
    // On défini le Produit comme courrant dans la liste
    Products->SetCurrent(ProductName);
    // On intègre le Produit courrant
    IntegrateProduct();
}
///////////////// Public Slots ////////////////////////////////////////////////////////////////////////////////////////////////
void StructureSetting::Apply()
{
    // On récupère après retraitement le nom entré par l'opérateur
    QString NewName = GetName();
    // Si ce nom est vide ...
    if(NewName=="")
    {
        QMessageBox::information(this,"ERREUR NOMINATION", "La Structure n'a pas été renommée <Br> Entrez au moins un caractère");
    }
    // Si ce nom n'est pas vide ...
    else
    {
        // On envoi un signal de changement de nom au Linker
        emit ChangeName(NewName);
    }
    // On récupère la liste des produits à intégrer à la Structure
    QListWidget* List = StructureProducts->GetList();
    // On l'envoi à l'Arbre
    emit TreeIntegrateProductsInStructure(List,GetName());
    // On l'envoi au Workspace
//    QMessageBox::information(this,"",QString::number(List->count()));
    emit WorkSpaceIntegrateProductsInStructure(List,GetName());
}
void StructureSetting::ApplyWithoutSaving()
{
    // On récupère la liste des produits à intégrer à la Structure
    QListWidget* List = StructureProducts->GetList();
    // On l'envoi à l'Arbre
    emit TreeIntegrateProductsInStructure(List,GetName());
}
void StructureSetting::AddProduct(ProductSettings* Settings)
{
    // On créé le linker du produit
    ProductLinker* Product = new ProductLinker(ui->Product,Settings,Settings->GetSettingName());
    connect(Product,SIGNAL(Selected(ProductLinker*)), Products, SLOT(SetCurrent(ProductLinker*)));
    connect(Product,SIGNAL(Open(QWidget* ,QString)), this, SLOT(OpenProduct(QWidget* ,QString)));
    connect(Product,SIGNAL(ChangeItemName(QListWidgetItem*,QString)), Products, SLOT(ChangeItemName(QListWidgetItem*,QString)));
    connect(Product,SIGNAL(TapOutItem(QListWidgetItem*)), Products, SLOT(TapOutItem(QListWidgetItem*)));
    connect(Products,SIGNAL(NewSelection(QListWidgetItem*)), Product, SLOT(SelectIf(QListWidgetItem*)));
    connect(Product,SIGNAL(CloseSettings(ProductSettings*)),this,SLOT(CloseSettings(ProductSettings*)));
}
void StructureSetting::AddProduct(QString Name)
{
    // On créé la fenetre de paramètrage du produit
    ProductSettings* Settings = new ProductSettings();
    Settings->setAccessibleName(Name);
    Settings->SetSettingName(Name);
    // On fait remonter le signal à la WorkTab
    emit ProductAdded(Settings);
}
void StructureSetting::OpenProduct(QWidget* Settings ,QString Name)
{
    // On fait remonter le signal d'ouverture au WorkTab
    emit Open(Settings ,Name);
}
void StructureSetting::IntegrateProduct()
{
    // Si un item est sélectionne ...
    if(!(Products->GetCurrent()==NULL))
    {
        // On créé un nouveau linker pour le produit sélectionné
        ProductLinker* Product = new ProductLinker(StructureProducts->GetList(),Products->GetCurrentSettings(),Products->GetCurrentName());
        connect(Product,SIGNAL(Selected(ProductLinker*)), StructureProducts, SLOT(SetCurrent(ProductLinker*)));
        connect(Product,SIGNAL(Open(QWidget* ,QString)), this, SLOT(OpenProduct(QWidget* ,QString)));
        connect(Product,SIGNAL(TapOutItem(QListWidgetItem*)), StructureProducts, SLOT(TapOutItem(QListWidgetItem*)));
        connect(StructureProducts,SIGNAL(NewSelection(QListWidgetItem*)), Product, SLOT(SelectIf(QListWidgetItem*)));
        // On lie l'item produit à la table de paramètre du produit
        StructureProducts->GetList()->setItemWidget(Product->GetItem(),Products->GetCurrentSettings());
    }
}
void StructureSetting::RemoveProduct()
{
    // On supprime le produit de la liste
    delete StructureProducts->GetCurrentItem();
}
void StructureSetting::CloseSettings(ProductSettings* Product)
{
    emit CloseProductSettings(Product);
}
void StructureSetting::AffectProductIfName(QString ProductName,QString StructureName)
{
    // Si la Structure porte le bon nom ...
    if(GetName()==StructureName)
    {
        // On défini le produit comme courrant à la liste
        Products->SetCurrent(ProductName);
        //On lui intègre le produit
        IntegrateProduct(ProductName);
    }
}
void StructureSetting::DeleteItem(QListWidgetItem* Product)
{
    // On fait remonter le signal de la destruction au WorkTab
    emit DeleteProduct(Product);
}
