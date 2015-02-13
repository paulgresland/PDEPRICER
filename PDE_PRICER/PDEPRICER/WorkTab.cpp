# include "WorkTab.h"
# include "StructureSettings.h"
# include "RunLinker.h"
# include <QMessageBox>

///////////////// Public Functions ////////////////////////////////////////////////////////////////////////////////////////////////
WorkTab::WorkTab(QTabWidget* T)
{
    Tab = T;
}
bool WorkTab::IsOpen(QWidget* w)
{
    if(Tab->indexOf(w)==-1)
    {
        return false;
    }
    else
    {
        return true;
    }
}
void WorkTab::Close(QWidget* Settings)
{
    if(IsOpen(Settings))
    {
        Tab->removeTab(Tab->indexOf(Settings));
    }
}
void WorkTab::Close(RunLinker* Linker)
{
    if(IsOpen(Linker->GetSettings()))
    {
        Tab->removeTab(Tab->indexOf(Linker->GetSettings()));
    }
}
void WorkTab::RemoveAllRow()
{
    short TabCard = Tab->count();
    for(short i = 0;i < TabCard;i++)
    {
        Tab->removeTab(0);
    }
}
void WorkTab::ShowResults(QWidget* result)
{
    Tab->insertTab( 0, result, "RESULTS" );
}
///////////////// Public Slots ////////////////////////////////////////////////////////////////////////////////////////////////
void WorkTab::ChangeTabName(QWidget* Settings,QString Name)
{
    Tab->setTabText(Tab->indexOf(Settings),Name );
    Tab->setTabWhatsThis(Tab->indexOf(Settings),Name );
}
void WorkTab::OpenStructure(QWidget* Settings ,QString Name)
{
    if(IsOpen(Settings))
    {
        Tab->setCurrentIndex(Tab->indexOf(Settings));
    }
    else
    {
        Tab->addTab(Settings,Name);
        Tab->setCurrentIndex(Tab->indexOf(Settings));
        connect(Settings, SIGNAL(ProductAdded(ProductSettings*)),this,SLOT(ProductAdded(ProductSettings*)));
        connect(Settings, SIGNAL(DeleteProduct(QListWidgetItem*)),this,SLOT(DeleteProduct(QListWidgetItem*)));
    }
}
void WorkTab::OpenProduct(QWidget* Settings ,QString Name)
{
    if(IsOpen(Settings))
    {
        Tab->setCurrentIndex(Tab->indexOf(Settings));
    }
    else
    {
        Tab->addTab(Settings,Name);
        Tab->setCurrentIndex(Tab->indexOf(Settings));
        connect(Settings, SIGNAL(SettingsApplied(ProductSettings*,QString,QString)),this,SLOT(SetProduct(ProductSettings*,QString,QString)));
    }
}
void WorkTab::OpenRun(QWidget* Settings , QString Name)
{
    if(IsOpen(Settings))
    {
        Tab->setCurrentIndex(Tab->indexOf(Settings));
    }
    else
    {
        Tab->addTab(Settings,Name);
        Tab->setCurrentIndex(Tab->indexOf(Settings));
    }
}
void WorkTab::SetProduct(ProductSettings*Settings,QString OldName,QString NewName)
{
    // On change le nom de la table
    ChangeTabName(Settings,NewName);
    // On envoi les paramètres au workspace
    emit ProductSetted(Settings->GetProduct(),OldName,NewName);
}
void WorkTab::ProductAdded(ProductSettings* Settings)
{
    // On envoi un signal à toutes les tables de paramétrage des structures et au WorkSpace et au Pricer
    emit AddProduct(Settings);
}
void WorkTab::DeleteProduct(QListWidgetItem* Product)
{
    //On envoi un message de destruction au WorkSpace
    emit DeleteProductFile(Product->text());
}
