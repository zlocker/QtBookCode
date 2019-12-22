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
    QByteArrayData data[15];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWMainWindow_t qt_meta_stringdata_QWMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QWMainWindow"
QT_MOC_LITERAL(1, 13, 30), // "on_tabWidget_tabCloseRequested"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 5), // "index"
QT_MOC_LITERAL(4, 51, 24), // "on_actDoc_Open_triggered"
QT_MOC_LITERAL(5, 76, 23), // "on_actDoc_New_triggered"
QT_MOC_LITERAL(6, 100, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(7, 128, 19), // "on_actCut_triggered"
QT_MOC_LITERAL(8, 148, 20), // "on_actFont_triggered"
QT_MOC_LITERAL(9, 169, 20), // "on_actCopy_triggered"
QT_MOC_LITERAL(10, 190, 21), // "on_actPaste_triggered"
QT_MOC_LITERAL(11, 212, 24), // "on_actCloseALL_triggered"
QT_MOC_LITERAL(12, 237, 14), // "on_fileOpended"
QT_MOC_LITERAL(13, 252, 8), // "QString&"
QT_MOC_LITERAL(14, 261, 9) // "aFileName"

    },
    "QWMainWindow\0on_tabWidget_tabCloseRequested\0"
    "\0index\0on_actDoc_Open_triggered\0"
    "on_actDoc_New_triggered\0"
    "on_tabWidget_currentChanged\0"
    "on_actCut_triggered\0on_actFont_triggered\0"
    "on_actCopy_triggered\0on_actPaste_triggered\0"
    "on_actCloseALL_triggered\0on_fileOpended\0"
    "QString&\0aFileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    0,   67,    2, 0x08 /* Private */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    1,   69,    2, 0x08 /* Private */,
       7,    0,   72,    2, 0x08 /* Private */,
       8,    0,   73,    2, 0x08 /* Private */,
       9,    0,   74,    2, 0x08 /* Private */,
      10,    0,   75,    2, 0x08 /* Private */,
      11,    0,   76,    2, 0x08 /* Private */,
      12,    1,   77,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void QWMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWMainWindow *_t = static_cast<QWMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_tabWidget_tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_actDoc_Open_triggered(); break;
        case 2: _t->on_actDoc_New_triggered(); break;
        case 3: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_actCut_triggered(); break;
        case 5: _t->on_actFont_triggered(); break;
        case 6: _t->on_actCopy_triggered(); break;
        case 7: _t->on_actPaste_triggered(); break;
        case 8: _t->on_actCloseALL_triggered(); break;
        case 9: _t->on_fileOpended((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
