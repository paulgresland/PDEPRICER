#ifndef PDEPRICER_H
#define PDEPRICER_H

#include <QMainWindow>
#include "StructureTree.h"
#include "RunTree.h"
#include "WorkTab.h"
#include "Workspace.h"

namespace Ui {
class PDEPricer;
}

class PDEPricer : public QMainWindow
{
    Q_OBJECT

public slots :

    void HideStructures();
    void HideRunSettings();
    void ShowStructures();
    void ShowRunSettings();

    void AddStructure(QString);
    void DeleteStructure(StructureLinker*);
    void SetStructure(QString Name,StructureSetting* Settings);
    void LoadStructure(QString,QStringList);

    void LoadProduct(QString,Prod*);
    void LoadProductInStructure(QString,Prod*,StructureSetting*);
    void SetProduct(QString Name,ProductSettings* Settings);
    void ChangeGeneralProductName(QListWidgetItem*,QString);
    void DeleteGeneralProduct(QString);
    void DeleteGeneralProduct(QListWidgetItem*);
    void AddGeneralProduct(ProductSettings* Settings);
    void RunLauncher();
    void LoadRun(QString RunName,Run* run);

    QListWidgetItem* GetGeneralItemProduct(QString ProductName);


    void AddRun(QString);
//    void DeleteRun(TreeSettingsLinker*);
//    void SetRun(short IdStructure,QString OldName,QString NewName);

public:

    explicit PDEPricer(QWidget *parent = 0);
    ~PDEPricer();
    void LoadLastWorkSpace();
    bool IsIn(QString text, short ExcludedId);
    
private:

    Ui::PDEPricer *ui;
    StructureTree* Structures;
    RunTree* Runs;
    WorkTab* OpenItems;
    Workspace* WorkSpace;
    List* Products; // Liste exhaustive des produis commune à toute les fenetres des de paramétrage des structures

signals :

    void AddProduct(ProductSettings*);

};

#endif // PDEPRICER_H
