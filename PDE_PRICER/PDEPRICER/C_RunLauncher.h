#ifndef C_RUNLAUNCHER_H
#define C_RUNLAUNCHER_H

# include <QWidget>

double BSExplicitDiffAmerican(double price, double strike, double vol, double rate, double div, double T, int N, int M, QString type);
void ComputePrice();

#endif // C_RUNLAUNCHER_H
