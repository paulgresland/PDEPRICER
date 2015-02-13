/****************************************************************************
** Meta object code from reading C++ file 'ProductSettings.h'
**
** Created: Fri 13. Feb 04:51:21 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PDEPRICER/ProductSettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProductSettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ProductSettings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      37,   16,   16,   16, 0x05,
      64,   61,   16,   16, 0x05,
     114,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     130,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ProductSettings[] = {
    "ProductSettings\0\0ChangeName(QString)\0"
    "ChangeTreeName(QString)\0,,\0"
    "SettingsApplied(ProductSettings*,QString,QString)\0"
    "DeleteProduct()\0Apply()\0"
};

void ProductSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProductSettings *_t = static_cast<ProductSettings *>(_o);
        switch (_id) {
        case 0: _t->ChangeName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->ChangeTreeName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->SettingsApplied((*reinterpret_cast< ProductSettings*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->DeleteProduct(); break;
        case 4: _t->Apply(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ProductSettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ProductSettings::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ProductSettings,
      qt_meta_data_ProductSettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProductSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProductSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProductSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProductSettings))
        return static_cast<void*>(const_cast< ProductSettings*>(this));
    return QWidget::qt_metacast(_clname);
}

int ProductSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ProductSettings::ChangeName(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ProductSettings::ChangeTreeName(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ProductSettings::SettingsApplied(ProductSettings * _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ProductSettings::DeleteProduct()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
