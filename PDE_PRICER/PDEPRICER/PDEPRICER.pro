#-------------------------------------------------
#
# Project created by QtCreator 2015-02-08T18:39:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PDEPRICER
TEMPLATE = app


SOURCES += main.cpp\
        pdepricer.cpp \
    WorkTab.cpp \
    Workspace.cpp \
    StructureLinker.cpp \
    ProductSettings.cpp \
    ProductLinker.cpp \
    List.cpp \
    Prod.cpp \
    StructureSettings.cpp \
    ProductTreeLinker.cpp \
    StructureTree.cpp \
    RunTree.cpp \
    RunSettings.cpp \
    RunLinker.cpp \
    Run.cpp \
    Z_TraitementText.cpp \
    C_RunLauncher.cpp \
    Result.cpp

HEADERS  += pdepricer.h \
    WorkTab.h \
    Workspace.h \
    StructureLinker.h \
    ProductSettings.h \
    ProductLinker.h \
    List.h \
    Prod.h \
    StructureSettings.h \
    ProductTreeLinker.h \
    StructureTree.h \
    RunTree.h \
    RunSettings.h \
    RunLinker.h \
    Run.h \
    Z_TraitementText.h \
    C_RunLauncher.h \
    Result.h

FORMS    += \
    ProductSettings.ui \
    StructureSettings.ui \
    PDEPricer.ui \
    RunSettings.ui
