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
    // On affiche le nom dans les param�tres
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
    // On affiche les bons param�tres du produit
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
    // On r�cup�re l'ancien nom
    QString OldName = accessibleName();
    // On r�cup�re le nom entr� par l'op�rateur
    QString NewName = GetSettingName();
    // Si NewName est vide ...
    if(NewName=="")
    {
        // On envoi un message � l'op�rateur
        QMessageBox::information(this,"ERREUR NOMINATION", "Le Produit n'a pas �t� renomm�e <Br> Entrez au moins un caract�re");
        // On note que le nouveau nom est en fait l'ancien nom
        NewName = OldName;
    }
    // Si NewName n'est pas vide ...
    else
    {
        // Si le nom change ...
        if(!(strcmp(NewName.toUtf8(),OldName.toUtf8())==0))
        {
            // On envoi un signal aux Linkers qui changes le nom de la table de param�trage et des items apr�s v�rification
            emit ChangeName(NewName);
            // Si NewName n'a pas pu etre affect� � la table de param�trage du produit ...
            if(!(strcmp(accessibleName().toUtf8(),NewName.toUtf8())==0))
            {
                // On envoi un message � l'op�rateur
                QMessageBox::information(this,"ERREUR NOMINATION", "Le Produit n'a pas �t� renomm�e. <Br> Le nom " + NewName + " est d�ja affect� � un autre produit");
                // On remet l'ancien nom dans la cellule de l'op�rateur
                SetSettingName(OldName);
                // On note que le nouveau nom est en fait l'ancien nom
                NewName = OldName;
            }
            // Si NewName a pas pu etre affect� � la table de param�trage du produit ...
            else
            {
                // On envoi un signal aux TreeLinkers qui changent le nom de tous les items de l'arbre des structures
                // emit ChangeTreeName(NewName);
            }
        }
    }
    // On r�cup�re les param�tres entr� par l'op�rateur dans le produit
    Product->SetType(ui->Option->currentIndex());
    Product->SetNat(ui->Nat->currentIndex());
    Product->SetStrike(ui->Strike->value());
    Product->SetMaturity(ui->Maturity->value());
    // On fait remonter les Settings au WorkTab et le nom final � l'Arbre
    emit SettingsApplied(this,OldName,NewName);
}
void ProductSettings::DeleteAllItems()
{
    // On envoi un message � tous les linkers pour d�truire les items
    emit DeleteProduct();
}
