/****************************************************************************
** Meta object code from reading C++ file 'RunSettings.h'
**
** Created: Fri 13. Feb 04:51:30 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PDEPRICER/RunSettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RunSettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RunSettings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      35,   33,   12,   12, 0x05,
      58,   33,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      79,   12,   12,   12, 0x0a,
     100,   87,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_RunSettings[] = {
    "RunSettings\0\0ChangeName(QString)\0,\0"
    "Open(QWidget*,QString)\0SetRun(QString,Run*)\0"
    "Apply()\0StuctureName\0AddStructure(QString)\0"
};

void RunSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RunSettings *_t = static_cast<RunSettings *>(_o);
        switch (_id) {
        case 0: _t->ChangeName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->Open((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->SetRun((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Run*(*)>(_a[2]))); break;
        case 3: _t->Apply(); break;
        case 4: _t->AddStructure((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RunSettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RunSettings::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RunSettings,
      qt_meta_data_RunSettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RunSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RunSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RunSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RunSettings))
        return static_cast<void*>(const_cast< RunSettings*>(this));
    return QWidget::qt_metacast(_clname);
}

int RunSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void RunSettings::ChangeName(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RunSettings::Open(QWidget * _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RunSettings::SetRun(QString _t1, Run * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
