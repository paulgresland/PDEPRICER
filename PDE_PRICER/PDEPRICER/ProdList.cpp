# include "ProdList.h"
# include <QMessageBox>

ProdList::ProdList(QString name)
{
    Name = name;
}
bool ProdList::IsIn(QString text)
{
    if(List.contains(text))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void ProdList::SetList(QStringList list)
{
    List = list;
}
void ProdList::AddItem()
{
    // On défini le nom présumé de l'item
    QString TextItem = "New" + Name;
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
//      emit AddItem(TextItem1);
        List = List<<TextItem1;
//        Item->setText(TextItem1);
//        ProductsList->addItem(Item);
    }
    // En revanche si le nom 'New + type' est libre on l'affecte directement
    else
    {
        List = List<<TextItem;
    }
}
void ProdList::AddItem(QString name)
{
    List = List<<name;
}
