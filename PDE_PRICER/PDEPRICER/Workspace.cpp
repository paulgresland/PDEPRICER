# include "Workspace.h"
# include "StructureLinker.h"
# include <QFileDialog>
# include <QTextStream>
# include <QDirIterator>
# include <QMessageBox>

Workspace::Workspace()
{
    ApplicationDirectory = new QDir;
    WorkSpaceDirectory = new QDir;
    Res = new Result;
}
Workspace::~Workspace()
{
    delete ApplicationDirectory;
    delete WorkSpaceDirectory;
    delete Res;
}
QTableWidget* Workspace::GetResult()
{
    int Nb_Computation = CountComputation();
    double** NumParam = new double*[Nb_Computation];
    QString** StrParam = new QString*[Nb_Computation];
    for(int i=0;i<Nb_Computation;i++)
    {
        NumParam[i] = new double[9];
    }
    for(int i=0;i<Nb_Computation;i++)
    {
        StrParam[i] = new QString[3];
    }
    GetParam(NumParam,StrParam);
    Res->SetResult(NumParam,StrParam,Nb_Computation);

    DeleteParam(NumParam,StrParam,Nb_Computation);
    return Res->GetTab();
}
void Workspace::DeleteParam(double** NumParam,QString** StrParam, int Nb_Computation )
{

    for(int i=0;i<Nb_Computation;i++)
    {
        delete NumParam[i];
    }
    delete NumParam;
    for(int i=0;i<Nb_Computation;i++)
    {
        delete StrParam[i];
    }
    delete StrParam;
}
QString Workspace::GetWorkspaceDirectory()
{
    return WorkSpaceDirectory->currentPath();
}
void Workspace::SetWorkspaceDirectory(QString Adress)
{
    WorkSpaceDirectory->setCurrent(Adress);
}
QString Workspace::GetBaseName(QString FileName)
{
    QFileInfo file(FileName);
    return file.baseName();
}
void Workspace::NewWorkspaceBox()
{
    // L'opr�rateur choisi un fichier
    QString file = QFileDialog::getExistingDirectory(this);
    // On le d�finit comme r�peroire Courrant
    SetWorkspaceDirectory(file);
    // On cr�� les fichiers du WORKSPACE
    QDir dir;
    dir.mkdir(file+ "/Products");
    dir.mkdir(file+ "/Structures");
    dir.mkdir(file+ "/Runs");
    dir.mkdir(file+ "/Results");
}
void Workspace::LoadWorkspaceBox()
{
    // L'opr�rateur choisi une adresse
    QString Adress = QFileDialog::getExistingDirectory(this);
    // On charge le Workspace
    LoadWorkspace(Adress);    
}
void Workspace::LoadWorkspace(QString Adress)
{
    // On d�fini le r�pertoire courrant
    SetWorkspaceDirectory(Adress);
    // On charge les structures
    LoadAllStructures();
    // On charge les produits
    LoadAllProducts();
    // On charge les produits des Structures
    LoadProductsOfStructures();
    // On charge les Runs
    LoadAllRuns();
}
void Workspace::LoadAllProducts()
{
    // On remplit une QStringList avec chacun des filtres d�sir�s ici "*.txt"
    QStringList listFilter;
    listFilter << "*.txt";
    // On d�clare un QDirIterator dans lequel on indique que l'on souhaite parcourir un r�pertoire et ses sous-r�pertoires.
    // De plus, on sp�cifie le filtre qui nous permettra de r�cup�rer uniquement les fichiers du type souhait�.
    QDirIterator dirIterator(GetWorkspaceDirectory()+"/Products", listFilter ,QDir::Files | QDir::NoSymLinks, QDirIterator::Subdirectories);

    // Tant qu'il reste des Produits � charger ...
    while(dirIterator.hasNext())
    {
        QString ProductFileName = dirIterator.next();
        LoadProduct(ProductFileName);
    }
}
void Workspace::LoadAllRuns()
{
    QStringList listFilter;
    listFilter << "*.txt";
    QDirIterator dirIterator(GetWorkspaceDirectory()+"/Runs", listFilter ,QDir::Files | QDir::NoSymLinks, QDirIterator::Subdirectories);
    while(dirIterator.hasNext())
    {
        QString RunFileName = dirIterator.next();
        LoadRun(RunFileName);
    }
}
void Workspace::LoadAllProductsInStructure(StructureSetting* Settings)
{
    // On remplit une QStringList avec chacun des filtres d�sir�s ici "*.txt"
    QStringList listFilter;
    listFilter << "*.txt";
    // On d�clare un QDirIterator dans lequel on indique que l'on souhaite parcourir un r�pertoire et ses sous-r�pertoires.
    // De plus, on sp�cifie le filtre qui nous permettra de r�cup�rer uniquement les fichiers du type souhait�.
    QDirIterator dirIterator(GetWorkspaceDirectory()+"/Products", listFilter ,QDir::Files | QDir::NoSymLinks, QDirIterator::Subdirectories);
    // Tant qu'il reste des Produits � charger ...
    while(dirIterator.hasNext())
    {
        QString ProductFileName = dirIterator.next();
//        QMessageBox::information(this,"",ProductFineName);
        LoadProductInStructure(ProductFileName,Settings);
    }
}
void Workspace::LoadAllStructuresInRun(RunSettings* Settings)
{
    // On remplit une QStringList avec chacun des filtres d�sir�s ici "*.txt"
    QStringList listFilter;
    listFilter << "*.txt";
    // On d�clare un QDirIterator dans lequel on indique que l'on souhaite parcourir un r�pertoire et ses sous-r�pertoires.
    // De plus, on sp�cifie le filtre qui nous permettra de r�cup�rer uniquement les fichiers du type souhait�.
    QDirIterator dirIterator(GetWorkspaceDirectory()+"/Structures", listFilter ,QDir::Files | QDir::NoSymLinks, QDirIterator::Subdirectories);
    // Tant qu'il reste des structures � charger ...
    while(dirIterator.hasNext())
    {
        QString StructureFileName = dirIterator.next();
        // On r�cup�re le nom de la structure
        QFileInfo file(StructureFileName);
        QString StructureName = file.baseName();
        // On onjoute la structure � la liste des param�tres du Run
        Settings->AddStructure(StructureName);
    }
}
void Workspace::LoadProduct(QString ProductAdrress)
{
    // On r�cup�re le nom du produit
    QFileInfo file(ProductAdrress);
    QString Name = file.baseName();
    // On r�cup�re le produit
    Prod* Product = new Prod;
    Product->setParent(this);
    GetProductInformation(Product,ProductAdrress);
    // On envoi les informations au Pricer
    emit LoadedProduct(Name,Product);
}
void Workspace::LoadRun(QString RunFileName)
{
    QFileInfo file(RunFileName);
    QString Name = file.baseName();

    // On envoi les informations au Pricer
    QFile RunFile(RunFileName);
    RunFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream Flux(&RunFile);
    Flux.setCodec("UTF-8");
    QString StrcutureName = Flux.readLine();
    if(StrcutureName=="")
    {
        StrcutureName = "No Structure";
    }
    double Price = Flux.readLine().toDouble();
    double Rate = Flux.readLine().toDouble();
    double Vol = Flux.readLine().toDouble();
    double Div = Flux.readLine().toDouble();
    int DiscretTime = Flux.readLine().toInt();
    int DiscretPrice = Flux.readLine().toInt();

    Run* run = new Run(StrcutureName,Price,Rate,Vol,Div,DiscretTime,DiscretPrice);
    run->setParent(this);

    emit RunLoaded(Name,run);

}
void Workspace::GetProductInformation(Prod* Product,QString ProductAdrress)
{
    //On ouvre le fichier produit en lecture seule
    QFile ProductFile(ProductAdrress);
    ProductFile.open(QIODevice::ReadOnly | QIODevice::Text);
    //On r�cup�re les param�tres du produit
    QString Line = ProductFile.readLine();
    Product->SetType(Line.toInt());
    Line = ProductFile.readLine();
    Product->SetNat(Line.toInt());
    Line = ProductFile.readLine();
    Product->SetStrike(Line.toDouble());
    Line = ProductFile.readLine();
    Product->SetMaturity(Line.toDouble());
    //On Ferme le fichier
    ProductFile.close();
}
void Workspace::LoadProductInStructure(QString ProductAdrress,StructureSetting* Settings)
{
    // On r�cup�re le nom du produit
    QFileInfo file(ProductAdrress);
    QString Name = file.baseName();
    // On r�cup�re le produit
    Prod* Product = new Prod;
    Product->setParent(this);
    GetProductInformation(Product,ProductAdrress);
    // On envoi les informations au Pricer
    emit LoadedProductInStructure(Name,Product,Settings);
}
void Workspace::LoadAllStructures()
{
    // On remplit une QStringList avec chacun des filtres d�sir�s ici "*.txt"
    QStringList listFilter;
    listFilter << "*.txt";
    // On d�clare un QDirIterator dans lequel on indique que l'on souhaite parcourir un r�pertoire et ses sous-r�pertoires.
    // De plus, on sp�cifie le filtre qui nous permettra de r�cup�rer uniquement les fichiers du type souhait�.
    QDirIterator dirIterator(GetWorkspaceDirectory()+"/Structures", listFilter ,QDir::Files | QDir::NoSymLinks, QDirIterator::Subdirectories);
    // Tant qu'il reste des structures � charger ...
    while(dirIterator.hasNext())
    {
        LoadStructure(dirIterator.next());
    }
}
void Workspace::LoadStructure(QString StructureAdrress)
{
    // On r�cup�re la liste des produits de la structure
    QStringList ProductsList;
    // On envoi les informations au Pricer
    QFileInfo file(StructureAdrress);
    emit LoadedStructure(file.baseName(),ProductsList);
}
void Workspace::LoadProductsOfStructures()
{
    QStringList listFilter;
    listFilter << "*.txt";
    QDirIterator dirIterator(GetWorkspaceDirectory()+"/Structures", listFilter ,QDir::Files | QDir::NoSymLinks, QDirIterator::Subdirectories);
    // Tant qu'il reste des structures � charger ...
    while(dirIterator.hasNext())
    {
        QString StructureFileName = dirIterator.next();
        LoadProductsOfStructure(StructureFileName);
    }
}
void Workspace::LoadProductsOfStructure(QString StructureAdress)
{
    // On r�cup�re le nom de la structure
    QFileInfo StructureFileInfo(StructureAdress);
    QString StructureName = StructureFileInfo.baseName();
    // On lit les produits de la structure
    QFile StructureFile(StructureAdress);
    StructureFile.open(QIODevice::ReadWrite | QIODevice::Text);
    QTextStream flux(&StructureFile);
    QString Product;
    while(! flux.atEnd())
    {
        Product = flux.readLine();
        //On envoi un signal aux param�trages des structures, celle qui porte le bon nom chargera son produit
        emit AffectProductIfName(Product,StructureName);
    }
//    QMessageBox::information(this,"",Product);
    //On applique les affectations sans revenir les sauvegarder
     emit ApplyWithoutSaving();
}
void Workspace::DeleteProductFromStructures(QString ProductName)
{
    QStringList listFilter;
    listFilter << "*.txt";
    QDirIterator dirIterator(GetWorkspaceDirectory()+"/Structures", listFilter ,QDir::Files | QDir::NoSymLinks, QDirIterator::Subdirectories);
    // Tant qu'il reste des structures � parcourir ...
    while(dirIterator.hasNext())
    {
        DeleteProductFromStructure(ProductName,dirIterator.next());
    }
}
void Workspace::DeleteProductFromStructure(QString ProductName,QString StructureAdress)
{
    // On r�cup�re le nom de la Structure
    QString StructureName = GetBaseName(StructureAdress);
    bool finded = false;
    // On ouvre le fichier de la structure en lecture seule
    QFile OldStructureFile(StructureAdress);
    OldStructureFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream Oldflux(&OldStructureFile);
    // On cr�� un nouveau fichier de transition en lecture �criture
    QFile TransitFile(WorkSpaceDirectory->currentPath() + "/Structure.txt");
    TransitFile.open(QIODevice::ReadWrite | QIODevice::Text);
    QTextStream Transitflux(&TransitFile);
    // On lit tous les produits de OldStructureFile
    QString Product;
    while(!Oldflux.atEnd())
    {
        Product = Oldflux.readLine();
        // Si le produit est celui qu'il faut d�truire ...
        if(strcmp(Product.toUtf8(),ProductName.toUtf8())==0)
        {
            //On retient que le produit �tait dans la Structure
            finded = true;
        }
        else
        {
            //Sinon on �crit le produit dans le nouveau fichier
            Transitflux << Product << endl;
        }
    }
    // On d�truit l'ancien fichier
    OldStructureFile.close();
    OldStructureFile.remove();
    // On le rempcale par un nouveau
    TransitFile.close();
    // On coupe et colle
    // On ouvre le fichier � couper
    TransitFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream Flux1(&TransitFile);
    // On cr�� un fichier � l'adresse de copie
    QFile NewFile(StructureAdress);
    NewFile.open(QIODevice::ReadWrite | QIODevice::Text);
    QTextStream Flux2(&NewFile);
    // On lit tous les produits de File
    while(!Flux1.atEnd())
    {
        Product = Flux1.readLine();
        // On l'�crit dans le nouveau fichier
        Flux2<<Product<<endl;
    }
    // On ferme les fichiers
    TransitFile.close();
    NewFile.close();
    // On d�truit le fichier coup�
    TransitFile.remove();
    // Si un produit a �t� retirer de la structure ...
    if(finded)
    {
        // On envoi le message de destruction � l'arbre
        emit DeleteProductInStructure(ProductName,StructureName);
    }
}
void Workspace::ChangeProductNameInSTructure(QString OldName,QString NewName,QString StructureName)
{
    // On r�cup�re l'adresse de la structure
    QString OldStructureFileName = GetWorkspaceDirectory() + "/Structures/" + StructureName + ".txt";
    // On ouvre le fichier de la structure en lecture seule
    QFile OldStructureFile(OldStructureFileName);
    OldStructureFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream Oldflux(&OldStructureFile);
    // On cr�� un nouveau fichier de transition en lecture �criture
    QFile TransitFile(WorkSpaceDirectory->currentPath() + "/Structure.txt");
    TransitFile.open(QIODevice::ReadWrite | QIODevice::Text);
    QTextStream Transitflux(&TransitFile);
    // On lit tous les produits de OldStructureFile
    QString Product;
    while(!Oldflux.atEnd())
    {
        Product = Oldflux.readLine();
        // Si le produit est celui qu'il faut changer ...
        if(strcmp(Product.toUtf8(),OldName.toUtf8())==0)
        {
            //on �crit le nouveau nom
            Transitflux << NewName << endl;
        }
        else
        {
            //Sinon on �crit le produit dans le nouveau fichier
            Transitflux << Product << endl;
        }
    }
    // On d�truit l'ancien fichier
    OldStructureFile.close();
    OldStructureFile.remove();
    // On le rempcale par un nouveau
    TransitFile.close();
    // On coupe et colle
    // On ouvre le fichier � couper
    TransitFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream Flux1(&TransitFile);
    // On cr�� un fichier � l'adresse de copie
    QFile NewFile(OldStructureFileName);
    NewFile.open(QIODevice::ReadWrite | QIODevice::Text);
    QTextStream Flux2(&NewFile);
    // On lit tous les produits de File
    while(!Flux1.atEnd())
    {
        Product = Flux1.readLine();
        // On l'�crit dans le nouveau fichier
        Flux2<<Product<<endl;
    }
    // On ferme les fichiers
    TransitFile.close();
    NewFile.close();
    // On d�truit le fichier coup�
    TransitFile.remove();
}
QString Workspace::GetLastAdress()
{
    // On cr�� un fichier .txt � l'emplacement de de la sauvegarde
    QFile WorspaceFileName(ApplicationDirectory->currentPath() +"/WorspaceFileName.txt");
    // On acc�de au fichier en lecture seule
    WorspaceFileName.open(QIODevice::ReadOnly);
    // On lit l'adresse dans le fichier
    QTextStream flux(&WorspaceFileName);
    QString LastAdress = flux.readLine();
    WorspaceFileName.close();
    return LastAdress;
}
void Workspace::AddStructure(QString Name)
{
    //On d�fini un fichier � l'emplacement souhait�
    QFile Structure(GetWorkspaceDirectory()+ "/Structures/" + Name + ".txt");
    //On ouvre le fichier en mode �criture ce qui le cr�� automatiquement
    Structure.open(QIODevice::ReadWrite | QIODevice::Text);
    Structure.close();
}
void Workspace::AddRun(QString Name)
{
    //On d�fini un fichier � l'emplacement souhait�
    QFile RunFile(GetWorkspaceDirectory()+ "/Runs/" + Name + ".txt");
    //On ouvre le fichier en mode �criture ce qui le cr�� automatiquement
    RunFile.open(QIODevice::ReadWrite | QIODevice::Text);
    // On �crit dans le fichier les param�tres par d�faut d'un produit
    QTextStream flux(&RunFile);
    flux.setCodec("UTF-16");
    flux << endl << 0 << endl << 0 << endl << 0 << endl << 0 << endl << 1 << endl << 1;
    RunFile.close();
}
void Workspace::DeleteStructure(QString Name)
{
    //On d�fini un fichier � l'emplacement souhait�
    QFile Structure(GetWorkspaceDirectory()+ "/Structures/" + Name + ".txt");
    //On le d�truit
    Structure.remove();
}
void Workspace::DeleteRun(RunLinker* linker)
{
    //On d�fini un fichier � l'emplacement souhait�
    QFile Structure(GetWorkspaceDirectory()+ "/Runs/" + linker->GetName() + ".txt");
    //On le d�truit
    Structure.remove();
}
void Workspace::DeleteProductFile(QString ProductName)
{
    //On d�fini un fichier � l'emplacement du produit
    QFile Product(GetWorkspaceDirectory()+ "/Products/" + ProductName + ".txt");
    //On le d�truit
    Product.remove();
    // On efface le produit des structures
    DeleteProductFromStructures(ProductName);
}
void Workspace::ChangeStructureName(QString OldName,QString NewName)
{
    //On d�fini un fichier � l'emplacement souhait�
    QFile Structure(GetWorkspaceDirectory()+ "/Structures/" + OldName + ".txt");
    //On change son nom
    Structure.rename(GetWorkspaceDirectory()+ "/Structures/" + NewName + ".txt");
}
void Workspace::ChangeRunName(QString OldName,QString NewName)
{
    //On d�fini un fichier � l'emplacement souhait�
    QFile RunFile(GetWorkspaceDirectory()+ "/Runs/" + OldName + ".txt");
    //On change son nom
    RunFile.rename(GetWorkspaceDirectory()+ "/Runs/" + NewName + ".txt");
}
void Workspace::SetProduct(Prod* Product,QString OldName,QString NewName)
{
    //On d�fini un fichier � l'emplacement souhait�
    QFile ProductFile(GetWorkspaceDirectory()+ "/Products/" + OldName + ".txt");
    //On change son nom
    ProductFile.rename(GetWorkspaceDirectory()+ "/Products/" + NewName + ".txt");
    //On �crit les param�tres du produit
    ProductFile.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Truncate);
    QTextStream flux(&ProductFile);
    flux.setCodec("UTF-8");
    flux << Product->GetType() << endl << Product->GetNat() << endl << Product->GetStrike() << endl << Product->GetMaturity();
    ProductFile.close();

}
void Workspace::AddProduct(ProductSettings* Settings)
{
    //On d�fini un fichier � l'emplacement souhait�
    QFile ProductFile(GetWorkspaceDirectory()+ "/Products/" + Settings->GetSettingName() + ".txt");
    //On ouvre le fichier en mode �criture ce qui le cr�� automatiquement
    ProductFile.open(QIODevice::ReadWrite | QIODevice::Text);
    // On �crit dans le fichier les param�tres par d�faut d'un produit
    QTextStream flux(&ProductFile);
    flux.setCodec("UTF-8");
    flux << 0 << endl << 0 << endl << 0 << endl << 0;
    ProductFile.close();
}
void Workspace::IntegrateProductsInStructure(QListWidget* ProductsList,QString StructureName)
{
    //On r�cup�re le r�pertoire des produits
    QString ProductAdress = WorkSpaceDirectory->currentPath()+"/Products/";
    //On d�fini un fichier � l'emplacement de la Structure
    QFile StructureFile(GetWorkspaceDirectory()+ "/Structures/" + StructureName + ".txt");
    // On �crit la liste des produits dans le fichier
    StructureFile.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Truncate);
    QTextStream flux(&StructureFile);
    flux.setCodec("UTF-8");
    for(short i =0;i<ProductsList->count();i++)
    {
        // On �crit le nom du produit dans le fichier
        QString ProductName = ProductsList->item(i)->text();
        flux << ProductName <<endl;
    }
    StructureFile.close();
}
void Workspace::SetRun(QString RunName,Run* run)
{
    //On d�fini un fichier � l'emplacement du Run
    QFile RunFile(GetWorkspaceDirectory()+ "/Runs/" + RunName + ".txt");
    // On �crit les param�tres dans le fichier
    RunFile.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Truncate);
    QTextStream flux(&RunFile);
    flux.setCodec("UTF-8");
    flux << run->GetStructureName() <<endl << run->GetPrice() <<endl;
    flux << run->GetPrice() <<endl;
    flux << run->GetRate() <<endl;
    flux << run->GetVol() <<endl;
    flux << run->GetDiv() <<endl;
    flux << run->GetDiscretTime() <<endl;
    flux << run->GetDiscretPrice() <<endl;
    RunFile.close();
}
int Workspace::CountComputation()
{
    int Nb = 0;

    QString RunsDirectoryAdress = GetWorkspaceDirectory() + "/Runs";
    QString StructuresDirectoryAdress = GetWorkspaceDirectory() + "/Structures";

    QStringList listFilter;
    listFilter << "*.txt";
    QDirIterator dirIterator(RunsDirectoryAdress, listFilter ,QDir::Files | QDir::NoSymLinks, QDirIterator::Subdirectories);
    while(dirIterator.hasNext())
    {
        QString RunFileName = dirIterator.next();
        QFile RunFile(RunFileName);
        RunFile.open(QIODevice::ReadOnly|QIODevice::Text);
        QTextStream flux(&RunFile);
        flux.setCodec("UTF-8");
        QString StructureName = flux.readLine();
        RunFile.close();
        if(!(strcmp(StructureName.toUtf8() ,"")==0))
        {
            QString StructureFileName = StructuresDirectoryAdress+ "/" + StructureName + ".txt";
            int NbProduct = CountLines(StructureFileName);
            if(NbProduct>0)
            {
                Nb = Nb + CountLines(StructureFileName) +1;
            }
        }
    }
    QMessageBox::information(this,"",QString::number(Nb));
    return Nb;
}
int Workspace::CountLines(QString FileName)
{
//    QMessageBox::information(this,"",FileName);
    int Count = 0;
    QString Line;
    QFile File(FileName);
    File.open(QIODevice::ReadOnly |QIODevice::Text);
    QTextStream flux(&File);
    flux.seek(0);
    while (! (flux.atEnd()))
    {
        Line = flux.readLine();
        Count=Count+1;
    }
    File.close();
    return Count;
}
void Workspace::GetParam(double** NumParam,QString** StrParam)
{
    int Line = 0;

    QString RunsDirectoryAdress = GetWorkspaceDirectory() + "/Runs";
    QString StructuresDirectoryAdress = GetWorkspaceDirectory() + "/Structures";
    QString ProductsDirectoryAdress = GetWorkspaceDirectory() + "/Products";

    QString vide ="";

    QStringList listFilter;
    listFilter << "*.txt";
    QDirIterator dirIterator(RunsDirectoryAdress, listFilter ,QDir::Files | QDir::NoSymLinks, QDirIterator::Subdirectories);
    while(dirIterator.hasNext())
    {
        QString RunFileName = dirIterator.next();
        QString RunName = GetBaseName(RunFileName);
        QFile RunFile(RunFileName);
        RunFile.open(QIODevice::ReadOnly|QIODevice::Text);
        QTextStream RunFlux(&RunFile);
        RunFlux.setCodec("UTF-8");
        QString StructureName = RunFlux.readLine();
        double S0 = RunFlux.readLine().toDouble();
        double r = RunFlux.readLine().toDouble();
        double Vol = RunFlux.readLine().toDouble();
        double Div = RunFlux.readLine().toDouble();
        double DiscretTime = RunFlux.readLine().toDouble();
        double DiscretPrice = RunFlux.readLine().toDouble();
        RunFile.close();
        if(!strcmp(StructureName.toUtf8(), vide.toUtf8())==0)
        {
            QString StructureFileName = StructuresDirectoryAdress+ "/" + StructureName + ".txt";
            QFile StructureFile(StructureFileName);
            StructureFile.open(QIODevice::ReadOnly|QIODevice::Text);
            QTextStream StructureFlux(&StructureFile);
            StructureFlux.setCodec("UTF-8");
            StructureFlux.seek(0);
            bool ProductFinded = false;
            while (!StructureFlux.atEnd())
            {
                QMessageBox::information(this,"","Ca passe");
                ProductFinded = true;
                QString ProductName = StructureFlux.readLine();
                QString ProductFileName = ProductsDirectoryAdress +"/" + ProductName + ".txt";
                QFile ProductFile(ProductFileName);
                ProductFile.open(QIODevice::ReadOnly|QIODevice::Text);
                QTextStream ProductFlux(&RunFile);
                ProductFlux.setCodec("UTF-8");
                int IdProduit = ProductFlux.readLine().toInt();
                double Strike = ProductFlux.readLine().toDouble();
                QMessageBox::information(this,"",QString::number(IdProduit));
                Strike = ProductFlux.readLine().toDouble();
                double Mat = ProductFlux.readLine().toDouble();
                ProductFile.close();
                GetParamLine(NumParam,StrParam,Line,RunName,S0,r,Vol,Div,DiscretTime,DiscretPrice,ProductName,IdProduit,Strike,Mat);
                Line++;
            }
            StructureFile.close();
            if(ProductFinded)
            {
                GetParamLine(NumParam,StrParam,Line,RunName,S0,r,Vol,Div,DiscretTime,DiscretPrice,StructureName,2,0,0);
                Line++;
            }
        }
    }
}
void Workspace::GetParamLine(double** NumParam,QString** StrParam,int Line,QString RunName,double  S0,double r,double Vol,double Div,double DiscretTime,double DiscretPrice,QString ProductName,int IdProduit,double Strike,double Mat)
{
    StrParam[Line][0] = RunName;
    StrParam[Line][1] = ProductName;
    if (IdProduit==0)
    {
        StrParam[Line][2] = "Call";
    }
    else
    {
        if (IdProduit==2)
        {
            StrParam[Line][2] = "-";
        }
        else
        {
            StrParam[Line][2] = "Put";
        }
    }

    NumParam[Line][1] = S0;
    NumParam[Line][2] = Strike;
    NumParam[Line][3] = Vol;
    NumParam[Line][4] = r;
    NumParam[Line][5] = Div;
    NumParam[Line][6] = Mat;
    NumParam[Line][7] = DiscretTime;
    NumParam[Line][8] = DiscretPrice;
}









