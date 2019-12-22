/****************************************************************************
** Meta object code from reading C++ file 'qwdialoglocate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qwdialoglocate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwdialoglocate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWDialogLocate_t {
    QByteArrayData data[13];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWDialogLocate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWDialogLocate_t qt_meta_stringdata_QWDialogLocate = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QWDialogLocate"
QT_MOC_LITERAL(1, 15, 14), // "changeCellText"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "row"
QT_MOC_LITERAL(4, 35, 6), // "column"
QT_MOC_LITERAL(5, 42, 8), // "QString&"
QT_MOC_LITERAL(6, 51, 4), // "text"
QT_MOC_LITERAL(7, 56, 18), // "changeActionEnable"
QT_MOC_LITERAL(8, 75, 2), // "en"
QT_MOC_LITERAL(9, 78, 21), // "on_btnSetText_clicked"
QT_MOC_LITERAL(10, 100, 12), // "setSpinValue"
QT_MOC_LITERAL(11, 113, 5), // "rowNo"
QT_MOC_LITERAL(12, 119, 5) // "colNo"

    },
    "QWDialogLocate\0changeCellText\0\0row\0"
    "column\0QString&\0text\0changeActionEnable\0"
    "en\0on_btnSetText_clicked\0setSpinValue\0"
    "rowNo\0colNo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWDialogLocate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x06 /* Public */,
       7,    1,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   44,    2, 0x08 /* Private */,
      10,    2,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::Bool,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,

       0        // eod
};

void QWDialogLocate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWDialogLocate *_t = static_cast<QWDialogLocate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeCellText((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->changeActionEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_btnSetText_clicked(); break;
        case 3: _t->setSpinValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QWDialogLocate::*_t)(int , int , QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWDialogLocate::changeCellText)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QWDialogLocate::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWDialogLocate::changeActionEnable)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QWDialogLocate::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QWDialogLocate.data,
      qt_meta_data_QWDialogLocate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QWDialogLocate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWDialogLocate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWDialogLocate.stringdata0))
        return static_cast<void*>(const_cast< QWDialogLocate*>(this));
    return QDialog::qt_metacast(_clname);
}

int QWDialogLocate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void QWDialogLocate::changeCellText(int _t1, int _t2, QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QWDialogLocate::changeActionEnable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
