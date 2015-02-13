/****************************************************************************
** Meta object code from reading C++ file 'StructureTree.h'
**
** Created: Fri 13. Feb 04:51:27 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PDEPRICER/StructureTree.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StructureTree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StructureTree[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      37,   14,   14,   14, 0x05,
      68,   66,   14,   14, 0x05,
     119,  103,   14,   14, 0x05,
     147,   66,   14,   14, 0x05,
     207,  177,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     261,   14,   14,   14, 0x0a,
     271,   14,   14,   14, 0x0a,
     284,   14,   14,   14, 0x0a,
     313,   66,   14,   14, 0x0a,
     354,   66,   14,   14, 0x0a,
     405,   66,   14,   14, 0x0a,
     428,   66,   14,   14, 0x0a,
     473,  470,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_StructureTree[] = {
    "StructureTree\0\0AddStructure(QString)\0"
    "DeleteItem(StructureLinker*)\0,\0"
    "NewSelection(QTreeWidgetItem*,int)\0"
    "OldName,NewName\0ChangeName(QString,QString)\0"
    "OpenProduct(QWidget*,QString)\0"
    "OldName,NewName,StructureName\0"
    "ChangeProductNameInSTructure(QString,QString,QString)\0"
    "AddItem()\0DeleteItem()\0"
    "SetCurrent(StructureLinker*)\0"
    "ChangeItemName(QTreeWidgetItem*,QString)\0"
    "IntegrateProductsInStructure(QListWidget*,QString)\0"
    "Open(QWidget*,QString)\0"
    "DeleteProductInStructure(QString,QString)\0"
    ",,\0SetProduct(ProductSettings*,QString,QString)\0"
};

void StructureTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StructureTree *_t = static_cast<StructureTree *>(_o);
        switch (_id) {
        case 0: _t->AddStructure((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->DeleteItem((*reinterpret_cast< StructureLinker*(*)>(_a[1]))); break;
        case 2: _t->NewSelection((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->ChangeName((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->OpenProduct((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->ChangeProductNameInSTructure((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 6: _t->AddItem(); break;
        case 7: _t->DeleteItem(); break;
        case 8: _t->SetCurrent((*reinterpret_cast< StructureLinker*(*)>(_a[1]))); break;
        case 9: _t->ChangeItemName((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->IntegrateProductsInStructure((*reinterpret_cast< QListWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->Open((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->DeleteProductInStructure((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 13: _t->SetProduct((*reinterpret_cast< ProductSettings*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StructureTree::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StructureTree::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_StructureTree,
      qt_meta_data_StructureTree, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StructureTree::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StructureTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StructureTree::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StructureTree))
        return static_cast<void*>(const_cast< StructureTree*>(this));
    return QWidget::qt_metacast(_clname);
}

int StructureTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void StructureTree::AddStructure(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StructureTree::DeleteItem(StructureLinker * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StructureTree::NewSelection(QTreeWidgetItem * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StructureTree::ChangeName(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StructureTree::OpenProduct(QWidget * _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void StructureTree::ChangeProductNameInSTructure(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
