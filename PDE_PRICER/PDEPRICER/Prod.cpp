# include "Prod.h"
# include <QMessageBox>


Prod::Prod()
{}
Prod::Prod(int t, int n, double s, double m)
{
    IndexType = t;
    IndexNat = n;
    Strike = s;
    Maturity = m;
}
void Prod::SetType(int t)
{
    IndexType =t;
}
void Prod::SetNat(int n)
{
    IndexNat = n;
}
void Prod::SetStrike(double s)
{
    Strike = s;
}
void Prod::SetMaturity(double m)
{
    Maturity = m;
}
int Prod::GetType()
{
    return IndexType;
}
int Prod::GetNat()
{
    return IndexNat;
}
double Prod::GetStrike()
{
    return Strike;
}
double Prod::GetMaturity()
{
    return Maturity;
}
