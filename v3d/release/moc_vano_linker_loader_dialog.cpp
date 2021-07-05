/****************************************************************************
** Meta object code from reading C++ file 'vano_linker_loader_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../vano_linker_loader_dialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vano_linker_loader_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VANO_LinkerLoadDialog_t {
    const uint offsetsAndSize[18];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_VANO_LinkerLoadDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_VANO_LinkerLoadDialog_t qt_meta_stringdata_VANO_LinkerLoadDialog = {
    {
QT_MOC_LITERAL(0, 21), // "VANO_LinkerLoadDialog"
QT_MOC_LITERAL(22, 14), // "select_rawfile"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 15), // "select_maskfile"
QT_MOC_LITERAL(54, 14), // "select_apofile"
QT_MOC_LITERAL(69, 14), // "change_rawfile"
QT_MOC_LITERAL(84, 1), // "s"
QT_MOC_LITERAL(86, 15), // "change_maskfile"
QT_MOC_LITERAL(102, 14) // "change_apofile"

    },
    "VANO_LinkerLoadDialog\0select_rawfile\0"
    "\0select_maskfile\0select_apofile\0"
    "change_rawfile\0s\0change_maskfile\0"
    "change_apofile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VANO_LinkerLoadDialog[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x0a,    0 /* Public */,
       3,    0,   51,    2, 0x0a,    1 /* Public */,
       4,    0,   52,    2, 0x0a,    2 /* Public */,
       5,    1,   53,    2, 0x0a,    3 /* Public */,
       7,    1,   56,    2, 0x0a,    5 /* Public */,
       8,    1,   59,    2, 0x0a,    7 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void VANO_LinkerLoadDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VANO_LinkerLoadDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->select_rawfile(); break;
        case 1: _t->select_maskfile(); break;
        case 2: _t->select_apofile(); break;
        case 3: _t->change_rawfile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->change_maskfile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->change_apofile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject VANO_LinkerLoadDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_VANO_LinkerLoadDialog.offsetsAndSize,
    qt_meta_data_VANO_LinkerLoadDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_VANO_LinkerLoadDialog_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *VANO_LinkerLoadDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VANO_LinkerLoadDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VANO_LinkerLoadDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int VANO_LinkerLoadDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
