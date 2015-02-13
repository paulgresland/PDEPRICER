#ifndef WORKSPACE_H
#define WORKSPACE_H

# include <QWidget>
# include <QDir>
# include "ProductSettings.h"
# include "StructureSettings.h"
# include "RunSettings.h"
# include "RunLinker.h"
# include "Result.h"
# include "Run.h"

class Workspace : public QWidget // On hérite de QWidget
{
    Q_OBJECT

private:

    QDir* WorkSpaceDirectory;
    QDir* ApplicationDirectory;
    Result* Res;

public:

    Workspace();
    ~Workspace();
    QTableWidget* GetResult();
    QString GetLastAdress();
    QString GetWorkspaceDirectory();
    QString GetBaseName(QString);
    void SetWorkspaceDirectory(QString);
    void AddStructure(QString);
    void LoadWorkspace(QString);
    void DeleteStructure(QString);
    void LoadAllStructures();
    void LoadStructure(QString);
    void LoadAllProducts();
    void LoadProduct(QString);
    void LoadAllProductsInStructure(StructureSetting*);
    void LoadAllStructuresInRun(RunSettings*);
    void LoadProductsOfStructures();
    void LoadProductsOfStructure(QString);
    void LoadProductInStructure(QString,StructureSetting*);
    void GetProductInformation(Prod* Product,QString ProductAdrress);
    void DeleteProductFromStructures(QString);
    void DeleteProductFromStructure(QString,QString);
    int CountComputation();
    int CountLines(QString);
    void DeleteParam(double**,QString**,int);
    void GetParam(double**,QString**);
    void GetParamLine(double** NumParam, QString** StrParam,int Line,QString RunName,double  S0,double r,double Vol,double Div,double DiscretTime,double DiscretPrice,QString ProductName,int IdProduit,double Strike,double Mat);
    void LoadAllRuns();
    void LoadRun(QString);

public slots :

    void NewWorkspaceBox();
    void LoadWorkspaceBox();
    void ChangeStructureName(QString,QString);
    void ChangeRunName(QString,QString);
    void SetProduct(Prod*,QString,QString);
    void AddProduct(ProductSettings*);
    void IntegrateProductsInStructure(QListWidget*,QString);
    void DeleteProductFile(QString);
    void AddRun(QString);
    void SetRun(QString,Run*);
    void DeleteRun(RunLinker*);
    void ChangeProductNameInSTructure(QString,QString,QString);

signals:

    void LoadedStructure(QString,QStringList);
    void LoadedProduct(QString,Prod*);
    void LoadedProductInStructure(QString,Prod*,StructureSetting*);
    void LoadedRunSettings(QString);
    void AffectProductIfName(QString,QString);
    void ApplyWithoutSaving();
    void DeleteProductInStructure(QString,QString);
    void RunLoaded(QString,Run*);


};

#endif // WORKSPACE_H
