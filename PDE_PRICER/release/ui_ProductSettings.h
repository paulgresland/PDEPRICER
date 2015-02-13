/********************************************************************************
** Form generated from reading UI file 'ProductSettings.ui'
**
** Created: Thu 12. Feb 19:00:54 2015
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTSETTINGS_H
#define UI_PRODUCTSETTINGS_H

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
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductSettings
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *FenetreType;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Name;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *Option;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *Nat;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDoubleSpinBox *Strike;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QDoubleSpinBox *Maturity;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Appliquer;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *ProductSettings)
    {
        if (ProductSettings->objectName().isEmpty())
            ProductSettings->setObjectName(QString::fromUtf8("ProductSettings"));
        ProductSettings->resize(660, 634);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProductSettings->sizePolicy().hasHeightForWidth());
        ProductSettings->setSizePolicy(sizePolicy);
        ProductSettings->setMinimumSize(QSize(660, 0));
        verticalLayout = new QVBoxLayout(ProductSettings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        FenetreType = new QLabel(ProductSettings);
        FenetreType->setObjectName(QString::fromUtf8("FenetreType"));
        FenetreType->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(FenetreType);

        widget = new QWidget(ProductSettings);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 45));

        horizontalLayout->addWidget(label);

        Name = new QLineEdit(widget);
        Name->setObjectName(QString::fromUtf8("Name"));

        horizontalLayout->addWidget(Name);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(ProductSettings);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 45));

        horizontalLayout_2->addWidget(label_2);

        Option = new QComboBox(widget_2);
        Option->setObjectName(QString::fromUtf8("Option"));

        horizontalLayout_2->addWidget(Option);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(ProductSettings);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 45));

        horizontalLayout_3->addWidget(label_3);

        Nat = new QComboBox(widget_3);
        Nat->setObjectName(QString::fromUtf8("Nat"));

        horizontalLayout_3->addWidget(Nat);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(ProductSettings);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 45));

        horizontalLayout_4->addWidget(label_4);

        Strike = new QDoubleSpinBox(widget_4);
        Strike->setObjectName(QString::fromUtf8("Strike"));

        horizontalLayout_4->addWidget(Strike);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(ProductSettings);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 45));

        horizontalLayout_5->addWidget(label_5);

        Maturity = new QDoubleSpinBox(widget_5);
        Maturity->setObjectName(QString::fromUtf8("Maturity"));

        horizontalLayout_5->addWidget(Maturity);


        verticalLayout->addWidget(widget_5);

        widget_6 = new QWidget(ProductSettings);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(204, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        Appliquer = new QPushButton(widget_6);
        Appliquer->setObjectName(QString::fromUtf8("Appliquer"));
        Appliquer->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_6->addWidget(Appliquer);

        horizontalSpacer = new QSpacerItem(204, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget_6);


        retranslateUi(ProductSettings);

        QMetaObject::connectSlotsByName(ProductSettings);
    } // setupUi

    void retranslateUi(QWidget *ProductSettings)
    {
        ProductSettings->setWindowTitle(QApplication::translate("ProductSettings", "Form", 0, QApplication::UnicodeUTF8));
        FenetreType->setText(QApplication::translate("ProductSettings", "<html><head/><body><p><span style=\" font-size:12pt;\">PRODUIT</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ProductSettings", "Nom :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ProductSettings", "Call/Put :", 0, QApplication::UnicodeUTF8));
        Option->clear();
        Option->insertItems(0, QStringList()
         << QApplication::translate("ProductSettings", "Call", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProductSettings", "Put", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("ProductSettings", "Am\303\251ricain/Europ\303\251en :", 0, QApplication::UnicodeUTF8));
        Nat->clear();
        Nat->insertItems(0, QStringList()
         << QApplication::translate("ProductSettings", "Am\303\251ricain", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ProductSettings", "Europ\303\251en", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("ProductSettings", "Strike (\342\202\254) :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ProductSettings", "Nombre de jours \303\240 maturit\303\251 :", 0, QApplication::UnicodeUTF8));
        Appliquer->setText(QApplication::translate("ProductSettings", "Appliquer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ProductSettings: public Ui_ProductSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTSETTINGS_H
