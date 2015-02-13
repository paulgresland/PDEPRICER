# include "ProductLinker.h"
# include "ProdList.h"
# include <QMessageBox>

ProductLinker::ProductLinker(QListWidget* parent,ProductSettings* settings, QString TextItem)
{
    _Settings = settings;
    _Settings->setAccessibleName(TextItem);
    _Settings->setParent(this);
    Item = new QListWidgetItem(parent);
    Item->setText(TextItem);
    parent->addItem(Item);
    connect(parent,SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(SelectIf(QListWidgetItem*)));
    connect(parent,SIGNAL(itemDoubleClicked(QListWidgetItem*)), this, SLOT(OpenSettingsIf(QListWidgetItem*)));
    connect(_Settings,SIGNAL(ChangeName(QString)), this, SLOT(ChangeName(QString)));
    connect(_Settings,SIGNAL(DeleteProduct()), this, SLOT(DeleteProduct()));
}
ProductLinker::~ProductLinker()
{

}
QListWidgetItem* ProductLinker::GetItem()
{
    return Item;
}
ProductSettings* ProductLinker::GetSettings()
{
    return _Settings;
}
QString ProductLinker::GetName()
{
    return Item->text();
}
void ProductLinker::DeleteAllItems()
{
    // On demande à la fentre de paramètres commune à tous les items de tous les détruire
    _Settings->DeleteAllItems();
    // On fait remonter à StructureStting le signal de fermer la table des paramètres du produit
    emit CloseSettings(_Settings);
}
///////////////// Public Slots ////////////////////////////////////////////////////////////////////////////////////////////////
void ProductLinker::SelectIf(QListWidgetItem* item)
{
    // Si l'item sur lequel l'opérateur a cliqué est _Item ...
    if(item == Item)
    {
        // La liste sélectionne le linker
        emit Selected(this);
    }
}
void ProductLinker::OpenSettingsIf(QListWidgetItem* item)
{
    // Si l'item sur lequel l'opérateur a cliqué est _Item ...
    if(item == Item)
    {
        // On fait remonter le signal d'ouverture à StructureSetting
        emit Open(_Settings,Item->text());
    }
}
void ProductLinker::ChangeName(QString NewName)
{
    // On envoi un signal aux listes qui change le nom des item après vérification
    emit ChangeItemName(Item,NewName);
    // On donne à la table le meme nom que l'item
    _Settings->setAccessibleName(Item->text());
}
void ProductLinker::DeleteProduct()
{
    // On fait remonter le signal de destruction à la liste
    emit TapOutItem(Item);
}
