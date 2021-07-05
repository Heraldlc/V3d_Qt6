/****************************************************************************
** Meta object code from reading C++ file 'v3d_plugin_loader.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../plugin_loader/v3d_plugin_loader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'v3d_plugin_loader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_V3d_PluginLoader_t {
    const uint offsetsAndSize[22];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_V3d_PluginLoader_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_V3d_PluginLoader_t qt_meta_stringdata_V3d_PluginLoader = {
    {
QT_MOC_LITERAL(0, 16), // "V3d_PluginLoader"
QT_MOC_LITERAL(17, 13), // "rescanPlugins"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 13), // "populateMenus"
QT_MOC_LITERAL(46, 12), // "aboutPlugins"
QT_MOC_LITERAL(59, 9), // "runPlugin"
QT_MOC_LITERAL(69, 14), // "QPluginLoader*"
QT_MOC_LITERAL(84, 6), // "loader"
QT_MOC_LITERAL(91, 10), // "menuString"
QT_MOC_LITERAL(102, 15), // "runRecentPlugin"
QT_MOC_LITERAL(118, 19) // "clear_recentPlugins"

    },
    "V3d_PluginLoader\0rescanPlugins\0\0"
    "populateMenus\0aboutPlugins\0runPlugin\0"
    "QPluginLoader*\0loader\0menuString\0"
    "runRecentPlugin\0clear_recentPlugins"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_V3d_PluginLoader[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x0a,    0 /* Public */,
       3,    0,   57,    2, 0x0a,    1 /* Public */,
       4,    0,   58,    2, 0x0a,    2 /* Public */,
       5,    0,   59,    2, 0x0a,    3 /* Public */,
       5,    2,   60,    2, 0x0a,    4 /* Public */,
       9,    0,   65,    2, 0x0a,    7 /* Public */,
      10,    0,   66,    2, 0x0a,    8 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void V3d_PluginLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<V3d_PluginLoader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rescanPlugins(); break;
        case 1: _t->populateMenus(); break;
        case 2: _t->aboutPlugins(); break;
        case 3: _t->runPlugin(); break;
        case 4: _t->runPlugin((*reinterpret_cast< QPluginLoader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->runRecentPlugin(); break;
        case 6: _t->clear_recentPlugins(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QPluginLoader* >(); break;
            }
            break;
        }
    }
}

const QMetaObject V3d_PluginLoader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_V3d_PluginLoader.offsetsAndSize,
    qt_meta_data_V3d_PluginLoader,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_V3d_PluginLoader_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPluginLoader *, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *V3d_PluginLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *V3d_PluginLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_V3d_PluginLoader.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "V3DPluginCallback2"))
        return static_cast< V3DPluginCallback2*>(this);
    return QObject::qt_metacast(_clname);
}

int V3d_PluginLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
