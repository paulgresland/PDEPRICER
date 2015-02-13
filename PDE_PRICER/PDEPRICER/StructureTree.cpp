# include "StructureTree.h"
# include "StructureLinker.h"
# include "ProductTreeLinker.h"
# include "ProductSettings.h"
# include <QMessageBox>
# include <QObject>

///////////////// Public Functions ////////////////////////////////////////////////////////////////////////////////////////////////
StructureTree::StructureTree(QTreeWidget* t ,QPushButton* a,QPushButton* d)
{
    _Tree = t;
    _AddItem = a;
    _DeleteItem = d;
    _Current = NULL;

    connect(_AddItem, SIGNAL(clicked()), this, SLOT(AddItem()));
    connect(_DeleteItem, SIGNAL(clicked()), this, SLOT(DeleteItem()));
}
bool StructureTree::IsIn(QString text)
{
    short ItemCard = _Tree->topLevelItemCount();
    bool In = false;
    for(short i=0;i<ItemCard;i++)
    {
        if(strcmp(_Tree->topLevelItem(i)->text(0).toUtf8(),text.toUtf8())==0)
       {
            In = true;
       }
    }
    return In;
}
bool StructureTree::IsIn(QString text, short ExcludedId)
{
    short ItemCard = _Tree->topLevelItemCount();
    bool In = false;
    for(short i=0;i<ExcludedId;i++)
    {
        if(strcmp(_Tree->topLevelItem(i)->text(0).toUtf8(),text.toUtf8())==0)
       {
            In = true;
       }
    }
    for(short i=ExcludedId+1;i<ItemCard;i++)
    {
        if(strcmp(_Tree->topLevelItem(i)->text(0).toUtf8(),text.toUtf8())==0)
       {
            In = true;
       }
    }
    return In;
}
QTreeWidgetItem* StructureTree::GetItem(QString text)
{
    QTreeWidgetItem* item;
    short i = 0;
    bool find = false;
    while(!(find))
    {
        if(strcmp(_Tree->topLevelItem(i)->text(0).toUtf8(),text.toUtf8())==0)
       {
            find = true;
            item = _Tree->topLevelItem(i);
       }
        i++;
    }
    return item;
}
void StructureTree::CleanStructure(QTreeWidgetItem* Structure)
{
    while(!(Structure->childCount()==0))
    {
        Structure->removeChild(Structure->child(0));
    }
}
///////////////// Public Slots ////////////////////////////////////////////////////////////////////////////////////////////////
void StructureTree::AddItem()
{
    // On défini le nom présumé de l'item
    QString TextItem = "New" + _Tree->objectName();
    // Si ce nom est déja pris ...
    if(IsIn(TextItem))
    {
        // On ajoute l'index n au nom
        short n = 1;
        QString TextItem1 = TextItem + QString::number(n);
        // On cherche le plus petit n pour rendre le nom libre
        while(IsIn(TextItem1))
        {
            n++;
            TextItem1 = TextItem + QString::number(n);
        }
        // On envoi au Pricer le signal de création
        emit AddStructure(TextItem1);
    }
    // En revanche si le nom 'New + type' est libre on l'affecte directement
    else
    {
        emit AddStructure(TextItem);
    }
}
void StructureTree::DeleteItem()
{
    // Si un item est sélectionné ...
    if(!(_Current==NULL))
    {
        // Si l'item est une Structure ...
//        if(_Current instanceof StructureLinker*)
        {
            // On envoi le signal de destruction de l'item au Pricer
            emit DeleteItem(_Current);
            // On supprime l'item de l'arbre
            QTreeWidgetItem* Structure = _Current->GetItem();
            delete Structure;
            _Current = NULL;
            // On envoi un signal aux Linkers qu'un nouvel item est selectionné
            emit NewSelection(_Tree->currentItem(),0);
        }
    }
}
void StructureTree::DeleteProductInStructure(QString ChildName,QString RootName)
{
    short i = 0;
    while(!(_Tree->topLevelItem(i)->text(0)== RootName))
    {
        i++;
    }
    QTreeWidgetItem* Root = _Tree->topLevelItem(i);
    short j = 0;
    while(j<Root->childCount())
    {
        if(strcmp(Root->child(j)->text(0).toUtf8(),ChildName.toUtf8())==0)
        {
            delete Root->child(j);
            j=0;
        }
        else
        {
            j++;
        }
    }
}
void StructureTree::SetCurrent(StructureLinker* linker)
{
    _Current = linker;
}
void StructureTree::ChangeItemName(QTreeWidgetItem* Item, QString NewName)
{
    // Si le nom est déja pris ...
    if(IsIn(NewName,_Tree->indexOfTopLevelItem(Item)))
    {
        QMessageBox::information(this,"ERREUR NOMINATION", "La Structure n'a pas été renommée <Br> Le nom " + NewName + " est déja affecté à une structure");
    }
    // Sinon ...
    else
    {
        // On récupère le nom actuel
        QString OldName = Item->text(0);
        // On change le nom
        Item->setText(0,NewName);
        // On envoi un message de changement de nom au Workspace
        emit ChangeName(OldName,NewName);
    }
}
void StructureTree::IntegrateProductsInStructure(QListWidget* ProductsList, QString StructureName)
{
    // On récupère l'Item de la structure
    QTreeWidgetItem* Structure = GetItem(StructureName);
    // On fait un clean de la structure dans l'Arbre
    CleanStructure(Structure);
    // Pour tous les produits de la liste ...
    for(short i=0;i<ProductsList->count();i++)
    {
        // On récupère l'item produit de la liste
        QListWidgetItem* Product = ProductsList->item(i);
        // On récupère la table de paramétrage du produit
        QWidget* ProductSetting = ProductsList->itemWidget(Product);

        // On créé un nouveau linker pour le produit
        ProductTreeLinker* Linker = new ProductTreeLinker(Structure,ProductSetting,Product->text());
        Linker->setParent(this);
        Structure->setExpanded(true);
        connect(_Tree,SIGNAL(itemClicked(QTreeWidgetItem*,int)), Linker, SLOT(SelectIf(QTreeWidgetItem*,int)));
        connect(_Tree,SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), Linker, SLOT(OpenSettingsIf(QTreeWidgetItem*,int)));
        connect(Linker,SIGNAL(Open(QWidget*,QString)),this,SLOT(Open(QWidget*,QString)));
        connect(ProductSetting,SIGNAL(ChangeTreeName(QString)), Linker, SLOT(ChangeName(QString)));
        connect(ProductSetting,SIGNAL(SettingsApplied(ProductSettings*,QString,QString)),this,SLOT(SetProduct(ProductSettings*,QString,QString)));
    }
}
void StructureTree::Open(QWidget* Settings ,QString Name)
{
    // On envoi un signal d'ouvertur de Settings à WorkTab
    emit OpenProduct(Settings,Name);
}
void StructureTree::SetProduct(ProductSettings*,QString OldName,QString NewName)
{
    // On parcoure tout les enfants de l'arbre
    short StructureCard = _Tree->topLevelItemCount();
    for(short i=0;i<StructureCard;i++)
    {
        QTreeWidgetItem* Structure = _Tree->topLevelItem(i);
        short ProductCard = Structure->childCount();
        bool finded = false;
        for(short j=0;j<ProductCard;j++)
        {
            QTreeWidgetItem* Product = Structure->child(j);
            if(strcmp(Product->text(0).toUtf8(),OldName.toUtf8())==0)
            {
                Product->setText(0,NewName);
                finded = true;
            }
        }
        if(finded)
        {
            emit ChangeProductNameInSTructure(OldName,NewName,Structure->text(0));
        }
    }
}



