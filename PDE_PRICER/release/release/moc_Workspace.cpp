/****************************************************************************
** Meta object code from reading C++ file 'Workspace.h'
**
** Created: Fri 13. Feb 15:47:42 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PDEPRICER/Workspace.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Workspace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Workspace[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   11,   10,   10, 0x05,
      50,   11,   10,   10, 0x05,
      82,   79,   10,   10, 0x05,
     140,   10,   10,   10, 0x05,
     167,   11,   10,   10, 0x05,
     204,   10,   10,   10, 0x05,
     225,   11,   10,   10, 0x05,
     267,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     291,   10,   10,   10, 0x0a,
     309,   10,   10,   10, 0x0a,
     328,   11,   10,   10, 0x0a,
     365,   11,   10,   10, 0x0a,
     396,   79,   10,   10, 0x0a,
     430,   10,   10,   10, 0x0a,
     459,   11,   10,   10, 0x0a,
     510,   10,   10,   10, 0x0a,
     537,   10,   10,   10, 0x0a,
     553,   11,   10,   10, 0x0a,
     574,   10,   10,   10, 0x0a,
     596,   79,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Workspace[] = {
    "Workspace\0\0,\0LoadedStructure(QString,QStringList)\0"
    "LoadedProduct(QString,Prod*)\0,,\0"
    "LoadedProductInStructure(QString,Prod*,StructureSetting*)\0"
    "LoadedRunSettings(QString)\0"
    "AffectProductIfName(QString,QString)\0"
    "ApplyWithoutSaving()\0"
    "DeleteProductInStructure(QString,QString)\0"
    "RunLoaded(QString,Run*)\0NewWorkspaceBox()\0"
    "LoadWorkspaceBox()\0"
    "ChangeStructureName(QString,QString)\0"
    "ChangeRunName(QString,QString)\0"
    "SetProduct(Prod*,QString,QString)\0"
    "AddProduct(ProductSettings*)\0"
    "IntegrateProductsInStructure(QListWidget*,QString)\0"
    "DeleteProductFile(QString)\0AddRun(QString)\0"
    "SetRun(QString,Run*)\0DeleteRun(RunLinker*)\0"
    "ChangeProductNameInSTructure(QString,QString,QString)\0"
};

void Workspace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Workspace *_t = static_cast<Workspace *>(_o);
        switch (_id) {
        case 0: _t->LoadedStructure((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 1: _t->LoadedProduct((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Prod*(*)>(_a[2]))); break;
        case 2: _t->LoadedProductInStructure((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Prod*(*)>(_a[2])),(*reinterpret_cast< StructureSetting*(*)>(_a[3]))); break;
        case 3: _t->LoadedRunSettings((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->AffectProductIfName((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->ApplyWithoutSaving(); break;
        case 6: _t->DeleteProductInStructure((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->RunLoaded((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Run*(*)>(_a[2]))); break;
        case 8: _t->NewWorkspaceBox(); break;
        case 9: _t->LoadWorkspaceBox(); break;
        case 10: _t->ChangeStructureName((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->ChangeRunName((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->SetProduct((*reinterpret_cast< Prod*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 13: _t->AddProduct((*reinterpret_cast< ProductSettings*(*)>(_a[1]))); break;
        case 14: _t->IntegrateProductsInStructure((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 15: _t->DeleteProductFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->AddRun((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->SetRun((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Run*(*)>(_a[2]))); break;
        case 18: _t->DeleteRun((*reinterpret_cast< RunLinker*(*)>(_a[1]))); break;
        case 19: _t->ChangeProductNameInSTructure((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Workspace::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Workspace::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Workspace,
      qt_meta_data_Workspace, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Workspace::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Workspace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Workspace::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Workspace))
        return static_cast<void*>(const_cast< Workspace*>(this));
    return QWidget::qt_metacast(_clname);
}

int Workspace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void Workspace::LoadedStructure(QString _t1, QStringList _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Workspace::LoadedProduct(QString _t1, Prod * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Workspace::LoadedProductInStructure(QString _t1, Prod * _t2, StructureSetting * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Workspace::LoadedRunSettings(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Workspace::AffectProductIfName(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Workspace::ApplyWithoutSaving()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void Workspace::DeleteProductInStructure(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Workspace::RunLoaded(QString _t1, Run * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
