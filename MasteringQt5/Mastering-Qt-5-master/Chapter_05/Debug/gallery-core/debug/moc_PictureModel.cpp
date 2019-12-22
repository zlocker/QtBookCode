/****************************************************************************
** Meta object code from reading C++ file 'PictureModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gallery-core/PictureModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PictureModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PictureModel_t {
    QByteArrayData data[11];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PictureModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PictureModel_t qt_meta_stringdata_PictureModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PictureModel"
QT_MOC_LITERAL(1, 13, 22), // "deletePicturesForAlbum"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 17), // "addPictureFromUrl"
QT_MOC_LITERAL(4, 55, 7), // "fileUrl"
QT_MOC_LITERAL(5, 63, 10), // "removeRows"
QT_MOC_LITERAL(6, 74, 3), // "row"
QT_MOC_LITERAL(7, 78, 5), // "count"
QT_MOC_LITERAL(8, 84, 6), // "parent"
QT_MOC_LITERAL(9, 91, 10), // "setAlbumId"
QT_MOC_LITERAL(10, 102, 7) // "albumId"

    },
    "PictureModel\0deletePicturesForAlbum\0"
    "\0addPictureFromUrl\0fileUrl\0removeRows\0"
    "row\0count\0parent\0setAlbumId\0albumId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PictureModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x02 /* Public */,
       5,    3,   43,    2, 0x02 /* Public */,
       5,    2,   50,    2, 0x22 /* Public | MethodCloned */,
       9,    1,   55,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QUrl,    4,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    6,    7,    8,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void PictureModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PictureModel *_t = static_cast<PictureModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deletePicturesForAlbum(); break;
        case 1: _t->addPictureFromUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: { bool _r = _t->removeRows((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->removeRows((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->setAlbumId((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PictureModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_PictureModel.data,
      qt_meta_data_PictureModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PictureModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PictureModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PictureModel.stringdata0))
        return static_cast<void*>(const_cast< PictureModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int PictureModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
