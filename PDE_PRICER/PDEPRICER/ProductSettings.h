#ifndef PRODUCTSETTINGS_H
#define PRODUCTSETTINGS_H

#include <QWidget>
#include "Prod.h"

namespace Ui {
class ProductSettings;
}

class ProductSettings : public QWidget
{
    Q_OBJECT

private:

    Ui::ProductSettings *ui;
    Prod* Product;
    
public:

    explicit ProductSettings(QWidget *parent = 0);
    ~ProductSettings();
    void SetSettingName(QString);
    QString GetSettingName();
    Prod* GetProduct();
    void SetProduct(Prod*);
    void DeleteAllItems();

public slots :

    void Apply();

signals :

    void ChangeName(QString);
    void ChangeTreeName(QString);
    void SettingsApplied(ProductSettings*,QString,QString);
    void DeleteProduct();

};

#endif // PRODUCTSETTINGS_H
