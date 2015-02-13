#ifndef LIST_H
#define LIST_H

# include <QWidget>
# include <QPushButton>
# include "ProductLinker.h"

class List : public QWidget
{

    Q_OBJECT

private:

    QListWidget* _List;
    QPushButton* _AddItem;
    QPushButton* _DeleteItem;
    ProductLinker* _Current;

public:

    List(QListWidget*,QPushButton*,QPushButton*);
    List(QListWidget*);
    List();
    bool IsIn(QString);
    bool IsIn(QString, short ExcludedId);
    QListWidget* GetList();
    QListWidgetItem* GetCurrentItem();
    ProductSettings* GetCurrentSettings();
    QString GetCurrentName();
    ProductLinker* GetCurrent();
    int GetCurrentItemIndex();
    int DeleteItemAnswear(QString);
    void SetCurrent(QString);
    QListWidgetItem* GetItem(QString);


public slots:

    void AddItem();
    void DeleteItem();
    void SetCurrent(ProductLinker*);
    void ChangeItemName(QListWidgetItem*, QString);
    void TapOutItem(QListWidgetItem*);
    void changeItemNameIfNameIs(QString,QString);
//    void DeleteItem(QListWidgetItem*);

signals:

    void AddProduct(QString);
    void Delete(QListWidgetItem*);
    void ChangeItemNameIf(QString,QString);
    void NewSelection(QListWidgetItem*);
};

#endif // LIST_H
