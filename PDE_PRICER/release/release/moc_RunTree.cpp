/****************************************************************************
** Meta object code from reading C++ file 'RunTree.h'
**
** Created: Fri 13. Feb 15:23:28 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PDEPRICER/RunTree.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RunTree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RunTree[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      25,    8,    8,    8, 0x05,
      50,   48,    8,    8, 0x05,
     101,   85,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
     129,    8,    8,    8, 0x0a,
     139,    8,    8,    8, 0x0a,
     152,    8,    8,    8, 0x0a,
     175,   48,    8,    8, 0x0a,
     216,   85,    8,    8, 0x0a,
     249,   48,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_RunTree[] = {
    "RunTree\0\0AddRun(QString)\0"
    "DeleteItem(RunLinker*)\0,\0"
    "NewSelection(QTreeWidgetItem*,int)\0"
    "OldName,NewName\0ChangeName(QString,QString)\0"
    "AddItem()\0DeleteItem()\0SetCurrent(RunLinker*)\0"
    "ChangeItemName(QTreeWidgetItem*,QString)\0"
    "changeChildName(QString,QString)\0"
    "SetRun(QString,Run*)\0"
};

void RunTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RunTree *_t = static_cast<RunTree *>(_o);
        switch (_id) {
        case 0: _t->AddRun((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->DeleteItem((*reinterpret_cast< RunLinker*(*)>(_a[1]))); break;
        case 2: _t->NewSelection((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->ChangeName((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->AddItem(); break;
        case 5: _t->DeleteItem(); break;
        case 6: _t->SetCurrent((*reinterpret_cast< RunLinker*(*)>(_a[1]))); break;
        case 7: _t->ChangeItemName((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->changeChildName((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->SetRun((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Run*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RunTree::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RunTree::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RunTree,
      qt_meta_data_RunTree, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RunTree::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RunTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RunTree::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RunTree))
        return static_cast<void*>(const_cast< RunTree*>(this));
    return QWidget::qt_metacast(_clname);
}

int RunTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void RunTree::AddRun(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RunTree::DeleteItem(RunLinker * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RunTree::NewSelection(QTreeWidgetItem * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RunTree::ChangeName(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
