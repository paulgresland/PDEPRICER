/****************************************************************************
** Meta object code from reading C++ file 'TreeSettingsLinker.h'
**
** Created: Mon 9. Feb 16:26:19 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PDEPRICER/TreeSettingsLinker.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TreeSettingsLinker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TreeSettingsLinker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      52,   50,   19,   19, 0x05,
      75,   50,   19,   19, 0x05,
     116,   50,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     157,   50,   19,   19, 0x0a,
     188,   50,   19,   19, 0x0a,
     225,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TreeSettingsLinker[] = {
    "TreeSettingsLinker\0\0Selected(TreeSettingsLinker*)\0"
    ",\0Open(QWidget*,QString)\0"
    "ChangeItemName(QTreeWidgetItem*,QString)\0"
    "ApplySettings(QString,StructureSetting*)\0"
    "SelectIf(QTreeWidgetItem*,int)\0"
    "OpenSettingsIf(QTreeWidgetItem*,int)\0"
    "ChangeName(QString)\0"
};

void TreeSettingsLinker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TreeSettingsLinker *_t = static_cast<TreeSettingsLinker *>(_o);
        switch (_id) {
        case 0: _t->Selected((*reinterpret_cast< TreeSettingsLinker*(*)>(_a[1]))); break;
        case 1: _t->Open((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->ChangeItemName((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->ApplySettings((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< StructureSetting*(*)>(_a[2]))); break;
        case 4: _t->SelectIf((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->OpenSettingsIf((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->ChangeName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TreeSettingsLinker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TreeSettingsLinker::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TreeSettingsLinker,
      qt_meta_data_TreeSettingsLinker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TreeSettingsLinker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TreeSettingsLinker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TreeSettingsLinker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TreeSettingsLinker))
        return static_cast<void*>(const_cast< TreeSettingsLinker*>(this));
    return QWidget::qt_metacast(_clname);
}

int TreeSettingsLinker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void TreeSettingsLinker::Selected(TreeSettingsLinker * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TreeSettingsLinker::Open(QWidget * _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TreeSettingsLinker::ChangeItemName(QTreeWidgetItem * _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TreeSettingsLinker::ApplySettings(QString _t1, StructureSetting * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
