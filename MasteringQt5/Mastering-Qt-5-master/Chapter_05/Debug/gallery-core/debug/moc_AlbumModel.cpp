/****************************************************************************
** Meta object code from reading C++ file 'AlbumModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gallery-core/AlbumModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AlbumModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AlbumModel_t {
    QByteArrayData data[9];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlbumModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlbumModel_t qt_meta_stringdata_AlbumModel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "AlbumModel"
QT_MOC_LITERAL(1, 11, 16), // "addAlbumFromName"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 4), // "name"
QT_MOC_LITERAL(4, 34, 6), // "rename"
QT_MOC_LITERAL(5, 41, 3), // "row"
QT_MOC_LITERAL(6, 45, 10), // "removeRows"
QT_MOC_LITERAL(7, 56, 5), // "count"
QT_MOC_LITERAL(8, 62, 6) // "parent"

    },
    "AlbumModel\0addAlbumFromName\0\0name\0"
    "rename\0row\0removeRows\0count\0parent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlbumModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x02 /* Public */,
       4,    2,   37,    2, 0x02 /* Public */,
       6,    3,   42,    2, 0x02 /* Public */,
       6,    2,   49,    2, 0x22 /* Public | MethodCloned */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    5,    3,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    5,    7,    8,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,    5,    7,

       0        // eod
};

void AlbumModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AlbumModel *_t = static_cast<AlbumModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addAlbumFromName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->rename((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: { bool _r = _t->removeRows((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->removeRows((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject AlbumModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_AlbumModel.data,
      qt_meta_data_AlbumModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AlbumModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlbumModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlbumModel.stringdata0))
        return static_cast<void*>(const_cast< AlbumModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int AlbumModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
