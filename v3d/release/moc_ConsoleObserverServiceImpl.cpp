/****************************************************************************
** Meta object code from reading C++ file 'ConsoleObserverServiceImpl.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../webservice/impl/ConsoleObserverServiceImpl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConsoleObserverServiceImpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_obs__ConsoleObserverServiceImpl_t {
    const uint offsetsAndSize[34];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_obs__ConsoleObserverServiceImpl_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_obs__ConsoleObserverServiceImpl_t qt_meta_stringdata_obs__ConsoleObserverServiceImpl = {
    {
QT_MOC_LITERAL(0, 31), // "obs::ConsoleObserverServiceImpl"
QT_MOC_LITERAL(32, 16), // "ontologySelected"
QT_MOC_LITERAL(49, 0), // ""
QT_MOC_LITERAL(50, 6), // "rootId"
QT_MOC_LITERAL(57, 15), // "ontologyChanged"
QT_MOC_LITERAL(73, 14), // "entitySelected"
QT_MOC_LITERAL(88, 8), // "category"
QT_MOC_LITERAL(97, 8), // "uniqueId"
QT_MOC_LITERAL(106, 8), // "clearAll"
QT_MOC_LITERAL(115, 16), // "entityDeselected"
QT_MOC_LITERAL(132, 13), // "entityChanged"
QT_MOC_LITERAL(146, 8), // "entityId"
QT_MOC_LITERAL(155, 19), // "entityViewRequested"
QT_MOC_LITERAL(175, 18), // "annotationsChanged"
QT_MOC_LITERAL(194, 15), // "sessionSelected"
QT_MOC_LITERAL(210, 9), // "sessionId"
QT_MOC_LITERAL(220, 17) // "sessionDeselected"

    },
    "obs::ConsoleObserverServiceImpl\0"
    "ontologySelected\0\0rootId\0ontologyChanged\0"
    "entitySelected\0category\0uniqueId\0"
    "clearAll\0entityDeselected\0entityChanged\0"
    "entityId\0entityViewRequested\0"
    "annotationsChanged\0sessionSelected\0"
    "sessionId\0sessionDeselected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_obs__ConsoleObserverServiceImpl[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    0 /* Public */,
       4,    1,   71,    2, 0x06,    2 /* Public */,
       5,    3,   74,    2, 0x06,    4 /* Public */,
       9,    2,   81,    2, 0x06,    8 /* Public */,
      10,    1,   86,    2, 0x06,   11 /* Public */,
      12,    1,   89,    2, 0x06,   13 /* Public */,
      13,    1,   92,    2, 0x06,   15 /* Public */,
      14,    1,   95,    2, 0x06,   17 /* Public */,
      16,    0,   98,    2, 0x06,   19 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    6,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::LongLong,   11,
    QMetaType::Void, QMetaType::LongLong,   11,
    QMetaType::Void, QMetaType::LongLong,   11,
    QMetaType::Void, QMetaType::LongLong,   15,
    QMetaType::Void,

       0        // eod
};

void obs::ConsoleObserverServiceImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConsoleObserverServiceImpl *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ontologySelected((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: _t->ontologyChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->entitySelected((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->entityDeselected((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->entityChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->entityViewRequested((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->annotationsChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->sessionSelected((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 8: _t->sessionDeselected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConsoleObserverServiceImpl::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConsoleObserverServiceImpl::ontologySelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ConsoleObserverServiceImpl::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConsoleObserverServiceImpl::ontologyChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ConsoleObserverServiceImpl::*)(const QString & , const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConsoleObserverServiceImpl::entitySelected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ConsoleObserverServiceImpl::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConsoleObserverServiceImpl::entityDeselected)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ConsoleObserverServiceImpl::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConsoleObserverServiceImpl::entityChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ConsoleObserverServiceImpl::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConsoleObserverServiceImpl::entityViewRequested)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ConsoleObserverServiceImpl::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConsoleObserverServiceImpl::annotationsChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ConsoleObserverServiceImpl::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConsoleObserverServiceImpl::sessionSelected)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ConsoleObserverServiceImpl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConsoleObserverServiceImpl::sessionDeselected)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject obs::ConsoleObserverServiceImpl::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_obs__ConsoleObserverServiceImpl.offsetsAndSize,
    qt_meta_data_obs__ConsoleObserverServiceImpl,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_obs__ConsoleObserverServiceImpl_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<qint64, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<qint64, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<qint64, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<qint64, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<qint64, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<qint64, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>



>,
    nullptr
} };


const QMetaObject *obs::ConsoleObserverServiceImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *obs::ConsoleObserverServiceImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_obs__ConsoleObserverServiceImpl.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ConsoleObserverService"))
        return static_cast< ConsoleObserverService*>(this);
    return QThread::qt_metacast(_clname);
}

int obs::ConsoleObserverServiceImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void obs::ConsoleObserverServiceImpl::ontologySelected(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void obs::ConsoleObserverServiceImpl::ontologyChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void obs::ConsoleObserverServiceImpl::entitySelected(const QString & _t1, const QString & _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void obs::ConsoleObserverServiceImpl::entityDeselected(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void obs::ConsoleObserverServiceImpl::entityChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void obs::ConsoleObserverServiceImpl::entityViewRequested(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void obs::ConsoleObserverServiceImpl::annotationsChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void obs::ConsoleObserverServiceImpl::sessionSelected(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void obs::ConsoleObserverServiceImpl::sessionDeselected()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
