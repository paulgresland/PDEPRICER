/****************************************************************************
** Meta object code from reading C++ file 'structuresetting.h'
**
** Created: Mon 9. Feb 02:15:07 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PDEPRICER/structuresetting.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'structuresetting.h' doesn't include <QObject>."
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
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_StructureSetting[] = {
    "StructureSetting\0\0ChangeName(QString)\0"
    "Apply()\0"
};

void StructureSetting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StructureSetting *_t = static_cast<StructureSetting *>(_o);
        switch (_id) {
        case 0: _t->ChangeName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->Apply(); break;
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
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void StructureSetting::ChangeName(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
