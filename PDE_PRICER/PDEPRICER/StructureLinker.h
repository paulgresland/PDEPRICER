#ifndef TREEITEM_H
#define TREEITEM_H

# include "StructureSettings.h"

class StructureLinker : public QWidget
{
    Q_OBJECT

private :

    QTreeWidgetItem* Item;
    StructureSetting* _Settings;

public :

    StructureLinker(QTreeWidget*,StructureSetting*,QString);
    QTreeWidgetItem* GetItem();
    QString GetName();
    QWidget* GetSettings();

public slots:

    void SelectIf(QTreeWidgetItem*,int);
    void OpenSettingsIf(QTreeWidgetItem*,int);
    void ChangeName(QString);

signals:

    void Selected(StructureLinker*);
    void Open(QWidget* ,QString);
    void ChangeItemName(QTreeWidgetItem*,QString);
    void ApplySettings(QString,StructureSetting*);
    void changeChildName(QString,QString);

};

#endif // TREEITEM_H
