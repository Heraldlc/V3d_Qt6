/****************************************************************************
** Meta object code from reading C++ file 'gradients.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../3drenderer/gradients.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gradients.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ShadeWidget_t {
    const uint offsetsAndSize[12];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ShadeWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ShadeWidget_t qt_meta_stringdata_ShadeWidget = {
    {
QT_MOC_LITERAL(0, 11), // "ShadeWidget"
QT_MOC_LITERAL(12, 13), // "colorsChanged"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 4), // "type"
QT_MOC_LITERAL(32, 12), // "changeColors"
QT_MOC_LITERAL(45, 3) // "pts"

    },
    "ShadeWidget\0colorsChanged\0\0type\0"
    "changeColors\0pts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShadeWidget[] = {

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
       1,    2,   26,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   31,    2, 0x0a,    3 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QPolygonF,    3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QPolygonF,    5,

       0        // eod
};

void ShadeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShadeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->colorsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QPolygonF(*)>(_a[2]))); break;
        case 1: _t->changeColors((*reinterpret_cast< const QPolygonF(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ShadeWidget::*)(int , const QPolygonF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShadeWidget::colorsChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ShadeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ShadeWidget.offsetsAndSize,
    qt_meta_data_ShadeWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ShadeWidget_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<const QPolygonF &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPolygonF &, std::false_type>


>,
    nullptr
} };


const QMetaObject *ShadeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShadeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShadeWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ShadeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void ShadeWidget::colorsChanged(int _t1, const QPolygonF & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GradientEditor_t {
    const uint offsetsAndSize[14];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_GradientEditor_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_GradientEditor_t qt_meta_stringdata_GradientEditor = {
    {
QT_MOC_LITERAL(0, 14), // "GradientEditor"
QT_MOC_LITERAL(15, 20), // "gradientStopsChanged"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 14), // "QGradientStops"
QT_MOC_LITERAL(52, 13), // "pointsUpdated"
QT_MOC_LITERAL(66, 4), // "type"
QT_MOC_LITERAL(71, 16) // "updateAlphaStops"

    },
    "GradientEditor\0gradientStopsChanged\0"
    "\0QGradientStops\0pointsUpdated\0type\0"
    "updateAlphaStops"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GradientEditor[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    2,   35,    2, 0x0a,    2 /* Public */,
       6,    0,   40,    2, 0x0a,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QPolygonF,    5,    2,
    0x80000000 | 3,

       0        // eod
};

void GradientEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GradientEditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->gradientStopsChanged((*reinterpret_cast< const QGradientStops(*)>(_a[1]))); break;
        case 1: _t->pointsUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QPolygonF(*)>(_a[2]))); break;
        case 2: { QGradientStops _r = _t->updateAlphaStops();
            if (_a[0]) *reinterpret_cast< QGradientStops*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GradientEditor::*)(const QGradientStops & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GradientEditor::gradientStopsChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject GradientEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GradientEditor.offsetsAndSize,
    qt_meta_data_GradientEditor,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_GradientEditor_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QGradientStops &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<const QPolygonF &, std::false_type>, QtPrivate::TypeAndForceComplete<QGradientStops, std::false_type>


>,
    nullptr
} };


const QMetaObject *GradientEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GradientEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GradientEditor.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GradientEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void GradientEditor::gradientStopsChanged(const QGradientStops & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GradientRenderer_t {
    const uint offsetsAndSize[22];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_GradientRenderer_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_GradientRenderer_t qt_meta_stringdata_GradientRenderer = {
    {
QT_MOC_LITERAL(0, 16), // "GradientRenderer"
QT_MOC_LITERAL(17, 16), // "setGradientStops"
QT_MOC_LITERAL(34, 0), // ""
QT_MOC_LITERAL(35, 14), // "QGradientStops"
QT_MOC_LITERAL(50, 5), // "stops"
QT_MOC_LITERAL(56, 12), // "setPadSpread"
QT_MOC_LITERAL(69, 15), // "setRepeatSpread"
QT_MOC_LITERAL(85, 16), // "setReflectSpread"
QT_MOC_LITERAL(102, 17), // "setLinearGradient"
QT_MOC_LITERAL(120, 17), // "setRadialGradient"
QT_MOC_LITERAL(138, 18) // "setConicalGradient"

    },
    "GradientRenderer\0setGradientStops\0\0"
    "QGradientStops\0stops\0setPadSpread\0"
    "setRepeatSpread\0setReflectSpread\0"
    "setLinearGradient\0setRadialGradient\0"
    "setConicalGradient"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GradientRenderer[] = {

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
       1,    1,   56,    2, 0x0a,    0 /* Public */,
       5,    0,   59,    2, 0x0a,    2 /* Public */,
       6,    0,   60,    2, 0x0a,    3 /* Public */,
       7,    0,   61,    2, 0x0a,    4 /* Public */,
       8,    0,   62,    2, 0x0a,    5 /* Public */,
       9,    0,   63,    2, 0x0a,    6 /* Public */,
      10,    0,   64,    2, 0x0a,    7 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GradientRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GradientRenderer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setGradientStops((*reinterpret_cast< const QGradientStops(*)>(_a[1]))); break;
        case 1: _t->setPadSpread(); break;
        case 2: _t->setRepeatSpread(); break;
        case 3: _t->setReflectSpread(); break;
        case 4: _t->setLinearGradient(); break;
        case 5: _t->setRadialGradient(); break;
        case 6: _t->setConicalGradient(); break;
        default: ;
        }
    }
}

const QMetaObject GradientRenderer::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GradientRenderer.offsetsAndSize,
    qt_meta_data_GradientRenderer,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_GradientRenderer_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QGradientStops &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *GradientRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GradientRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GradientRenderer.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GradientRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_GradientWidget_t {
    const uint offsetsAndSize[12];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_GradientWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_GradientWidget_t qt_meta_stringdata_GradientWidget = {
    {
QT_MOC_LITERAL(0, 14), // "GradientWidget"
QT_MOC_LITERAL(15, 11), // "setDefault1"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 11), // "setDefault2"
QT_MOC_LITERAL(40, 11), // "setDefault3"
QT_MOC_LITERAL(52, 11) // "setDefault4"

    },
    "GradientWidget\0setDefault1\0\0setDefault2\0"
    "setDefault3\0setDefault4"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GradientWidget[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x0a,    0 /* Public */,
       3,    0,   39,    2, 0x0a,    1 /* Public */,
       4,    0,   40,    2, 0x0a,    2 /* Public */,
       5,    0,   41,    2, 0x0a,    3 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GradientWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GradientWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setDefault1(); break;
        case 1: _t->setDefault2(); break;
        case 2: _t->setDefault3(); break;
        case 3: _t->setDefault4(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject GradientWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GradientWidget.offsetsAndSize,
    qt_meta_data_GradientWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_GradientWidget_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *GradientWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GradientWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GradientWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GradientWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
