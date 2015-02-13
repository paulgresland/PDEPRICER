# include "ProductTreeLinker.h"
# include <QMessageBox>


///////////////// Public Functions ////////////////////////////////////////////////////////////////////////////////////////////////
ProductTreeLinker::ProductTreeLinker(QTreeWidgetItem* parent,QWidget* settings, QString TextItem)
{
    _Settings = settings;
    Item = new QTreeWidgetItem(parent);
    Item->setText(0,TextItem);
    parent->addChild(Item);
}
QTreeWidgetItem* ProductTreeLinker::GetItem()
{
    return Item;
}
QWidget* ProductTreeLinker::GetSettings()
{
    return _Settings;
}
QString ProductTreeLinker::GetName()
{
    return Item->text(0);
}
///////////////// Public Slots ////////////////////////////////////////////////////////////////////////////////////////////////
void ProductTreeLinker::SelectIf(QTreeWidgetItem* item,int)
{
    // Si l'item sur lequel l'opérateur a cliqué est _Item ...
    if(item == Item)
    {
        // L'Arbre sélectionne le linker
        emit Selected(this);
    }
}
void ProductTreeLinker::OpenSettingsIf(QTreeWidgetItem* item,int)
{
    // Si l'item sur lequel l'opérateur a cliqué est _Item ...
    if(item == Item)
    {
        // On fait remonter le signal d'ouverture à l'Arbre
        emit Open(_Settings,Item->text(0));
    }
}
void ProductTreeLinker::ChangeName(QString NewName)
{
      // On change le nom
      Item->setText(0,NewName);
}
