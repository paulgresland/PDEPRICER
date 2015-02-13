/****************************************************************************
** Meta object code from reading C++ file 'Prod.h'
**
** Created: Tue 10. Feb 23:03:45 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PDEPRICER/Prod.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Prod.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Prod[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    6,    5,    5, 0x0a,
      23,   21,    5,    5, 0x0a,
      37,   35,    5,    5, 0x0a,
      57,   55,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Prod[] = {
    "Prod\0\0t\0SetType(int)\0n\0SetNat(int)\0s\0"
    "SetStrike(double)\0m\0SetMaturity(double)\0"
};

void Prod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Prod *_t = static_cast<Prod *>(_o);
        switch (_id) {
        case 0: _t->SetType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->SetNat((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->SetStrike((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->SetMaturity((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Prod::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Prod::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Prod,
      qt_meta_data_Prod, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Prod::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Prod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Prod::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Prod))
        return static_cast<void*>(const_cast< Prod*>(this));
    return QWidget::qt_metacast(_clname);
}

int Prod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
