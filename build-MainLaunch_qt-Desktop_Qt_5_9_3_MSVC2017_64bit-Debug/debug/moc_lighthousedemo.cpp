/****************************************************************************
** Meta object code from reading C++ file 'lighthousedemo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MainLaunch_qt/src/lighthouse/lighthousedemo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lighthousedemo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LightHouseDemo_t {
    QByteArrayData data[7];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LightHouseDemo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LightHouseDemo_t qt_meta_stringdata_LightHouseDemo = {
    {
QT_MOC_LITERAL(0, 0, 14), // "LightHouseDemo"
QT_MOC_LITERAL(1, 15, 28), // "on_actionLoadModel_triggered"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 32), // "On_actionChooseSeason1_triggered"
QT_MOC_LITERAL(4, 78, 32), // "On_actionChooseSeason2_triggered"
QT_MOC_LITERAL(5, 111, 32), // "On_actionChooseSeason3_triggered"
QT_MOC_LITERAL(6, 144, 32) // "On_actionChooseSeason4_triggered"

    },
    "LightHouseDemo\0on_actionLoadModel_triggered\0"
    "\0On_actionChooseSeason1_triggered\0"
    "On_actionChooseSeason2_triggered\0"
    "On_actionChooseSeason3_triggered\0"
    "On_actionChooseSeason4_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LightHouseDemo[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LightHouseDemo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LightHouseDemo *_t = static_cast<LightHouseDemo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionLoadModel_triggered(); break;
        case 1: _t->On_actionChooseSeason1_triggered(); break;
        case 2: _t->On_actionChooseSeason2_triggered(); break;
        case 3: _t->On_actionChooseSeason3_triggered(); break;
        case 4: _t->On_actionChooseSeason4_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject LightHouseDemo::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_LightHouseDemo.data,
      qt_meta_data_LightHouseDemo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LightHouseDemo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LightHouseDemo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LightHouseDemo.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int LightHouseDemo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
