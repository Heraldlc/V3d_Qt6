/****************************************************************************
** Meta object code from reading C++ file 'v3d_core.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../v3d_core.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'v3d_core.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyTextBrowser_t {
    const uint offsetsAndSize[6];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MyTextBrowser_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MyTextBrowser_t qt_meta_stringdata_MyTextBrowser = {
    {
QT_MOC_LITERAL(0, 13), // "MyTextBrowser"
QT_MOC_LITERAL(14, 31), // "setText2FocusPointFeatureWidget"
QT_MOC_LITERAL(46, 0) // ""

    },
    "MyTextBrowser\0setText2FocusPointFeatureWidget\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyTextBrowser[] = {

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
       1,    0,   20,    2, 0x0a,    0 /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void MyTextBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyTextBrowser *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setText2FocusPointFeatureWidget(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject MyTextBrowser::staticMetaObject = { {
    QMetaObject::SuperData::link<QTextBrowser::staticMetaObject>(),
    qt_meta_stringdata_MyTextBrowser.offsetsAndSize,
    qt_meta_data_MyTextBrowser,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MyTextBrowser_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MyTextBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyTextBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyTextBrowser.stringdata0))
        return static_cast<void*>(this);
    return QTextBrowser::qt_metacast(_clname);
}

int MyTextBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextBrowser::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_My4DImage_t {
    const uint offsetsAndSize[10];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_My4DImage_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_My4DImage_t qt_meta_stringdata_My4DImage = {
    {
QT_MOC_LITERAL(0, 9), // "My4DImage"
QT_MOC_LITERAL(10, 27), // "focusFeatureViewTextUpdated"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 27), // "signal_trace_history_append"
QT_MOC_LITERAL(67, 31) // "setText2FocusPointFeatureWidget"

    },
    "My4DImage\0focusFeatureViewTextUpdated\0"
    "\0signal_trace_history_append\0"
    "setText2FocusPointFeatureWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_My4DImage[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    0 /* Public */,
       3,    0,   33,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   34,    2, 0x0a,    2 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void My4DImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<My4DImage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->focusFeatureViewTextUpdated(); break;
        case 1: _t->signal_trace_history_append(); break;
        case 2: _t->setText2FocusPointFeatureWidget(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (My4DImage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&My4DImage::focusFeatureViewTextUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (My4DImage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&My4DImage::signal_trace_history_append)) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject My4DImage::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_My4DImage.offsetsAndSize,
    qt_meta_data_My4DImage,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_My4DImage_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *My4DImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *My4DImage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_My4DImage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Image4DSimple"))
        return static_cast< Image4DSimple*>(this);
    return QObject::qt_metacast(_clname);
}

int My4DImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void My4DImage::focusFeatureViewTextUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void My4DImage::signal_trace_history_append()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_XFormView_t {
    const uint offsetsAndSize[50];
    char stringdata0[279];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_XFormView_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_XFormView_t qt_meta_stringdata_XFormView = {
    {
QT_MOC_LITERAL(0, 9), // "XFormView"
QT_MOC_LITERAL(10, 12), // "colorChanged"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 17), // "colorChangedGlass"
QT_MOC_LITERAL(42, 12), // "scaleChanged"
QT_MOC_LITERAL(55, 5), // "scale"
QT_MOC_LITERAL(61, 13), // "focusXChanged"
QT_MOC_LITERAL(75, 5), // "x_new"
QT_MOC_LITERAL(81, 13), // "focusYChanged"
QT_MOC_LITERAL(95, 5), // "y_new"
QT_MOC_LITERAL(101, 13), // "focusZChanged"
QT_MOC_LITERAL(115, 5), // "z_new"
QT_MOC_LITERAL(121, 9), // "setPixmap"
QT_MOC_LITERAL(131, 3), // "pxm"
QT_MOC_LITERAL(135, 6), // "bGlass"
QT_MOC_LITERAL(142, 15), // "updateViewPlane"
QT_MOC_LITERAL(158, 11), // "changeScale"
QT_MOC_LITERAL(170, 16), // "changeFocusPlane"
QT_MOC_LITERAL(187, 1), // "c"
QT_MOC_LITERAL(189, 15), // "changeColorType"
QT_MOC_LITERAL(205, 21), // "ImageDisplayColorType"
QT_MOC_LITERAL(227, 13), // "setPixmapType"
QT_MOC_LITERAL(241, 5), // "reset"
QT_MOC_LITERAL(247, 26), // "popupImageProcessingDialog"
QT_MOC_LITERAL(274, 4) // "item"

    },
    "XFormView\0colorChanged\0\0colorChangedGlass\0"
    "scaleChanged\0scale\0focusXChanged\0x_new\0"
    "focusYChanged\0y_new\0focusZChanged\0"
    "z_new\0setPixmap\0pxm\0bGlass\0updateViewPlane\0"
    "changeScale\0changeFocusPlane\0c\0"
    "changeColorType\0ImageDisplayColorType\0"
    "setPixmapType\0reset\0popupImageProcessingDialog\0"
    "item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XFormView[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       1,  154, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  110,    2, 0x06,    1 /* Public */,
       3,    1,  113,    2, 0x06,    3 /* Public */,
       4,    1,  116,    2, 0x06,    5 /* Public */,
       6,    1,  119,    2, 0x06,    7 /* Public */,
       8,    1,  122,    2, 0x06,    9 /* Public */,
      10,    1,  125,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    2,  128,    2, 0x0a,   13 /* Public */,
      15,    0,  133,    2, 0x0a,   16 /* Public */,
      16,    1,  134,    2, 0x0a,   17 /* Public */,
      17,    1,  137,    2, 0x0a,   19 /* Public */,
      19,    2,  140,    2, 0x0a,   21 /* Public */,
      19,    1,  145,    2, 0x2a,   24 /* Public | MethodCloned */,
      21,    0,  148,    2, 0x0a,   26 /* Public */,
      22,    0,  149,    2, 0x0a,   27 /* Public */,
      23,    0,  150,    2, 0x0a,   28 /* Public */,
      23,    1,  151,    2, 0x0a,   29 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::QPixmap, QMetaType::Bool,   13,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, 0x80000000 | 20, QMetaType::Bool,   18,   14,
    QMetaType::Void, 0x80000000 | 20,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,

 // properties: name, type, flags
       5, QMetaType::Double, 0x00015003, uint(-1), 0,

       0        // eod
};

void XFormView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XFormView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->colorChangedGlass((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->scaleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->focusXChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->focusYChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->focusZChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->updateViewPlane(); break;
        case 8: _t->changeScale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->changeFocusPlane((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->changeColorType((*reinterpret_cast< ImageDisplayColorType(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->changeColorType((*reinterpret_cast< ImageDisplayColorType(*)>(_a[1]))); break;
        case 12: _t->setPixmapType(); break;
        case 13: _t->reset(); break;
        case 14: _t->popupImageProcessingDialog(); break;
        case 15: _t->popupImageProcessingDialog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (XFormView::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XFormView::colorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (XFormView::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XFormView::colorChangedGlass)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (XFormView::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XFormView::scaleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (XFormView::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XFormView::focusXChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (XFormView::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XFormView::focusYChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (XFormView::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XFormView::focusZChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<XFormView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->scale(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<XFormView *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->changeScale(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject XFormView::staticMetaObject = { {
    QMetaObject::SuperData::link<ArthurFrame::staticMetaObject>(),
    qt_meta_stringdata_XFormView.offsetsAndSize,
    qt_meta_data_XFormView,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_XFormView_t
, QtPrivate::TypeAndForceComplete<double, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPixmap &, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ImageDisplayColorType, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ImageDisplayColorType, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *XFormView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XFormView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XFormView.stringdata0))
        return static_cast<void*>(this);
    return ArthurFrame::qt_metacast(_clname);
}

int XFormView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ArthurFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void XFormView::colorChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XFormView::colorChangedGlass(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void XFormView::scaleChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void XFormView::focusXChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void XFormView::focusYChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void XFormView::focusZChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
