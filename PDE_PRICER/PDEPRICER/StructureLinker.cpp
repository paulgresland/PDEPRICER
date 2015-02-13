# include "StructureLinker.h"
# include <QMessageBox>
# include <QTreeWidget>

///////////////// Public Functions ////////////////////////////////////////////////////////////////////////////////////////////////
StructureLinker::StructureLinker(QTreeWidget* parent,StructureSetting* settings, QString TextItem)
{
    _Settings = settings;
    _Settings->setParent(this);
    Item = new QTreeWidgetItem(parent);
    Item->setText(0,TextItem);
    parent->addTopLevelItem(Item);
    connect(parent,SIGNAL(itemClicked(QTreeWidgetItem*,int)), this, SLOT(SelectIf(QTreeWidgetItem*,int)));
    connect(parent,SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), this, SLOT(OpenSettingsIf(QTreeWidgetItem*,int)));
    connect(_Settings,SIGNAL(ChangeName(QString)), this, SLOT(ChangeName(QString)));
}
QTreeWidgetItem* StructureLinker::GetItem()
{
    return Item;
}
QWidget* StructureLinker::GetSettings()
{
    return _Settings;
}
QString StructureLinker::GetName()
{
    return Item->text(0);
}
///////////////// Public Slots ////////////////////////////////////////////////////////////////////////////////////////////////
void StructureLinker::SelectIf(QTreeWidgetItem* item,int)
{
    // Si l'item sur lequel l'opérateur a cliqué est _Item ...
    if(item == Item)
    {
        // L'Arbre sélectionne le linker
        emit Selected(this);
    }
}
void StructureLinker::OpenSettingsIf(QTreeWidgetItem* item,int)
{
    // Si l'item sur lequel l'opérateur a cliqué est _Item ...
    if(item == Item)
    {
        // On envoi au message au Worktab d'ouvrir les settings
        emit Open(_Settings,Item->text(0));
    }
}
void StructureLinker::ChangeName(QString NewName)
{
    // On récupère l'ancien nom
    QString OldName = Item->text(0);
    // On envoi un signal à l'Arbres des structures pour changer le nom après vérification
    emit ChangeItemName(Item,NewName);
    // On donne à la table le nom entré
    _Settings->SetName(Item->text(0));
    // On envoi un message à l'arbre des Runs
    emit changeChildName(OldName,NewName);
    // On fait remonter les paramètres au Pricer
    emit ApplySettings(Item->text(0),_Settings);
}
