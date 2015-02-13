/****************************************************************************
** Meta object code from reading C++ file 'Tree.h'
**
** Created: Wed 11. Feb 17:18:34 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PDEPRICER/Tree.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Tree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tree[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x05,
      28,    5,    5,    5, 0x05,
      59,   57,    5,    5, 0x05,
     110,   94,    5,    5, 0x05,
     138,   57,    5,    5, 0x05,

 // slots: signature, parameters, type, tag, flags
     168,    5,    5,    5, 0x0a,
     178,    5,    5,    5, 0x0a,
     191,    5,    5,    5, 0x0a,
     220,   57,    5,    5, 0x0a,
     261,   57,    5,    5, 0x0a,
     312,   57,    5,    5, 0x0a,
     335,   57,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tree[] = {
    "Tree\0\0AddStructure(QString)\0"
    "DeleteItem(StructureLinker*)\0,\0"
    "NewSelection(QTreeWidgetItem*,int)\0"
    "OldName,NewName\0ChangeName(QString,QString)\0"
    "OpenProduct(QWidget*,QString)\0AddItem()\0"
    "DeleteItem()\0SetCurrent(StructureLinker*)\0"
    "ChangeItemName(QTreeWidgetItem*,QString)\0"
    "IntegrateProductsInStructure(QListWidget*,QString)\0"
    "Open(QWidget*,QString)\0"
    "DeleteProductInStructure(QString,QString)\0"
};

void Tree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Tree *_t = static_cast<Tree *>(_o);
        switch (_id) {
        case 0: _t->AddStructure((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->DeleteItem((*reinterpret_cast< StructureLinker*(*)>(_a[1]))); break;
        case 2: _t->NewSelection((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->ChangeName((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->OpenProduct((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->AddItem(); break;
        case 6: _t->DeleteItem(); break;
        case 7: _t->SetCurrent((*reinterpret_cast< StructureLinker*(*)>(_a[1]))); break;
        case 8: _t->ChangeItemName((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->IntegrateProductsInStructure((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->Open((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->DeleteProductInStructure((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Tree::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Tree::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Tree,
      qt_meta_data_Tree, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Tree::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Tree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Tree::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tree))
        return static_cast<void*>(const_cast< Tree*>(this));
    return QWidget::qt_metacast(_clname);
}

int Tree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Tree::AddStructure(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tree::DeleteItem(StructureLinker * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tree::NewSelection(QTreeWidgetItem * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tree::ChangeName(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Tree::OpenProduct(QWidget * _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
