/****************************************************************************
** Meta object code from reading C++ file 'StructureLinker.h'
**
** Created: Fri 13. Feb 14:03:24 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PDEPRICER/StructureLinker.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StructureLinker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StructureLinker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      46,   44,   16,   16, 0x05,
      69,   44,   16,   16, 0x05,
     110,   44,   16,   16, 0x05,
     151,   44,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     184,   44,   16,   16, 0x0a,
     215,   44,   16,   16, 0x0a,
     252,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_StructureLinker[] = {
    "StructureLinker\0\0Selected(StructureLinker*)\0"
    ",\0Open(QWidget*,QString)\0"
    "ChangeItemName(QTreeWidgetItem*,QString)\0"
    "ApplySettings(QString,StructureSetting*)\0"
    "changeChildName(QString,QString)\0"
    "SelectIf(QTreeWidgetItem*,int)\0"
    "OpenSettingsIf(QTreeWidgetItem*,int)\0"
    "ChangeName(QString)\0"
};

void StructureLinker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StructureLinker *_t = static_cast<StructureLinker *>(_o);
        switch (_id) {
        case 0: _t->Selected((*reinterpret_cast< StructureLinker*(*)>(_a[1]))); break;
        case 1: _t->Open((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->ChangeItemName((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->ApplySettings((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< StructureSetting*(*)>(_a[2]))); break;
        case 4: _t->changeChildName((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->SelectIf((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->OpenSettingsIf((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->ChangeName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StructureLinker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StructureLinker::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_StructureLinker,
      qt_meta_data_StructureLinker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StructureLinker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StructureLinker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StructureLinker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StructureLinker))
        return static_cast<void*>(const_cast< StructureLinker*>(this));
    return QWidget::qt_metacast(_clname);
}

int StructureLinker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void StructureLinker::Selected(StructureLinker * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StructureLinker::Open(QWidget * _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StructureLinker::ChangeItemName(QTreeWidgetItem * _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StructureLinker::ApplySettings(QString _t1, StructureSetting * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StructureLinker::changeChildName(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
