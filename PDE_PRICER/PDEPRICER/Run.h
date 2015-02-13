#ifndef RUNDEFINITION_H
#define RUNDEFINITION_H

# include <QWidget>

class Run : public QWidget
{

    Q_OBJECT

    private:

        QString StructureName;
        double Price;
        double Rate;
        double Vol;
        double Div;
        double DiscretTime;
        double DiscretPrice;

    public:

        Run();
        Run(QString sn,double p ,double r,double v,double d,double dt,double dp);
        void Set(QString sn,double p ,double r,double v,double d,double dt,double dp);
        QString GetStructureName();
        double GetPrice();
        double GetRate();
        double GetVol();
        double GetDiv();
        double GetDiscretTime();
        double GetDiscretPrice();

    public slots:

    signals:

};




#endif // RUNDEFINITION_H
