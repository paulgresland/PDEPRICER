#ifndef STRUCTURESETTING_H
#define STRUCTURESETTING_H

#include <QtGui>
#include <QWidget>
#include "ProductSettings.h"
#include "ProductLinker.h"
#include "ProdList.h"
#include "List.h"

namespace Ui {
class StructureSetting;
}

class StructureSetting : public QWidget
{
    Q_OBJECT

private:

    Ui::StructureSetting *ui;
    List* Products;
    List* StructureProducts;

public:

    explicit StructureSetting(QWidget *parent = 0);
    ~StructureSetting();
    void SetName(QString);
    QString GetName();
    void IntegrateProduct(QString);

public slots:

    void Apply();
    void IntegrateProduct();
    void AddProduct(ProductSettings*);
    void AddProduct(QString);
    void OpenProduct(QWidget* ,QString);
    void RemoveProduct();
    void CloseSettings(ProductSettings*);
    void AffectProductIfName(QString,QString);
    void ApplyWithoutSaving();
    void DeleteItem(QListWidgetItem*);

signals:

    void ChangeName(QString);
    void ChangeTreeName(QString);
    void Open(QWidget* ,QString);
    void ProductAdded(ProductSettings*);
    void WorkSpaceIntegrateProductsInStructure(QListWidget*,QString);
    void TreeIntegrateProductsInStructure(QListWidget*,QString);
    void CloseProductSettings(QWidget*);
    void DeleteProduct(QListWidgetItem*);


};

#endif // STRUCTURESETTING_H
