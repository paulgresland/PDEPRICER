/********************************************************************************
** Form generated from reading UI file 'RunSettings.ui'
**
** Created: Fri 13. Feb 13:07:03 2015
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUNSETTINGS_H
#define UI_RUNSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RunSettings
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Name;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *StructuresList;
    QLabel *FenetreType;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_10;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QDoubleSpinBox *S0;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QDoubleSpinBox *Dividende;
    QWidget *widget_12;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QDoubleSpinBox *Sigma;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QDoubleSpinBox *r;
    QLabel *FenetreType_3;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_8;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QSpinBox *T;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_10;
    QSpinBox *P;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *Appliquer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *RunSettings)
    {
        if (RunSettings->objectName().isEmpty())
            RunSettings->setObjectName(QString::fromUtf8("RunSettings"));
        RunSettings->resize(833, 691);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RunSettings->sizePolicy().hasHeightForWidth());
        RunSettings->setSizePolicy(sizePolicy);
        RunSettings->setMinimumSize(QSize(700, 0));
        verticalLayout_3 = new QVBoxLayout(RunSettings);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget = new QWidget(RunSettings);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(12);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(500, 60));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(160, 0));
        label->setMaximumSize(QSize(160, 16777215));

        horizontalLayout->addWidget(label);

        Name = new QLineEdit(widget);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setMinimumSize(QSize(300, 0));

        horizontalLayout->addWidget(Name);


        verticalLayout_3->addWidget(widget);

        widget_2 = new QWidget(RunSettings);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        widget_2->setMinimumSize(QSize(500, 60));
        widget_2->setSizeIncrement(QSize(500, 0));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(160, 0));
        label_2->setMaximumSize(QSize(160, 16777215));

        horizontalLayout_2->addWidget(label_2);

        StructuresList = new QComboBox(widget_2);
        StructuresList->setObjectName(QString::fromUtf8("StructuresList"));
        StructuresList->setMinimumSize(QSize(300, 0));

        horizontalLayout_2->addWidget(StructuresList);


        verticalLayout_3->addWidget(widget_2);

        FenetreType = new QLabel(RunSettings);
        FenetreType->setObjectName(QString::fromUtf8("FenetreType"));
        FenetreType->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(FenetreType);

        widget_3 = new QWidget(RunSettings);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(400, 210));
        horizontalLayout_10 = new QHBoxLayout(widget_3);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        widget_11 = new QWidget(widget_3);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setMinimumSize(QSize(300, 0));
        widget_11->setMaximumSize(QSize(10000, 16777215));
        verticalLayout = new QVBoxLayout(widget_11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_5 = new QWidget(widget_11);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(widget_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(40, 0));
        label_4->setMaximumSize(QSize(160, 16777215));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_4);

        S0 = new QDoubleSpinBox(widget_5);
        S0->setObjectName(QString::fromUtf8("S0"));

        horizontalLayout_3->addWidget(S0);


        verticalLayout->addWidget(widget_5);

        widget_8 = new QWidget(widget_11);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        horizontalLayout_7 = new QHBoxLayout(widget_8);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(widget_8);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(40, 0));
        label_7->setMaximumSize(QSize(160, 16777215));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_7);

        Dividende = new QDoubleSpinBox(widget_8);
        Dividende->setObjectName(QString::fromUtf8("Dividende"));

        horizontalLayout_7->addWidget(Dividende);


        verticalLayout->addWidget(widget_8);


        horizontalLayout_10->addWidget(widget_11);

        widget_12 = new QWidget(widget_3);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setMinimumSize(QSize(300, 0));
        verticalLayout_2 = new QVBoxLayout(widget_12);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_7 = new QWidget(widget_12);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_5 = new QHBoxLayout(widget_7);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(widget_7);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(146, 0));
        label_6->setMaximumSize(QSize(160, 16777215));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_6);

        Sigma = new QDoubleSpinBox(widget_7);
        Sigma->setObjectName(QString::fromUtf8("Sigma"));

        horizontalLayout_5->addWidget(Sigma);


        verticalLayout_2->addWidget(widget_7);

        widget_9 = new QWidget(widget_12);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        horizontalLayout_6 = new QHBoxLayout(widget_9);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_8 = new QLabel(widget_9);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(40, 0));
        label_8->setMaximumSize(QSize(160, 16777215));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_8);

        r = new QDoubleSpinBox(widget_9);
        r->setObjectName(QString::fromUtf8("r"));

        horizontalLayout_6->addWidget(r);


        verticalLayout_2->addWidget(widget_9);


        horizontalLayout_10->addWidget(widget_12);


        verticalLayout_3->addWidget(widget_3);

        FenetreType_3 = new QLabel(RunSettings);
        FenetreType_3->setObjectName(QString::fromUtf8("FenetreType_3"));
        FenetreType_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(FenetreType_3);

        widget_6 = new QWidget(RunSettings);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setMinimumSize(QSize(400, 0));
        horizontalLayout_8 = new QHBoxLayout(widget_6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        widget_10 = new QWidget(widget_6);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        widget_10->setMinimumSize(QSize(250, 0));
        horizontalLayout_9 = new QHBoxLayout(widget_10);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(widget_10);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(30, 0));
        label_9->setMaximumSize(QSize(160, 16777215));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_9);

        T = new QSpinBox(widget_10);
        T->setObjectName(QString::fromUtf8("T"));
        T->setMinimum(1);
        T->setMaximum(200);

        horizontalLayout_9->addWidget(T);


        horizontalLayout_8->addWidget(widget_10);

        widget_13 = new QWidget(widget_6);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        widget_13->setMinimumSize(QSize(250, 0));
        horizontalLayout_11 = new QHBoxLayout(widget_13);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_10 = new QLabel(widget_13);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(150, 0));
        label_10->setMaximumSize(QSize(160, 16777215));
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(label_10);

        P = new QSpinBox(widget_13);
        P->setObjectName(QString::fromUtf8("P"));
        P->setMinimum(1);
        P->setMaximum(200);

        horizontalLayout_11->addWidget(P);


        horizontalLayout_8->addWidget(widget_13);


        verticalLayout_3->addWidget(widget_6);

        widget_4 = new QWidget(RunSettings);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setMinimumSize(QSize(186, 82));
        widget_4->setMaximumSize(QSize(5000, 16777215));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        Appliquer = new QPushButton(widget_4);
        Appliquer->setObjectName(QString::fromUtf8("Appliquer"));
        Appliquer->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_4->addWidget(Appliquer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(widget_4);


        retranslateUi(RunSettings);

        QMetaObject::connectSlotsByName(RunSettings);
    } // setupUi

    void retranslateUi(QWidget *RunSettings)
    {
        RunSettings->setWindowTitle(QApplication::translate("RunSettings", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RunSettings", "Nom du Run : ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RunSettings", "Structure: ", 0, QApplication::UnicodeUTF8));
        FenetreType->setText(QApplication::translate("RunSettings", "<html><head/><body><p><span style=\" font-size:10pt;\">SOUS-JACENT</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("RunSettings", "Prix :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("RunSettings", "Dividendes", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("RunSettings", "Volatilit\303\251 :", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("RunSettings", "Taux d'int\303\251ret :", 0, QApplication::UnicodeUTF8));
        FenetreType_3->setText(QApplication::translate("RunSettings", "<html><head/><body><p><span style=\" font-size:10pt;\">NOMBRE DE PAS DE DISCRETISATION</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("RunSettings", "Temps :", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("RunSettings", "Prix :", 0, QApplication::UnicodeUTF8));
        Appliquer->setText(QApplication::translate("RunSettings", "Appliquer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RunSettings: public Ui_RunSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUNSETTINGS_H
