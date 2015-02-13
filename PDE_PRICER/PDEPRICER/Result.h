#ifndef C_RESULT_H
#define C_RESULT_H

# include <QWidget>
# include <QTableWidget>

class Result : public QWidget
{

    Q_OBJECT

private:

    QTableWidget* TabResult;

public:

    Result();
    QTableWidget* GetTab();
    void SetResult(double** NumParam,QString** StrParam , int Nb);

public slots:




signals:

};




#endif // C_RESULT_H
