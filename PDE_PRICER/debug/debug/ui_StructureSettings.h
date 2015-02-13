/********************************************************************************
** Form generated from reading UI file 'StructureSettings.ui'
**
** Created: Tue 10. Feb 18:30:07 2015
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRUCTURESETTINGS_H
#define UI_STRUCTURESETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StructureSetting
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *NameWindow;
    QHBoxLayout *horizontalLayout;
    QLabel *NameLabel;
    QLineEdit *Name;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QWidget *ProductsWindow;
    QVBoxLayout *verticalLayout;
    QLabel *ProductsLable;
    QListWidget *Product;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *AddProduct;
    QPushButton *DeleteProduct;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QPushButton *Integrate;
    QPushButton *Remove;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *ProductsStructureLabel;
    QListWidget *StructureProduct;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Appliquer;

    void setupUi(QWidget *StructureSetting)
    {
        if (StructureSetting->objectName().isEmpty())
            StructureSetting->setObjectName(QString::fromUtf8("StructureSetting"));
        StructureSetting->resize(1031, 763);
        verticalLayout_3 = new QVBoxLayout(StructureSetting);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        NameWindow = new QWidget(StructureSetting);
        NameWindow->setObjectName(QString::fromUtf8("NameWindow"));
        horizontalLayout = new QHBoxLayout(NameWindow);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        NameLabel = new QLabel(NameWindow);
        NameLabel->setObjectName(QString::fromUtf8("NameLabel"));

        horizontalLayout->addWidget(NameLabel);

        Name = new QLineEdit(NameWindow);
        Name->setObjectName(QString::fromUtf8("Name"));
#ifndef QT_NO_ACCESSIBILITY
        Name->setAccessibleName(QString::fromUtf8(""));
#endif // QT_NO_ACCESSIBILITY

        horizontalLayout->addWidget(Name);


        verticalLayout_3->addWidget(NameWindow);

        widget_2 = new QWidget(StructureSetting);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        ProductsWindow = new QWidget(widget_2);
        ProductsWindow->setObjectName(QString::fromUtf8("ProductsWindow"));
        verticalLayout = new QVBoxLayout(ProductsWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ProductsLable = new QLabel(ProductsWindow);
        ProductsLable->setObjectName(QString::fromUtf8("ProductsLable"));
        ProductsLable->setMinimumSize(QSize(220, 0));
        ProductsLable->setMaximumSize(QSize(16777215, 27));
        ProductsLable->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(ProductsLable);

        Product = new QListWidget(ProductsWindow);
        Product->setObjectName(QString::fromUtf8("Product"));

        verticalLayout->addWidget(Product);

        widget_4 = new QWidget(ProductsWindow);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMinimumSize(QSize(0, 80));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        AddProduct = new QPushButton(widget_4);
        AddProduct->setObjectName(QString::fromUtf8("AddProduct"));
        AddProduct->setMaximumSize(QSize(50, 50));

        horizontalLayout_4->addWidget(AddProduct);

        DeleteProduct = new QPushButton(widget_4);
        DeleteProduct->setObjectName(QString::fromUtf8("DeleteProduct"));
        DeleteProduct->setMaximumSize(QSize(50, 50));

        horizontalLayout_4->addWidget(DeleteProduct);


        verticalLayout->addWidget(widget_4);


        horizontalLayout_2->addWidget(ProductsWindow);

        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setMinimumSize(QSize(70, 0));
        verticalLayout_4 = new QVBoxLayout(widget_5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_2 = new QSpacerItem(20, 120, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_4->addItem(verticalSpacer_2);

        Integrate = new QPushButton(widget_5);
        Integrate->setObjectName(QString::fromUtf8("Integrate"));
        Integrate->setMinimumSize(QSize(50, 50));
        Integrate->setMaximumSize(QSize(50, 50));

        verticalLayout_4->addWidget(Integrate);

        Remove = new QPushButton(widget_5);
        Remove->setObjectName(QString::fromUtf8("Remove"));
        Remove->setMinimumSize(QSize(50, 50));
        Remove->setMaximumSize(QSize(50, 50));

        verticalLayout_4->addWidget(Remove);

        verticalSpacer = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_2->addWidget(widget_5);

        widget = new QWidget(widget_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        ProductsStructureLabel = new QLabel(widget);
        ProductsStructureLabel->setObjectName(QString::fromUtf8("ProductsStructureLabel"));
        ProductsStructureLabel->setMinimumSize(QSize(220, 0));
        ProductsStructureLabel->setMaximumSize(QSize(16777215, 27));
        ProductsStructureLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(ProductsStructureLabel);

        StructureProduct = new QListWidget(widget);
        StructureProduct->setObjectName(QString::fromUtf8("StructureProduct"));

        verticalLayout_2->addWidget(StructureProduct);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(0, 80));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        Appliquer = new QPushButton(widget_3);
        Appliquer->setObjectName(QString::fromUtf8("Appliquer"));

        horizontalLayout_3->addWidget(Appliquer);


        verticalLayout_2->addWidget(widget_3);


        horizontalLayout_2->addWidget(widget);


        verticalLayout_3->addWidget(widget_2);


        retranslateUi(StructureSetting);

        QMetaObject::connectSlotsByName(StructureSetting);
    } // setupUi

    void retranslateUi(QWidget *StructureSetting)
    {
        StructureSetting->setWindowTitle(QApplication::translate("StructureSetting", "Form", 0, QApplication::UnicodeUTF8));
        NameLabel->setText(QApplication::translate("StructureSetting", "Nom de la structure :", 0, QApplication::UnicodeUTF8));
        ProductsLable->setText(QApplication::translate("StructureSetting", "Produits", 0, QApplication::UnicodeUTF8));
        AddProduct->setText(QApplication::translate("StructureSetting", "+", 0, QApplication::UnicodeUTF8));
        DeleteProduct->setText(QApplication::translate("StructureSetting", "-", 0, QApplication::UnicodeUTF8));
        Integrate->setText(QApplication::translate("StructureSetting", ">>", 0, QApplication::UnicodeUTF8));
        Remove->setText(QApplication::translate("StructureSetting", "<<", 0, QApplication::UnicodeUTF8));
        ProductsStructureLabel->setText(QApplication::translate("StructureSetting", "Produits de la stucture", 0, QApplication::UnicodeUTF8));
        Appliquer->setText(QApplication::translate("StructureSetting", "Appliquer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StructureSetting: public Ui_StructureSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRUCTURESETTINGS_H
