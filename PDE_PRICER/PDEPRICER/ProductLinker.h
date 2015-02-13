#ifndef PRODUCTLINKER_H
#define PRODUCTLINKER_H

# include <QListWidget>
# include "ProductSettings.h"

class ProductLinker : public QWidget
{
    Q_OBJECT

private :

    QListWidgetItem* Item;
    ProductSettings* _Settings;

public :

    ProductLinker(QListWidget*,ProductSettings*,QString);
    ~ProductLinker();
    QListWidgetItem* GetItem();
    QString GetName();
    ProductSettings* GetSettings();
    void DeleteAllItems();

public slots:

    void SelectIf(QListWidgetItem*);
    void OpenSettingsIf(QListWidgetItem*);
    void ChangeName(QString);
    void DeleteProduct();

signals:

    void Selected(ProductLinker*);
    void Open(QWidget* ,QString);
    void ChangeItemName(QListWidgetItem*,QString);
    void ChangeItemNameInTree(QListWidgetItem*,QString);
    void TapOutItem(QListWidgetItem*);
    void CloseSettings(ProductSettings*);


};


#endif // PRODUCTLINKER_H
