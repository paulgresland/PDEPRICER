#ifndef TREE_H
#define TREE_H

# include <QWidget>
# include <QPushButton>
# include "StructureLinker.h"

class StructureTree : public QWidget
{

    Q_OBJECT

private:

    QTreeWidget* _Tree;
    QPushButton* _AddItem;
    QPushButton* _DeleteItem;
    StructureLinker* _Current;

public:

    StructureTree(QTreeWidget*,QPushButton*,QPushButton*);
    bool IsIn(QString);
    bool IsIn(QString, short ExcludedId);
    void CleanStructure(QTreeWidgetItem*);
    QTreeWidgetItem* GetItem(QString);

public slots:

    void AddItem();
    void DeleteItem();
    void SetCurrent(StructureLinker*);
    void ChangeItemName(QTreeWidgetItem*, QString);
    void IntegrateProductsInStructure(QListWidget*,QString);
    void Open(QWidget*,QString);
    void DeleteProductInStructure(QString,QString);
    void SetProduct(ProductSettings*,QString,QString);

signals:

    void AddStructure(QString);
    void DeleteItem(StructureLinker*);
    void NewSelection(QTreeWidgetItem*,int);
    void ChangeName(QString OldName,QString NewName);
    void OpenProduct(QWidget*,QString);
    void ChangeProductNameInSTructure(QString OldName,QString NewName,QString StructureName);

};


#endif // TREE_H
