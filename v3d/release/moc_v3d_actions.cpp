/****************************************************************************
** Meta object code from reading C++ file 'v3d_actions.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../v3d_actions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'v3d_actions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_v3d__BrowseToWebPageAction_t {
    const uint offsetsAndSize[8];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_v3d__BrowseToWebPageAction_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_v3d__BrowseToWebPageAction_t qt_meta_stringdata_v3d__BrowseToWebPageAction = {
    {
QT_MOC_LITERAL(0, 26), // "v3d::BrowseToWebPageAction"
QT_MOC_LITERAL(27, 16), // "page_open_failed"
QT_MOC_LITERAL(44, 0), // ""
QT_MOC_LITERAL(45, 11) // "openWebPage"

    },
    "v3d::BrowseToWebPageAction\0page_open_failed\0"
    "\0openWebPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_v3d__BrowseToWebPageAction[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   27,    2, 0x08,    1 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void v3d::BrowseToWebPageAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BrowseToWebPageAction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->page_open_failed(); break;
        case 1: _t->openWebPage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BrowseToWebPageAction::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowseToWebPageAction::page_open_failed)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject v3d::BrowseToWebPageAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QAction::staticMetaObject>(),
    qt_meta_stringdata_v3d__BrowseToWebPageAction.offsetsAndSize,
    qt_meta_data_v3d__BrowseToWebPageAction,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_v3d__BrowseToWebPageAction_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *v3d::BrowseToWebPageAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *v3d::BrowseToWebPageAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_v3d__BrowseToWebPageAction.stringdata0))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int v3d::BrowseToWebPageAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void v3d::BrowseToWebPageAction::page_open_failed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_v3d__ShowV3dAboutDialogAction_t {
    const uint offsetsAndSize[6];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_v3d__ShowV3dAboutDialogAction_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_v3d__ShowV3dAboutDialogAction_t qt_meta_stringdata_v3d__ShowV3dAboutDialogAction = {
    {
QT_MOC_LITERAL(0, 29), // "v3d::ShowV3dAboutDialogAction"
QT_MOC_LITERAL(30, 11), // "show_dialog"
QT_MOC_LITERAL(42, 0) // ""

    },
    "v3d::ShowV3dAboutDialogAction\0show_dialog\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_v3d__ShowV3dAboutDialogAction[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x08,    0 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void v3d::ShowV3dAboutDialogAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShowV3dAboutDialogAction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->show_dialog(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject v3d::ShowV3dAboutDialogAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QAction::staticMetaObject>(),
    qt_meta_stringdata_v3d__ShowV3dAboutDialogAction.offsetsAndSize,
    qt_meta_data_v3d__ShowV3dAboutDialogAction,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_v3d__ShowV3dAboutDialogAction_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *v3d::ShowV3dAboutDialogAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *v3d::ShowV3dAboutDialogAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_v3d__ShowV3dAboutDialogAction.stringdata0))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int v3d::ShowV3dAboutDialogAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
