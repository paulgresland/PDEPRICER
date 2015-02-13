/********************************************************************************
** Form generated from reading UI file 'pdepricer.ui'
**
** Created: Tue 10. Feb 18:16:48 2015
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PDEPRICER_H
#define UI_PDEPRICER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PDEPricer
{
public:
    QAction *NewWorkspace;
    QAction *LoadWorkspace;
    QAction *ShowStructures;
    QAction *ShowRunSettings;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *StructureWindow;
    QVBoxLayout *verticalLayout;
    QTreeWidget *Structures;
    QWidget *AddStructureWindow;
    QHBoxLayout *horizontalLayout;
    QPushButton *AddStructure;
    QPushButton *DeleteStructure;
    QTabWidget *WorkTab;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *RunsWindow;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *Runs;
    QWidget *AddRunSettingWindow;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *AddRun;
    QPushButton *DeleteRun;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuAffichage;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *PDEPricer)
    {
        if (PDEPricer->objectName().isEmpty())
            PDEPricer->setObjectName(QString::fromUtf8("PDEPricer"));
        PDEPricer->resize(1144, 707);
        NewWorkspace = new QAction(PDEPricer);
        NewWorkspace->setObjectName(QString::fromUtf8("NewWorkspace"));
        LoadWorkspace = new QAction(PDEPricer);
        LoadWorkspace->setObjectName(QString::fromUtf8("LoadWorkspace"));
        ShowStructures = new QAction(PDEPricer);
        ShowStructures->setObjectName(QString::fromUtf8("ShowStructures"));
        ShowStructures->setCheckable(true);
        ShowStructures->setChecked(true);
        ShowRunSettings = new QAction(PDEPricer);
        ShowRunSettings->setObjectName(QString::fromUtf8("ShowRunSettings"));
        ShowRunSettings->setCheckable(true);
        ShowRunSettings->setChecked(true);
        centralwidget = new QWidget(PDEPricer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        StructureWindow = new QWidget(centralwidget);
        StructureWindow->setObjectName(QString::fromUtf8("StructureWindow"));
        StructureWindow->setMinimumSize(QSize(200, 150));
        StructureWindow->setMaximumSize(QSize(250, 16777215));
        verticalLayout = new QVBoxLayout(StructureWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Structures = new QTreeWidget(StructureWindow);
        Structures->setObjectName(QString::fromUtf8("Structures"));
        Structures->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);

        verticalLayout->addWidget(Structures);

        AddStructureWindow = new QWidget(StructureWindow);
        AddStructureWindow->setObjectName(QString::fromUtf8("AddStructureWindow"));
        AddStructureWindow->setMinimumSize(QSize(130, 80));
        AddStructureWindow->setMaximumSize(QSize(200, 80));
        horizontalLayout = new QHBoxLayout(AddStructureWindow);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        AddStructure = new QPushButton(AddStructureWindow);
        AddStructure->setObjectName(QString::fromUtf8("AddStructure"));
        AddStructure->setMinimumSize(QSize(50, 50));
        AddStructure->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(AddStructure);

        DeleteStructure = new QPushButton(AddStructureWindow);
        DeleteStructure->setObjectName(QString::fromUtf8("DeleteStructure"));
        DeleteStructure->setMinimumSize(QSize(50, 50));
        DeleteStructure->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(DeleteStructure);


        verticalLayout->addWidget(AddStructureWindow);


        horizontalLayout_3->addWidget(StructureWindow);

        WorkTab = new QTabWidget(centralwidget);
        WorkTab->setObjectName(QString::fromUtf8("WorkTab"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        WorkTab->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        WorkTab->addTab(tab_2, QString());

        horizontalLayout_3->addWidget(WorkTab);

        RunsWindow = new QWidget(centralwidget);
        RunsWindow->setObjectName(QString::fromUtf8("RunsWindow"));
        RunsWindow->setMinimumSize(QSize(200, 300));
        RunsWindow->setMaximumSize(QSize(250, 16777215));
        verticalLayout_2 = new QVBoxLayout(RunsWindow);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        Runs = new QTreeWidget(RunsWindow);
        Runs->setObjectName(QString::fromUtf8("Runs"));
        Runs->setMinimumSize(QSize(30, 40));
        Runs->setMaximumSize(QSize(200, 16777215));
        Runs->setMouseTracking(true);

        verticalLayout_2->addWidget(Runs);

        AddRunSettingWindow = new QWidget(RunsWindow);
        AddRunSettingWindow->setObjectName(QString::fromUtf8("AddRunSettingWindow"));
        AddRunSettingWindow->setMinimumSize(QSize(130, 80));
        AddRunSettingWindow->setMaximumSize(QSize(200, 80));
        horizontalLayout_2 = new QHBoxLayout(AddRunSettingWindow);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        AddRun = new QPushButton(AddRunSettingWindow);
        AddRun->setObjectName(QString::fromUtf8("AddRun"));
        AddRun->setMinimumSize(QSize(50, 50));
        AddRun->setMaximumSize(QSize(50, 50));

        horizontalLayout_2->addWidget(AddRun);

        DeleteRun = new QPushButton(AddRunSettingWindow);
        DeleteRun->setObjectName(QString::fromUtf8("DeleteRun"));
        DeleteRun->setMinimumSize(QSize(50, 50));
        DeleteRun->setMaximumSize(QSize(50, 50));

        horizontalLayout_2->addWidget(DeleteRun);


        verticalLayout_2->addWidget(AddRunSettingWindow);


        horizontalLayout_3->addWidget(RunsWindow);

        PDEPricer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PDEPricer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1144, 38));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuAffichage = new QMenu(menubar);
        menuAffichage->setObjectName(QString::fromUtf8("menuAffichage"));
        PDEPricer->setMenuBar(menubar);
        statusbar = new QStatusBar(PDEPricer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PDEPricer->setStatusBar(statusbar);
        toolBar = new QToolBar(PDEPricer);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        PDEPricer->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuAffichage->menuAction());
        menuFichier->addAction(NewWorkspace);
        menuFichier->addAction(LoadWorkspace);
        menuAffichage->addAction(ShowStructures);
        menuAffichage->addAction(ShowRunSettings);

        retranslateUi(PDEPricer);

        WorkTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PDEPricer);
    } // setupUi

    void retranslateUi(QMainWindow *PDEPricer)
    {
        PDEPricer->setWindowTitle(QApplication::translate("PDEPricer", "PDE PRICER", 0, QApplication::UnicodeUTF8));
        NewWorkspace->setText(QApplication::translate("PDEPricer", "New Workspace", 0, QApplication::UnicodeUTF8));
        LoadWorkspace->setText(QApplication::translate("PDEPricer", "Load Worspace", 0, QApplication::UnicodeUTF8));
        ShowStructures->setText(QApplication::translate("PDEPricer", "Structures", 0, QApplication::UnicodeUTF8));
        ShowRunSettings->setText(QApplication::translate("PDEPricer", "Run Settings", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = Structures->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("PDEPricer", "Structures", 0, QApplication::UnicodeUTF8));
        AddStructure->setText(QApplication::translate("PDEPricer", "+", 0, QApplication::UnicodeUTF8));
        DeleteStructure->setText(QApplication::translate("PDEPricer", "-", 0, QApplication::UnicodeUTF8));
        WorkTab->setTabText(WorkTab->indexOf(tab), QApplication::translate("PDEPricer", "Tab 1", 0, QApplication::UnicodeUTF8));
        WorkTab->setTabText(WorkTab->indexOf(tab_2), QApplication::translate("PDEPricer", "Tab 2", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem1 = Runs->headerItem();
        ___qtreewidgetitem1->setText(0, QApplication::translate("PDEPricer", "Runs", 0, QApplication::UnicodeUTF8));
        AddRun->setText(QApplication::translate("PDEPricer", "+", 0, QApplication::UnicodeUTF8));
        DeleteRun->setText(QApplication::translate("PDEPricer", "-", 0, QApplication::UnicodeUTF8));
        menuFichier->setTitle(QApplication::translate("PDEPricer", "Fichier", 0, QApplication::UnicodeUTF8));
        menuAffichage->setTitle(QApplication::translate("PDEPricer", "Affichage", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("PDEPricer", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PDEPricer: public Ui_PDEPricer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PDEPRICER_H
