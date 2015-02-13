#ifndef RUNLINKER_H
#define RUNLINKER_H

# include "RunSettings.h"

class RunLinker : public QWidget
{
    Q_OBJECT

private :

    QTreeWidgetItem* Item;
    RunSettings* _Settings;

public :

    RunLinker(QTreeWidget*,RunSettings*,QString);
    QTreeWidgetItem* GetItem();
    QString GetName();
    QWidget* GetSettings();

public slots:

    void SelectIf(QTreeWidgetItem*,int);
    void OpenSettingsIf(QTreeWidgetItem*,int);
    void ChangeName(QString);

signals:

    void Selected(RunLinker*);
    void Open(QWidget* ,QString);
    void ChangeItemName(QTreeWidgetItem*,QString);
    void ChangeTabName(QWidget*,QString);
    void changeChildName(QString,QString);
};


#endif // RUNLINKER_H
