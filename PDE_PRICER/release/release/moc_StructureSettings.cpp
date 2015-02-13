/****************************************************************************
** Meta object code from reading C++ file 'StructureSettings.h'
**
** Created: Fri 13. Feb 03:42:42 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PDEPRICER/StructureSettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StructureSettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StructureSetting[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      38,   17,   17,   17, 0x05,
      64,   62,   17,   17, 0x05,
      87,   17,   17,   17, 0x05,
     118,   62,   17,   17, 0x05,
     178,   62,   17,   17, 0x05,
     233,   17,   17,   17, 0x05,
     264,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     296,   17,   17,   17, 0x0a,
     304,   17,   17,   17, 0x0a,
     323,   17,   17,   17, 0x0a,
     352,   17,   17,   17, 0x0a,
     372,   62,   17,   17, 0x0a,
     402,   17,   17,   17, 0x0a,
     418,   17,   17,   17, 0x0a,
     450,   62,   17,   17, 0x0a,
     487,   17,   17,   17, 0x0a,
     508,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_StructureSetting[] = {
    "StructureSetting\0\0ChangeName(QString)\0"
    "ChangeTreeName(QString)\0,\0"
    "Open(QWidget*,QString)\0"
    "ProductAdded(ProductSettings*)\0"
    "WorkSpaceIntegrateProductsInStructure(QListWidget*,QString)\0"
    "TreeIntegrateProductsInStructure(QListWidget*,QString)\0"
    "CloseProductSettings(QWidget*)\0"
    "DeleteProduct(QListWidgetItem*)\0Apply()\0"
    "IntegrateProduct()\0AddProduct(ProductSettings*)\0"
    "AddProduct(QString)\0OpenProduct(QWidget*,QString)\0"
    "RemoveProduct()\0CloseSettings(ProductSettings*)\0"
    "AffectProductIfName(QString,QString)\0"
    "ApplyWithoutSaving()\0DeleteItem(QListWidgetItem*)\0"
};

void StructureSetting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StructureSetting *_t = static_cast<StructureSetting *>(_o);
        switch (_id) {
        case 0: _t->ChangeName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->ChangeTreeName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->Open((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->ProductAdded((*reinterpret_cast< ProductSettings*(*)>(_a[1]))); break;
        case 4: _t->WorkSpaceIntegrateProductsInStructure((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->TreeIntegrateProductsInStructure((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->CloseProductSettings((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 7: _t->DeleteProduct((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->Apply(); break;
        case 9: _t->IntegrateProduct(); break;
        case 10: _t->AddProduct((*reinterpret_cast< ProductSettings*(*)>(_a[1]))); break;
        case 11: _t->AddProduct((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->OpenProduct((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 13: _t->RemoveProduct(); break;
        case 14: _t->CloseSettings((*reinterpret_cast< ProductSettings*(*)>(_a[1]))); break;
        case 15: _t->AffectProductIfName((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: _t->ApplyWithoutSaving(); break;
        case 17: _t->DeleteItem((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StructureSetting::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StructureSetting::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_StructureSetting,
      qt_meta_data_StructureSetting, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StructureSetting::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StructureSetting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StructureSetting::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StructureSetting))
        return static_cast<void*>(const_cast< StructureSetting*>(this));
    return QWidget::qt_metacast(_clname);
}

int StructureSetting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void StructureSetting::ChangeName(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StructureSetting::ChangeTreeName(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StructureSetting::Open(QWidget * _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StructureSetting::ProductAdded(ProductSettings * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StructureSetting::WorkSpaceIntegrateProductsInStructure(QListWidget * _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void StructureSetting::TreeIntegrateProductsInStructure(QListWidget * _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void StructureSetting::CloseProductSettings(QWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void StructureSetting::DeleteProduct(QListWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
