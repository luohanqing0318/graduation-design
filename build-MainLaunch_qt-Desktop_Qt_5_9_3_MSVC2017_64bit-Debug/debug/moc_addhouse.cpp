/****************************************************************************
** Meta object code from reading C++ file 'addhouse.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MainLaunch_qt/addhouse.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addhouse.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_addHouse_t {
    QByteArrayData data[11];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_addHouse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_addHouse_t qt_meta_stringdata_addHouse = {
    {
QT_MOC_LITERAL(0, 0, 8), // "addHouse"
QT_MOC_LITERAL(1, 9, 13), // "childsendText"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "str"
QT_MOC_LITERAL(4, 28, 18), // "SendAddOneNewHouse"
QT_MOC_LITERAL(5, 47, 8), // "house_id"
QT_MOC_LITERAL(6, 56, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(7, 80, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(8, 104, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(9, 128, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(10, 150, 23) // "on_pushButton_5_clicked"

    },
    "addHouse\0childsendText\0\0str\0"
    "SendAddOneNewHouse\0house_id\0"
    "on_pushButton_4_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_clicked\0"
    "on_pushButton_5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_addHouse[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   55,    2, 0x08 /* Private */,
       7,    0,   56,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void addHouse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        addHouse *_t = static_cast<addHouse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->childsendText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->SendAddOneNewHouse((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_4_clicked(); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_pushButton_5_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (addHouse::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&addHouse::childsendText)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (addHouse::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&addHouse::SendAddOneNewHouse)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject addHouse::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_addHouse.data,
      qt_meta_data_addHouse,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *addHouse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *addHouse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_addHouse.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int addHouse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void addHouse::childsendText(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void addHouse::SendAddOneNewHouse(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
