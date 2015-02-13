# include "RunLinker.h"
# include <QMessageBox>
# include <QTreeWidget>

///////////////// Public Functions ////////////////////////////////////////////////////////////////////////////////////////////////
RunLinker::RunLinker(QTreeWidget* parent,RunSettings* settings, QString TextItem)
{
    // On ajoute le run dans l'arbre
    _Settings = settings;
    _Settings->setParent(this);
    Item = new QTreeWidgetItem(parent);
    Item->setText(0,TextItem);
    parent->addTopLevelItem(Item);
    // On ajoute l'item structure au run
    QTreeWidgetItem* structure = new QTreeWidgetItem(Item);
    structure->setText(0,"No Stucture");
    Item->addChild(structure);
    // On ajoute l'item sous-jacent au run
    QTreeWidgetItem* S = new QTreeWidgetItem(S);
    S->setText(0,"Sous-Jacent(0,0,0,0)");
    Item->addChild(S);
    // On ajoute l'item Grid au run
    QTreeWidgetItem* Grid = new QTreeWidgetItem(Grid);
    Grid->setText(0,"Grid(1,1)");
    Item->addChild(Grid);

    connect(parent,SIGNAL(itemClicked(QTreeWidgetItem*,int)), this, SLOT(SelectIf(QTreeWidgetItem*,int)));
    connect(parent,SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)), this, SLOT(OpenSettingsIf(QTreeWidgetItem*,int)));
//    connect(_Settings,SIGNAL(ChangeName(QString)), this, SLOT(ChangeName(QString)));

}
QTreeWidgetItem* RunLinker::GetItem()
{
    return Item;
}
QWidget* RunLinker::GetSettings()
{
    return _Settings;
}
QString RunLinker::GetName()
{
    return Item->text(0);
}
void RunLinker::ChangeName(QString NewName)
{
    // On envoi un signal à l'Arbre pour changer le nom
    emit ChangeItemName(Item,NewName);
    // On donne à la table le nom entré
    _Settings->SetSettingName(Item->text(0));
    // On envoi le nouveau nom au WorkTab
    emit ChangeTabName(_Settings,Item->text(0));
}
void RunLinker::SelectIf(QTreeWidgetItem* item,int)
{
    // Si l'item sur lequel l'opérateur a cliqué est _Item ...
    if(item == Item)
    {
        // L'Arbre sélectionne le linker
        emit Selected(this);
    }
}
void RunLinker::OpenSettingsIf(QTreeWidgetItem* item,int)
{
    // Si l'item sur lequel l'opérateur a cliqué est _Item ...
    if(item == Item)
    {
        // On envoi au message au Worktab d'ouvrir les settings
        emit Open(_Settings,Item->text(0));
    }
}
