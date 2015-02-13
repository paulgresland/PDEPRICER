# include "Run.h"

Run::Run()
{
    StructureName = "";
    Price = 0;
    Rate = 0;
    Vol = 0;
    Div = 0;
    DiscretTime = 1;
    DiscretPrice = 1;
}
Run::Run(QString sn,double p ,double r,double v,double d,double dt,double dp)
{
    StructureName = sn;
    Price = p;
    Rate = r;
    Vol = v;
    Div = d;
    DiscretTime =dt;
    DiscretPrice = dp;
}
void Run::Set(QString sn,double p ,double r,double v,double d,double dt,double dp)
{
    StructureName = sn;
    Price = p;
    Rate = r;
    Vol = v;
    Div = d;
    DiscretTime =dt;
    DiscretPrice = dp;
}

QString Run::GetStructureName()
{
    return StructureName;
}
double Run::GetPrice()
{
    return Price;
}
double Run::GetRate()
{
    return Rate;
}
double Run::GetVol()
{
    return Vol;
}
double Run::GetDiv()
{
    return Div;
}
double Run::GetDiscretTime()
{
    return DiscretTime;
}
double Run::GetDiscretPrice()
{
    return DiscretPrice;
}
