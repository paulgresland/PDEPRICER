/****************************************************************************
** Meta object code from reading C++ file 'ProductLinker.h'
**
** Created: Fri 13. Feb 00:33:16 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PDEPRICER/ProductLinker.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProductLinker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ProductLinker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      42,   40,   14,   14, 0x05,
      65,   40,   14,   14, 0x05,
     106,   40,   14,   14, 0x05,
     153,   14,   14,   14, 0x05,
     182,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     214,   14,   14,   14, 0x0a,
     241,   14,   14,   14, 0x0a,
     274,   14,   14,   14, 0x0a,
     294,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ProductLinker[] = {
    "ProductLinker\0\0Selected(ProductLinker*)\0"
    ",\0Open(QWidget*,QString)\0"
    "ChangeItemName(QListWidgetItem*,QString)\0"
    "ChangeItemNameInTree(QListWidgetItem*,QString)\0"
    "TapOutItem(QListWidgetItem*)\0"
    "CloseSettings(ProductSettings*)\0"
    "SelectIf(QListWidgetItem*)\0"
    "OpenSettingsIf(QListWidgetItem*)\0"
    "ChangeName(QString)\0DeleteProduct()\0"
};

void ProductLinker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProductLinker *_t = static_cast<ProductLinker *>(_o);
        switch (_id) {
        case 0: _t->Selected((*reinterpret_cast< ProductLinker*(*)>(_a[1]))); break;
        case 1: _t->Open((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->ChangeItemName((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->ChangeItemNameInTree((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->TapOutItem((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->CloseSettings((*reinterpret_cast< ProductSettings*(*)>(_a[1]))); break;
        case 6: _t->SelectIf((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->OpenSettingsIf((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->ChangeName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->DeleteProduct(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ProductLinker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ProductLinker::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ProductLinker,
      qt_meta_data_ProductLinker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProductLinker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProductLinker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProductLinker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProductLinker))
        return static_cast<void*>(const_cast< ProductLinker*>(this));
    return QWidget::qt_metacast(_clname);
}

int ProductLinker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void ProductLinker::Selected(ProductLinker * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ProductLinker::Open(QWidget * _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ProductLinker::ChangeItemName(QListWidgetItem * _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ProductLinker::ChangeItemNameInTree(QListWidgetItem * _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ProductLinker::TapOutItem(QListWidgetItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ProductLinker::CloseSettings(ProductSettings * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
