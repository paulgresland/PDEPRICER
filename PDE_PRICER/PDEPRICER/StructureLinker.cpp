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
    // Si l'item sur lequel l'op�rateur a cliqu� est _Item ...
    if(item == Item)
    {
        // L'Arbre s�lectionne le linker
        emit Selected(this);
    }
}
void StructureLinker::OpenSettingsIf(QTreeWidgetItem* item,int)
{
    // Si l'item sur lequel l'op�rateur a cliqu� est _Item ...
    if(item == Item)
    {
        // On envoi au message au Worktab d'ouvrir les settings
        emit Open(_Settings,Item->text(0));
    }
}
void StructureLinker::ChangeName(QString NewName)
{
    // On r�cup�re l'ancien nom
    QString OldName = Item->text(0);
    // On envoi un signal � l'Arbres des structures pour changer le nom apr�s v�rification
    emit ChangeItemName(Item,NewName);
    // On donne � la table le nom entr�
    _Settings->SetName(Item->text(0));
    // On envoi un message � l'arbre des Runs
    emit changeChildName(OldName,NewName);
    // On fait remonter les param�tres au Pricer
    emit ApplySettings(Item->text(0),_Settings);
}
