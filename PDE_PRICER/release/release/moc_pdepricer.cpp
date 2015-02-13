/****************************************************************************
** Meta object code from reading C++ file 'pdepricer.h'
**
** Created: Fri 13. Feb 15:57:07 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PDEPRICER/pdepricer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pdepricer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PDEPricer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   10,   10,   10, 0x0a,
      57,   10,   10,   10, 0x0a,
      75,   10,   10,   10, 0x0a,
      92,   10,   10,   10, 0x0a,
     110,   10,   10,   10, 0x0a,
     132,   10,   10,   10, 0x0a,
     180,  166,   10,   10, 0x0a,
     222,  220,   10,   10, 0x0a,
     257,  220,   10,   10, 0x0a,
     287,  284,   10,   10, 0x0a,
     343,  166,   10,   10, 0x0a,
     380,  220,   10,   10, 0x0a,
     431,   10,   10,   10, 0x0a,
     461,   10,   10,   10, 0x0a,
     509,  500,   10,   10, 0x0a,
     545,   10,   10,   10, 0x0a,
     571,  559,   10,   10, 0x0a,
     622,  610,  593,   10, 0x0a,
     653,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PDEPricer[] = {
    "PDEPricer\0\0AddProduct(ProductSettings*)\0"
    "HideStructures()\0HideRunSettings()\0"
    "ShowStructures()\0ShowRunSettings()\0"
    "AddStructure(QString)\0"
    "DeleteStructure(StructureLinker*)\0"
    "Name,Settings\0SetStructure(QString,StructureSetting*)\0"
    ",\0LoadStructure(QString,QStringList)\0"
    "LoadProduct(QString,Prod*)\0,,\0"
    "LoadProductInStructure(QString,Prod*,StructureSetting*)\0"
    "SetProduct(QString,ProductSettings*)\0"
    "ChangeGeneralProductName(QListWidgetItem*,QString)\0"
    "DeleteGeneralProduct(QString)\0"
    "DeleteGeneralProduct(QListWidgetItem*)\0"
    "Settings\0AddGeneralProduct(ProductSettings*)\0"
    "RunLauncher()\0RunName,run\0"
    "LoadRun(QString,Run*)\0QListWidgetItem*\0"
    "ProductName\0GetGeneralItemProduct(QString)\0"
    "AddRun(QString)\0"
};

void PDEPricer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PDEPricer *_t = static_cast<PDEPricer *>(_o);
        switch (_id) {
        case 0: _t->AddProduct((*reinterpret_cast< ProductSettings*(*)>(_a[1]))); break;
        case 1: _t->HideStructures(); break;
        case 2: _t->HideRunSettings(); break;
        case 3: _t->ShowStructures(); break;
        case 4: _t->ShowRunSettings(); break;
        case 5: _t->AddStructure((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->DeleteStructure((*reinterpret_cast< StructureLinker*(*)>(_a[1]))); break;
        case 7: _t->SetStructure((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< StructureSetting*(*)>(_a[2]))); break;
        case 8: _t->LoadStructure((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 9: _t->LoadProduct((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Prod*(*)>(_a[2]))); break;
        case 10: _t->LoadProductInStructure((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Prod*(*)>(_a[2])),(*reinterpret_cast< StructureSetting*(*)>(_a[3]))); break;
        case 11: _t->SetProduct((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< ProductSettings*(*)>(_a[2]))); break;
        case 12: _t->ChangeGeneralProductName((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 13: _t->DeleteGeneralProduct((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->DeleteGeneralProduct((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 15: _t->AddGeneralProduct((*reinterpret_cast< ProductSettings*(*)>(_a[1]))); break;
        case 16: _t->RunLauncher(); break;
        case 17: _t->LoadRun((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Run*(*)>(_a[2]))); break;
        case 18: { QListWidgetItem* _r = _t->GetGeneralItemProduct((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QListWidgetItem**>(_a[0]) = _r; }  break;
        case 19: _t->AddRun((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PDEPricer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PDEPricer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_PDEPricer,
      qt_meta_data_PDEPricer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PDEPricer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PDEPricer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PDEPricer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PDEPricer))
        return static_cast<void*>(const_cast< PDEPricer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int PDEPricer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void PDEPricer::AddProduct(ProductSettings * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
