# include "RunTree.h"
//# include "RunLinker.h"
//# include "RunSettings.h"
# include <QMessageBox>
# include <QObject>

///////////////// Public Functions ////////////////////////////////////////////////////////////////////////////////////////////////
RunTree::RunTree(QTreeWidget* t ,QPushButton* a,QPushButton* d)
{
    _Tree = t;
    _AddItem = a;
    _DeleteItem = d;
    _Current = NULL;

    connect(_AddItem, SIGNAL(clicked()), this, SLOT(AddItem()));
    connect(_DeleteItem, SIGNAL(clicked()), this, SLOT(DeleteItem()));
}
bool RunTree::IsIn(QString text)
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
bool RunTree::IsIn(QString text, short ExcludedId)
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
QTreeWidgetItem* RunTree::GetItem(QString text)
{
    short i = 0;
    bool find = false;
    while(!(find))
    {
        if(strcmp(_Tree->topLevelItem(i)->text(0).toUtf8(),text.toUtf8())==0)
       {
            find = true;
            return _Tree->topLevelItem(i);
       }
        i++;
    }
}
//void RunTree::CleanStructure(QTreeWidgetItem* Structure)
//{
//    while(!(Structure->childCount()==0))
//    {
//        Structure->removeChild(Structure->child(0));
//    }
//}
/////////////////// Public Slots ////////////////////////////////////////////////////////////////////////////////////////////////
void RunTree::AddItem()
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
        emit AddRun(TextItem1);
    }
    // En revanche si le nom 'New + type' est libre on l'affecte directement
    else
    {
        emit AddRun(TextItem);
    }
}
void RunTree::DeleteItem()
{
    // Si un item est sélectionné ...
    if(!(_Current==NULL))
    {
        {
            // On envoi le signal de destruction de l'item au WorkSpace et de fermeture au WorkTab
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
//void RunTree::DeleteProductInStructure(QString ChildName,QString RootName)
//{
//    short i = 0;
//    while(!(_Tree->topLevelItem(i)->text(0)== RootName))
//    {
//        i++;
//    }
//    QTreeWidgetItem* Root = _Tree->topLevelItem(i);
//    short j = 0;
//    while(j<Root->childCount())
//    {
//        if(Root->child(j)->text(0)==ChildName)
//        {
//            delete Root->child(j);
//            j=0;
//        }
//        else
//        {
//            j++;
//        }
//    }
//}
//void RunTree::SetCurrent(StructureLinker* linker)
//{
//    _Current = linker;
//}
void RunTree::ChangeItemName(QTreeWidgetItem* Item, QString NewName)
{
    // Si le nom est déja pris ...
    if(IsIn(NewName,_Tree->indexOfTopLevelItem(Item)))
    {
        QMessageBox::information(this,"ERREUR NOMINATION", "Le Run n'a pas été renommée <Br> Le nom " + NewName + " est déja affecté à un autre Run");
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
void RunTree::changeChildName(QString OldName,QString NewName)
{
    for(int i =0; i<_Tree->topLevelItemCount();i++)
    {
        QTreeWidgetItem* run = _Tree->topLevelItem(i);
        for(short j=0;j<run->childCount();j++)
        {
             QTreeWidgetItem* Structure = run->child(j);
            if(strcmp(Structure->text(0).toUtf8(),OldName.toUtf8())==0)
            {
                Structure->setText(0,NewName);
            }
        }
    }
}
void RunTree::SetRun(QString RunName,Run* run)
{
    // On récupère l'item
    QTreeWidgetItem* Item = GetItem(RunName);
    // On renomme la structure
    Item->child(0)->setText(0,run->GetStructureName());
    // On renomme le sous-Jacent
    Item->child(1)->setText(0,"Sous-Jacent("+QString::number(run->GetPrice())+","+QString::number(run->GetRate())+","+QString::number(run->GetVol())+","+QString::number(run->GetDiv())+")");
    // On renomme le sous-Jacent
    Item->child(2)->setText(0,"Grid("+QString::number(run->GetDiscretTime())+","+QString::number(run->GetDiscretPrice())+")");
}

//void RunTree::Open(QWidget* Settings ,QString Name)
//{
//    // On envoi un signal d'ouvertur de Settings à WorkTab
//    emit OpenProduct(Settings,Name);
//}
void RunTree::SetCurrent(RunLinker* linker)
{
    _Current = linker;
}
