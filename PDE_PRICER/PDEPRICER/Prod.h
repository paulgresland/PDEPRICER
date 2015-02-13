#ifndef PRODUCT_H
#define PRODUCT_H

# include <QWidget>

class Prod : public QWidget
{

    Q_OBJECT

private:

    int IndexType;
    int IndexNat;
    double Strike;
    double Maturity;

public:

    Prod(int,int,double,double);
    Prod();
    int GetType();
    int GetNat();
    double GetStrike();
    double GetMaturity();

public slots:

    void SetType(int t);
    void SetNat(int n);
    void SetStrike(double s);
    void SetMaturity(double m);

signals:

};




#endif // PRODUCT_H
