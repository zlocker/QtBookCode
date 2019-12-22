/****************************************************************************
** Meta object code from reading C++ file 'qwmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qwmainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWMainWindow_t {
    QByteArrayData data[16];
    char stringdata0[300];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWMainWindow_t qt_meta_stringdata_QWMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QWMainWindow"
QT_MOC_LITERAL(1, 13, 24), // "on_actDoc_Open_triggered"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 23), // "on_actDoc_New_triggered"
QT_MOC_LITERAL(4, 63, 19), // "on_actCut_triggered"
QT_MOC_LITERAL(5, 83, 20), // "on_actFont_triggered"
QT_MOC_LITERAL(6, 104, 20), // "on_actCopy_triggered"
QT_MOC_LITERAL(7, 125, 21), // "on_actPaste_triggered"
QT_MOC_LITERAL(8, 147, 29), // "on_mdiArea_subWindowActivated"
QT_MOC_LITERAL(9, 177, 14), // "QMdiSubWindow*"
QT_MOC_LITERAL(10, 192, 4), // "arg1"
QT_MOC_LITERAL(11, 197, 24), // "on_actViewMode_triggered"
QT_MOC_LITERAL(12, 222, 7), // "checked"
QT_MOC_LITERAL(13, 230, 23), // "on_actCascade_triggered"
QT_MOC_LITERAL(14, 254, 20), // "on_actTile_triggered"
QT_MOC_LITERAL(15, 275, 24) // "on_actCloseALL_triggered"

    },
    "QWMainWindow\0on_actDoc_Open_triggered\0"
    "\0on_actDoc_New_triggered\0on_actCut_triggered\0"
    "on_actFont_triggered\0on_actCopy_triggered\0"
    "on_actPaste_triggered\0"
    "on_mdiArea_subWindowActivated\0"
    "QMdiSubWindow*\0arg1\0on_actViewMode_triggered\0"
    "checked\0on_actCascade_triggered\0"
    "on_actTile_triggered\0on_actCloseALL_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    1,   75,    2, 0x08 /* Private */,
      11,    1,   78,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,
      14,    0,   82,    2, 0x08 /* Private */,
      15,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QWMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWMainWindow *_t = static_cast<QWMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actDoc_Open_triggered(); break;
        case 1: _t->on_actDoc_New_triggered(); break;
        case 2: _t->on_actCut_triggered(); break;
        case 3: _t->on_actFont_triggered(); break;
        case 4: _t->on_actCopy_triggered(); break;
        case 5: _t->on_actPaste_triggered(); break;
        case 6: _t->on_mdiArea_subWindowActivated((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        case 7: _t->on_actViewMode_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_actCascade_triggered(); break;
        case 9: _t->on_actTile_triggered(); break;
        case 10: _t->on_actCloseALL_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMdiSubWindow* >(); break;
            }
            break;
        }
    }
}

const QMetaObject QWMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QWMainWindow.data,
      qt_meta_data_QWMainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QWMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWMainWindow.stringdata0))
        return static_cast<void*>(const_cast< QWMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QWMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
