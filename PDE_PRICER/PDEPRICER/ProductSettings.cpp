#include "productsettings.h"
#include "ui_productsettings.h"
#include "Prod.h"
#include <QMessageBox>

///////////////// Public Functions ////////////////////////////////////////////////////////////////////////////////////////////////
ProductSettings::ProductSettings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProductSettings)
{
    ui->setupUi(this);

    Product = new Prod(ui->Option->currentIndex(),ui->Nat->currentIndex(),ui->Strike->value(),ui->Maturity->value());
    connect(ui->Option,SIGNAL(currentIndexChanged (int )),Product,SLOT(SetType(int)));
    connect(ui->Nat,SIGNAL(currentIndexChanged (int )),Product,SLOT(SetNat(int)));
    connect(ui->Strike,SIGNAL(valueChanged (double)),Product,SLOT(SetStrike(double)));
    connect(ui->Maturity,SIGNAL(valueChanged (double)),Product,SLOT(SetMaturity(double)));
    connect(ui->Appliquer,SIGNAL(clicked()),this,SLOT(Apply()));
}
ProductSettings::~ProductSettings()
{
    delete ui;
}
Prod* ProductSettings::GetProduct()
{
    return Product;
}
void ProductSettings::SetSettingName(QString Name)
{
    // On affiche le nom dans les paramètres
    Name = Name.toUtf8();
    ui->Name->setText(Name);
}
QString ProductSettings::GetSettingName()
{
    // On retraite le nom
    QString Name = ui->Name->text();
    Name = Name.toUtf8() ;
    return Name;
}
void ProductSettings::SetProduct(Prod* product)
{
    // On affiche les bons paramètres du produit
    ui->Option->setCurrentIndex(product->GetType());
    ui->Nat->setCurrentIndex(product->GetNat());
    ui->Strike->setValue(product->GetStrike());
    ui->Maturity->setValue(product->GetMaturity());
    // On renseigne le bon produit
    Product->SetType(product->GetType());
    Product->SetNat(product->GetNat());
    Product->SetStrike(product->GetStrike());
    Product->SetMaturity(product->GetMaturity());
}

void ProductSettings::Apply()
{
    // On récupère l'ancien nom
    QString OldName = accessibleName();
    // On récupère le nom entré par l'opérateur
    QString NewName = GetSettingName();
    // Si NewName est vide ...
    if(NewName=="")
    {
        // On envoi un message à l'opérateur
        QMessageBox::information(this,"ERREUR NOMINATION", "Le Produit n'a pas été renommée <Br> Entrez au moins un caractère");
        // On note que le nouveau nom est en fait l'ancien nom
        NewName = OldName;
    }
    // Si NewName n'est pas vide ...
    else
    {
        // Si le nom change ...
        if(!(strcmp(NewName.toUtf8(),OldName.toUtf8())==0))
        {
            // On envoi un signal aux Linkers qui changes le nom de la table de paramétrage et des items après vérification
            emit ChangeName(NewName);
            // Si NewName n'a pas pu etre affecté à la table de paramétrage du produit ...
            if(!(strcmp(accessibleName().toUtf8(),NewName.toUtf8())==0))
            {
                // On envoi un message à l'opérateur
                QMessageBox::information(this,"ERREUR NOMINATION", "Le Produit n'a pas été renommée. <Br> Le nom " + NewName + " est déja affecté à un autre produit");
                // On remet l'ancien nom dans la cellule de l'opérateur
                SetSettingName(OldName);
                // On note que le nouveau nom est en fait l'ancien nom
                NewName = OldName;
            }
            // Si NewName a pas pu etre affecté à la table de paramétrage du produit ...
            else
            {
                // On envoi un signal aux TreeLinkers qui changent le nom de tous les items de l'arbre des structures
                // emit ChangeTreeName(NewName);
            }
        }
    }
    // On récupère les paramètres entré par l'opérateur dans le produit
    Product->SetType(ui->Option->currentIndex());
    Product->SetNat(ui->Nat->currentIndex());
    Product->SetStrike(ui->Strike->value());
    Product->SetMaturity(ui->Maturity->value());
    // On fait remonter les Settings au WorkTab et le nom final à l'Arbre
    emit SettingsApplied(this,OldName,NewName);
}
void ProductSettings::DeleteAllItems()
{
    // On envoi un message à tous les linkers pour détruire les items
    emit DeleteProduct();
}
