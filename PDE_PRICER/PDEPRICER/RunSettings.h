#ifndef RUNSETTINGS_H
#define RUNSETTINGS_H

#include <QWidget>
#include <QtGui>
#include "Run.h"

namespace Ui {
class RunSettings;
}

class RunSettings : public QWidget
{
    Q_OBJECT

private:

    Ui::RunSettings *ui;
    Run* R;

public:

    explicit RunSettings(QWidget *parent = 0);
    ~RunSettings();
    void SetSettingName(QString);
    QString GetSettingName();
//    void IntegrateProduct(QString);

public slots:

    void Apply();
    void AddStructure(QString StuctureName);
//    void IntegrateProduct();
//    void OpenProduct(QWidget* ,QString);
//    void RemoveProduct();
//    void CloseSettings(ProductSettings*);
//    void AffectProductIfName(QString,QString);
//    void ApplyWithoutSaving();
//    void DeleteItem(QListWidgetItem*);

signals:

    void ChangeName(QString);
    void Open(QWidget* ,QString);
//    void ProductAdded(RunSettings*);
//    void WorkSpaceIntegrateProductsInStructure(QListWidget*,QString);
    void SetRun(QString,Run*);
//    void CloseProductSettings(QWidget*);
//    void DeleteProduct(QListWidgetItem*);


};

#endif // RUNSETTINGS_H
