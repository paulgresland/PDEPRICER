#ifndef PRODUCTTREELINKER_H
#define PRODUCTTREELINKER_H

# include <QTreeWidgetItem>
# include "TreeLinker.h"
# include "ProductSettings.h"

class ProductTreeLinker : public QWidget
{
    Q_OBJECT

private :

    QTreeWidgetItem* Item;
    QWidget* _Settings;

public :

    ProductTreeLinker(QTreeWidgetItem*,QWidget*,QString);
    QTreeWidgetItem* GetItem();
    QString GetName();
    QWidget* GetSettings();

public slots:

    void SelectIf(QTreeWidgetItem*,int);
    void OpenSettingsIf(QTreeWidgetItem*,int);
    void ChangeName(QString);

signals:

    void Selected(ProductTreeLinker*);
    void Open(QWidget* ,QString);
    void ChangeItemName(QTreeWidgetItem*,QString);
    void ApplySettings(QString,ProductSettings*);

};



#endif // PRODUCTTREELINKER_H
