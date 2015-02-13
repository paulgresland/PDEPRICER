#ifndef WORKTAB_H
#define WORKTAB_H

# include <QWidget>
# include <QTabWidget>
# include "StructureSettings.h"
# include "RunLinker.h"

class WorkTab : public QWidget // On hérite de QWidget
{
    Q_OBJECT

private:

    QTabWidget* Tab;

public:

    WorkTab(QTabWidget*);
    bool IsOpen(QWidget*);
    void RemoveAllRow();


public slots:

    void ChangeTabName(QWidget*,QString);
    void OpenStructure(QWidget*,QString);
    void OpenProduct(QWidget*,QString);
    void OpenRun(QWidget*,QString);
    void Close(QWidget*);
    void Close(RunLinker*);
    void SetProduct(ProductSettings*,QString,QString);
    void ProductAdded(ProductSettings*Settings);
    void DeleteProduct(QListWidgetItem*);
    void ShowResults(QWidget*);

signals:

    void StructureSetted(short IdStructure, QString OldName,QString NewName); 
    void ProductSetted(Prod* Product ,QString OldName,QString NewName);
    void AddProduct(ProductSettings*);
    void DeleteProductFile(QString);

};


#endif // WORKTAB_H
