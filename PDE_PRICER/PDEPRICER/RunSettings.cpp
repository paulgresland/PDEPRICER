#include "RunSettings.h"
#include "ui_RunSettings.h"
#include <QMessageBox>

RunSettings::RunSettings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RunSettings)
{
    ui->setupUi(this);
    R = new Run;

      connect(ui->Appliquer,SIGNAL(clicked()),this,SLOT(Apply()));
//    connect(ui->Integrate,SIGNAL(clicked()),this,SLOT(IntegrateProduct()));
//    connect(ui->Remove,SIGNAL(clicked()),this,SLOT(RemoveProduct()));
//    connect(Products,SIGNAL(AddProduct(QString)),this,SLOT(AddProduct(QString)));
//    connect(Products,SIGNAL(ChangeItemNameIf(QString,QString)),StructureProducts,SLOT(changeItemNameIfNameIs(QString,QString)));
//    connect(Products,SIGNAL(Delete(QListWidgetItem*)),this,SLOT(DeleteItem(QListWidgetItem*)));
}
RunSettings::~RunSettings()
{
    delete R;
    delete ui;
}
void RunSettings::SetSettingName(QString text)
{
    ui->Name->setText(text);
}
QString RunSettings::GetSettingName()
{
    return ui->Name->text();
}
void RunSettings::AddStructure(QString StuctureName)
{
    ui->StructuresList->addItem(StuctureName);
}
void RunSettings::Apply()
{
    // On r�cup�re le nom entr� par l'op�rateur
    QString NewName = ui->Name->text();
    // Si ce nom est vide ...
    if(NewName=="")
    {
        QMessageBox::information(this,"ERREUR NOMINATION", "Le Run n'a pas �t� renomm�e <Br> Entrez au moins un caract�re");
    }
    // Si ce nom n'est pas vide ...
    else
    {
        // On envoi un signal de changement de nom au Linker
        emit ChangeName(NewName);
    }
    // On r�cup�re applique les param�tres � l'objet Run
    R->Set(ui->StructuresList->currentText(),ui->S0->value(),ui->r->value(),ui->Sigma->value(),ui->Dividende->value(),ui->T->value(),ui->P->value());
    // On l'envoi � l'Arbre et au WorkSpace
    emit SetRun(GetSettingName(),R);
}
