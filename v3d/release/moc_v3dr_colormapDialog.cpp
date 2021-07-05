/****************************************************************************
** Meta object code from reading C++ file 'v3dr_colormapDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../3drenderer/v3dr_colormapDialog.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'v3dr_colormapDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_V3dr_colormapDialog_t {
    const uint offsetsAndSize[40];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_V3dr_colormapDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_V3dr_colormapDialog_t qt_meta_stringdata_V3dr_colormapDialog = {
    {
QT_MOC_LITERAL(0, 19), // "V3dr_colormapDialog"
QT_MOC_LITERAL(20, 6), // "linkTo"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 8), // "QWidget*"
QT_MOC_LITERAL(37, 1), // "w"
QT_MOC_LITERAL(39, 10), // "setDefault"
QT_MOC_LITERAL(50, 1), // "k"
QT_MOC_LITERAL(52, 11), // "setDefault0"
QT_MOC_LITERAL(64, 11), // "setDefault1"
QT_MOC_LITERAL(76, 11), // "setDefault2"
QT_MOC_LITERAL(88, 11), // "setDefault3"
QT_MOC_LITERAL(100, 11), // "setDefault4"
QT_MOC_LITERAL(112, 11), // "setDefault5"
QT_MOC_LITERAL(124, 11), // "setDefault6"
QT_MOC_LITERAL(136, 4), // "undo"
QT_MOC_LITERAL(141, 11), // "updateStops"
QT_MOC_LITERAL(153, 14), // "updateColormap"
QT_MOC_LITERAL(168, 4), // "load"
QT_MOC_LITERAL(173, 4), // "save"
QT_MOC_LITERAL(178, 12) // "applyToImage"

    },
    "V3dr_colormapDialog\0linkTo\0\0QWidget*\0"
    "w\0setDefault\0k\0setDefault0\0setDefault1\0"
    "setDefault2\0setDefault3\0setDefault4\0"
    "setDefault5\0setDefault6\0undo\0updateStops\0"
    "updateColormap\0load\0save\0applyToImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_V3dr_colormapDialog[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  104,    2, 0x0a,    0 /* Public */,
       5,    1,  107,    2, 0x0a,    2 /* Public */,
       7,    0,  110,    2, 0x0a,    4 /* Public */,
       8,    0,  111,    2, 0x0a,    5 /* Public */,
       9,    0,  112,    2, 0x0a,    6 /* Public */,
      10,    0,  113,    2, 0x0a,    7 /* Public */,
      11,    0,  114,    2, 0x0a,    8 /* Public */,
      12,    0,  115,    2, 0x0a,    9 /* Public */,
      13,    0,  116,    2, 0x0a,   10 /* Public */,
      14,    0,  117,    2, 0x0a,   11 /* Public */,
      15,    0,  118,    2, 0x0a,   12 /* Public */,
      16,    0,  119,    2, 0x0a,   13 /* Public */,
      17,    0,  120,    2, 0x0a,   14 /* Public */,
      18,    0,  121,    2, 0x0a,   15 /* Public */,
      19,    0,  122,    2, 0x0a,   16 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void V3dr_colormapDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<V3dr_colormapDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->linkTo((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->setDefault((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setDefault0(); break;
        case 3: _t->setDefault1(); break;
        case 4: _t->setDefault2(); break;
        case 5: _t->setDefault3(); break;
        case 6: _t->setDefault4(); break;
        case 7: _t->setDefault5(); break;
        case 8: _t->setDefault6(); break;
        case 9: _t->undo(); break;
        case 10: _t->updateStops(); break;
        case 11: _t->updateColormap(); break;
        case 12: _t->load(); break;
        case 13: _t->save(); break;
        case 14: _t->applyToImage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject V3dr_colormapDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<SharedToolDialog::staticMetaObject>(),
    qt_meta_stringdata_V3dr_colormapDialog.offsetsAndSize,
    qt_meta_data_V3dr_colormapDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_V3dr_colormapDialog_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *V3dr_colormapDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *V3dr_colormapDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_V3dr_colormapDialog.stringdata0))
        return static_cast<void*>(this);
    return SharedToolDialog::qt_metacast(_clname);
}

int V3dr_colormapDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SharedToolDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
