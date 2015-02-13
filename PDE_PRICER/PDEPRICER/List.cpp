
# include "List.h"
# include <QMessageBox>

///////////////// Public Functions ////////////////////////////////////////////////////////////////////////////////////////////////
List::List()
{
    _List = new QListWidget(this);
}
List::List(QListWidget* l ,QPushButton* a,QPushButton* d)
{
    _List = l;
    _AddItem = a;
    _DeleteItem = d;
    _Current = NULL;

    connect(_AddItem, SIGNAL(clicked()), this, SLOT(AddItem()));
    connect(_DeleteItem, SIGNAL(clicked()), this, SLOT(DeleteItem()));
}
List::List(QListWidget* l)
{
    _List = l;
    _AddItem = NULL;
    _DeleteItem = NULL;
    _Current = NULL;
}
QListWidget* List::GetList()
{
    return _List;
}
QListWidgetItem* List::GetCurrentItem()
{
    return _List->currentItem();
}
ProductSettings* List::GetCurrentSettings()
{
    return _Current->GetSettings();
}
QString List::GetCurrentName()
{
    return _Current->GetName();
}
ProductLinker* List::GetCurrent()
{
    return _Current;
}
int List::GetCurrentItemIndex()
{
    return _List->currentRow();
}
int List::DeleteItemAnswear(QString text)
{
    return QMessageBox::question(this, "Destruction de " + text, "Le produit " + text + " sera définitivemnt retirer de toutes les structures. <Br> Souhaitez vous poursuivre sa destruction?", QMessageBox::Yes | QMessageBox::No);
}
void List::SetCurrent(QString text)
{
    // On récupère l'item qui porte le bon nom
    QListWidgetItem* item = GetItem(text);
    // On fait remonter un signal pour sélectionner l'item
    emit NewSelection(item);
}
bool List::IsIn(QString text)
{
    short ItemCard = _List->count();
    bool In = false;
    for(short i=0;i<ItemCard;i++)
    {
        if(strcmp(_List->item(i)->text().toUtf8(),text.toUtf8())==0)
       {
            In = true;
       }
    }
    return In;
}
bool List::IsIn(QString text, short ExcludedId)
{
    short ItemCard = _List->count();
    bool In = false;
    for(short i=0;i<ExcludedId;i++)
    {
        if(strcmp(_List->item(i)->text().toUtf8(),text.toUtf8())==0)
       {
            In = true;
       }
    }
    for(short i=ExcludedId+1;i<ItemCard;i++)
    {
        if(strcmp(_List->item(i)->text().toUtf8(),text.toUtf8())==0)
       {
            In = true;
       }
    }
    return In;
}
QListWidgetItem* List::GetItem(QString text)
{
    short i =0;
    bool reserch = true;
    while(reserch&&(i<_List->count()))
    {
        if(strcmp(_List->item(i)->text().toUtf8(),text.toUtf8())==0)
       {
            return _List->item(i);
            reserch = false;
       }
        i++;
    }
}
/////////////////// Public Slots ////////////////////////////////////////////////////////////////////////////////////////////////
void List::AddItem()
{
    // On défini le nom présumé de l'item
    QString TextItem = "NewProduct";
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
        // On envoi le message de création à StructureSetting
        emit AddProduct(TextItem1);
    }
    // En revanche si le nom 'New + type' est libre on l'affecte directement
    else
    {
        emit AddProduct(TextItem);
    }
}
void List::DeleteItem()
{
    // Si un item est sélectionné ...
    if(!(_Current==NULL))
    {
        // On demande une confiramtion à l'opérateur
        QString Name = _Current->GetName();
        int Answear = DeleteItemAnswear(Name);
        // Si l'opérateur confirme la destruction ...
        if(Answear == QMessageBox::Yes)
        {

            // On fait remonter le signal de la destruction à StructureSettings
            emit Delete(_Current->GetItem());
            // On demande au linker de détruires tous les items identiques
            _Current->DeleteAllItems();
        }
    }
}
void List::TapOutItem(QListWidgetItem* item)
{
    // On supprime l'item
    delete item;
    // On remet à jour le linker courrant
    _Current = NULL;
    emit NewSelection(_List->currentItem());
}
void List::SetCurrent(ProductLinker* linker)
{
    _Current = linker;
}
void List::ChangeItemName(QListWidgetItem* Item, QString NewName)
{
    // Si le nom est libre ...
    if(!(IsIn(NewName,_List->row(Item))))
    {
//        QMessageBox::information(this,"ERREUR NOMINATION","Ca passe");
        // On récupère l'ancien nom
        QString OldName = Item->text();
        // On change le nom de l'item
        Item->setText(NewName);
        // On envoi un signal de changement de nom à l'autre liste
        emit ChangeItemNameIf(OldName,NewName);
    }
}
void List::changeItemNameIfNameIs(QString OldName,QString NewName)
{
    for(short i =0;i<_List->count();i++)
    {
        if(strcmp(_List->item(i)->text().toUtf8(),OldName.toUtf8())==0)
        {
            _List->item(i)->setText(NewName);
        }
    }
}
