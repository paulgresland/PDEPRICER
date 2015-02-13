/****************************************************************************
** Meta object code from reading C++ file 'WorkTab.h'
**
** Created: Fri 13. Feb 04:51:15 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PDEPRICER/WorkTab.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WorkTab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WorkTab[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,    9,    8,    8, 0x05,
     100,   76,    8,    8, 0x05,
     137,    8,    8,    8, 0x05,
     166,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
     195,  193,    8,    8, 0x0a,
     227,  193,    8,    8, 0x0a,
     259,  193,    8,    8, 0x0a,
     289,  193,    8,    8, 0x0a,
     315,    8,    8,    8, 0x0a,
     334,  331,    8,    8, 0x0a,
     388,  379,    8,    8, 0x0a,
     419,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WorkTab[] = {
    "WorkTab\0\0IdStructure,OldName,NewName\0"
    "StructureSetted(short,QString,QString)\0"
    "Product,OldName,NewName\0"
    "ProductSetted(Prod*,QString,QString)\0"
    "AddProduct(ProductSettings*)\0"
    "DeleteProductFile(QString)\0,\0"
    "ChangeTabName(QWidget*,QString)\0"
    "OpenStructure(QWidget*,QString)\0"
    "OpenProduct(QWidget*,QString)\0"
    "OpenRun(QWidget*,QString)\0Close(QWidget*)\0"
    ",,\0SetProduct(ProductSettings*,QString,QString)\0"
    "Settings\0ProductAdded(ProductSettings*)\0"
    "DeleteProduct(QListWidgetItem*)\0"
};

void WorkTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WorkTab *_t = static_cast<WorkTab *>(_o);
        switch (_id) {
        case 0: _t->StructureSetted((*reinterpret_cast< short(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->ProductSetted((*reinterpret_cast< Prod*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->AddProduct((*reinterpret_cast< ProductSettings*(*)>(_a[1]))); break;
        case 3: _t->DeleteProductFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->ChangeTabName((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->OpenStructure((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->OpenProduct((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->OpenRun((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->Close((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 9: _t->SetProduct((*reinterpret_cast< ProductSettings*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 10: _t->ProductAdded((*reinterpret_cast< ProductSettings*(*)>(_a[1]))); break;
        case 11: _t->DeleteProduct((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WorkTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WorkTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WorkTab,
      qt_meta_data_WorkTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WorkTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WorkTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WorkTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WorkTab))
        return static_cast<void*>(const_cast< WorkTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int WorkTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void WorkTab::StructureSetted(short _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WorkTab::ProductSetted(Prod * _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WorkTab::AddProduct(ProductSettings * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WorkTab::DeleteProductFile(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
