#ifndef RUNTREE_H
#define RUNTREE_H

# include <QWidget>
# include <QTreeWidget>
# include <QPushButton>
# include "Run.h"
# include "RunLinker.h"

class RunTree : public QWidget
{

    Q_OBJECT

private:

    QTreeWidget* _Tree;
    QPushButton* _AddItem;
    QPushButton* _DeleteItem;
    RunLinker* _Current;

public:

    RunTree(QTreeWidget*,QPushButton*,QPushButton*);
    bool IsIn(QString);
    bool IsIn(QString, short ExcludedId);
//    void CleanRun(QTreeWidgetItem*);
    QTreeWidgetItem* GetItem(QString);

public slots:

    void AddItem();
    void DeleteItem();
    void SetCurrent(RunLinker*);
    void ChangeItemName(QTreeWidgetItem*, QString);
    void changeChildName(QString OldName,QString NewName);
    void SetRun(QString,Run*);
  //void Open(QWidget*,QString);

signals:

    void AddRun(QString);
    void DeleteItem(RunLinker*);
    void NewSelection(QTreeWidgetItem*,int);
    void ChangeName(QString OldName,QString NewName);
//    void OpenProduct(QWidget*,QString);

};


#endif // RUNTREE_H
