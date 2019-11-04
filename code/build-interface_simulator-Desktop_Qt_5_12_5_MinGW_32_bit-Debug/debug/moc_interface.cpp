/****************************************************************************
** Meta object code from reading C++ file 'interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../interface_simulator/interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_interface_t {
    QByteArrayData data[11];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_interface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_interface_t qt_meta_stringdata_interface = {
    {
QT_MOC_LITERAL(0, 0, 9), // "interface"
QT_MOC_LITERAL(1, 10, 23), // "on_actionNovo_triggered"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 24), // "on_actionAbrir_triggered"
QT_MOC_LITERAL(4, 60, 25), // "on_actionSalvar_triggered"
QT_MOC_LITERAL(5, 86, 23), // "on_actionPlay_triggered"
QT_MOC_LITERAL(6, 110, 27), // "on_actionRecortar_triggered"
QT_MOC_LITERAL(7, 138, 25), // "on_actionCopiar_triggered"
QT_MOC_LITERAL(8, 164, 24), // "on_actionColar_triggered"
QT_MOC_LITERAL(9, 189, 27), // "on_actionDesfazer_triggered"
QT_MOC_LITERAL(10, 217, 26) // "on_actionRefazer_triggered"

    },
    "interface\0on_actionNovo_triggered\0\0"
    "on_actionAbrir_triggered\0"
    "on_actionSalvar_triggered\0"
    "on_actionPlay_triggered\0"
    "on_actionRecortar_triggered\0"
    "on_actionCopiar_triggered\0"
    "on_actionColar_triggered\0"
    "on_actionDesfazer_triggered\0"
    "on_actionRefazer_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_interface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<interface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionNovo_triggered(); break;
        case 1: _t->on_actionAbrir_triggered(); break;
        case 2: _t->on_actionSalvar_triggered(); break;
        case 3: _t->on_actionPlay_triggered(); break;
        case 4: _t->on_actionRecortar_triggered(); break;
        case 5: _t->on_actionCopiar_triggered(); break;
        case 6: _t->on_actionColar_triggered(); break;
        case 7: _t->on_actionDesfazer_triggered(); break;
        case 8: _t->on_actionRefazer_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject interface::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_interface.data,
    qt_meta_data_interface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_interface.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
