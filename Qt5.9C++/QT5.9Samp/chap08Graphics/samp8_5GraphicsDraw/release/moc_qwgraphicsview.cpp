/****************************************************************************
** Meta object code from reading C++ file 'qwgraphicsview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qwgraphicsview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwgraphicsview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWGraphicsView_t {
    QByteArrayData data[9];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWGraphicsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWGraphicsView_t qt_meta_stringdata_QWGraphicsView = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QWGraphicsView"
QT_MOC_LITERAL(1, 15, 14), // "mouseMovePoint"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "point"
QT_MOC_LITERAL(4, 37, 12), // "mouseClicked"
QT_MOC_LITERAL(5, 50, 16), // "mouseDoubleClick"
QT_MOC_LITERAL(6, 67, 8), // "keyPress"
QT_MOC_LITERAL(7, 76, 10), // "QKeyEvent*"
QT_MOC_LITERAL(8, 87, 5) // "event"

    },
    "QWGraphicsView\0mouseMovePoint\0\0point\0"
    "mouseClicked\0mouseDoubleClick\0keyPress\0"
    "QKeyEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWGraphicsView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       5,    1,   40,    2, 0x06 /* Public */,
       6,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void QWGraphicsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWGraphicsView *_t = static_cast<QWGraphicsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mouseMovePoint((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 1: _t->mouseClicked((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 2: _t->mouseDoubleClick((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: _t->keyPress((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QWGraphicsView::*_t)(QPoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWGraphicsView::mouseMovePoint)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QWGraphicsView::*_t)(QPoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWGraphicsView::mouseClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QWGraphicsView::*_t)(QPoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWGraphicsView::mouseDoubleClick)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QWGraphicsView::*_t)(QKeyEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWGraphicsView::keyPress)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QWGraphicsView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_QWGraphicsView.data,
      qt_meta_data_QWGraphicsView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QWGraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWGraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWGraphicsView.stringdata0))
        return static_cast<void*>(const_cast< QWGraphicsView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int QWGraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QWGraphicsView::mouseMovePoint(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QWGraphicsView::mouseClicked(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QWGraphicsView::mouseDoubleClick(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QWGraphicsView::keyPress(QKeyEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
