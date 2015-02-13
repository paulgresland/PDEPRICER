#include <QTextCodec>
#include <QApplication>
#include "pdepricer.h"
#include "C_RunLauncher.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("utf8"));
    PDEPricer Pricer;
    Pricer.show();
    Pricer.LoadLastWorkSpace();
    return a.exec();
}
