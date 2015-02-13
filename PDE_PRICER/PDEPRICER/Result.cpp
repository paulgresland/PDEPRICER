# include "Result.h"
# include <QMessageBox>

Result::Result()
{
    TabResult = new QTableWidget(this);
    TabResult->setColumnCount (12);
    QStringList VerticalHeaderLabels;
    VerticalHeaderLabels = VerticalHeaderLabels <<""<< "Run"<<"Produit"<<"Prix"<<"S0"<<"r"<<"Sigma"<< "N"<<"M";
    TabResult->setVerticalHeaderLabels(VerticalHeaderLabels);
//    TabResult->horizontalHeaderItem(1)->setText("Details");
}
QTableWidget* Result::GetTab()
{
    return TabResult;
}
void Result::SetResult(double** NumParam,QString** StrParam , int Nb)
{
    TabResult->setRowCount(Nb);

    // On affiche
    for(int Line=0;Line<Nb;Line++)
    {
        // Les paramètres en QString
        for (int col=0;col<3;col++)
        {
            QTableWidgetItem* Out = new QTableWidgetItem();
            Out->setText(StrParam[Line][col]);
            TabResult->setItem(Line,col,Out);
        }
        // Les paramètres en double
        for (int col=4;col<12;col++)
        {
            QTableWidgetItem* Out = new QTableWidgetItem();
            Out->setText(QString::number((NumParam[Line][col-3])));
            TabResult->setItem(Line,col,Out);
        }
    }

}
