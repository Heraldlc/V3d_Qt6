/****************************************************************************
** Meta object code from reading C++ file 'v3d_version_info.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../v3d_version_info.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'v3d_version_info.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_v3d__UpdateItem_t {
    const uint offsetsAndSize[20];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_v3d__UpdateItem_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_v3d__UpdateItem_t qt_meta_stringdata_v3d__UpdateItem = {
    {
QT_MOC_LITERAL(0, 15), // "v3d::UpdateItem"
QT_MOC_LITERAL(16, 14), // "updateComplete"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 30), // "v3d::DownloadingUpdatesDialog*"
QT_MOC_LITERAL(63, 9), // "succeeded"
QT_MOC_LITERAL(73, 10), // "setInstall"
QT_MOC_LITERAL(84, 5), // "state"
QT_MOC_LITERAL(90, 11), // "startUpdate"
QT_MOC_LITERAL(102, 20), // "finishedDownloadSlot"
QT_MOC_LITERAL(123, 14) // "QNetworkReply*"

    },
    "v3d::UpdateItem\0updateComplete\0\0"
    "v3d::DownloadingUpdatesDialog*\0succeeded\0"
    "setInstall\0state\0startUpdate\0"
    "finishedDownloadSlot\0QNetworkReply*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_v3d__UpdateItem[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   38,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   43,    2, 0x0a,    3 /* Public */,
       7,    1,   46,    2, 0x0a,    5 /* Public */,
       8,    1,   49,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    2,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 9,    2,

       0        // eod
};

void v3d::UpdateItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UpdateItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateComplete((*reinterpret_cast< v3d::DownloadingUpdatesDialog*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->setInstall((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->startUpdate((*reinterpret_cast< v3d::DownloadingUpdatesDialog*(*)>(_a[1]))); break;
        case 3: _t->finishedDownloadSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< v3d::DownloadingUpdatesDialog* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< v3d::DownloadingUpdatesDialog* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UpdateItem::*)(v3d::DownloadingUpdatesDialog * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdateItem::updateComplete)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject v3d::UpdateItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_v3d__UpdateItem.offsetsAndSize,
    qt_meta_data_v3d__UpdateItem,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_v3d__UpdateItem_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<v3d::DownloadingUpdatesDialog *, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<v3d::DownloadingUpdatesDialog *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>


>,
    nullptr
} };


const QMetaObject *v3d::UpdateItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *v3d::UpdateItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_v3d__UpdateItem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int v3d::UpdateItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void v3d::UpdateItem::updateComplete(v3d::DownloadingUpdatesDialog * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_v3d__V3DVersionChecker_t {
    const uint offsetsAndSize[22];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_v3d__V3DVersionChecker_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_v3d__V3DVersionChecker_t qt_meta_stringdata_v3d__V3DVersionChecker = {
    {
QT_MOC_LITERAL(0, 22), // "v3d::V3DVersionChecker"
QT_MOC_LITERAL(23, 16), // "createVersionXml"
QT_MOC_LITERAL(40, 0), // ""
QT_MOC_LITERAL(41, 10), // "gotVersion"
QT_MOC_LITERAL(52, 14), // "QNetworkReply*"
QT_MOC_LITERAL(67, 5), // "reply"
QT_MOC_LITERAL(73, 16), // "show_update_list"
QT_MOC_LITERAL(90, 15), // "install_updates"
QT_MOC_LITERAL(106, 13), // "finishUpdates"
QT_MOC_LITERAL(120, 30), // "v3d::DownloadingUpdatesDialog*"
QT_MOC_LITERAL(151, 14) // "progressDialog"

    },
    "v3d::V3DVersionChecker\0createVersionXml\0"
    "\0gotVersion\0QNetworkReply*\0reply\0"
    "show_update_list\0install_updates\0"
    "finishUpdates\0v3d::DownloadingUpdatesDialog*\0"
    "progressDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_v3d__V3DVersionChecker[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x0a,    0 /* Public */,
       3,    1,   45,    2, 0x08,    1 /* Private */,
       6,    0,   48,    2, 0x08,    3 /* Private */,
       7,    0,   49,    2, 0x08,    4 /* Private */,
       8,    1,   50,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void v3d::V3DVersionChecker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<V3DVersionChecker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->createVersionXml(); break;
        case 1: _t->gotVersion((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->show_update_list(); break;
        case 3: _t->install_updates(); break;
        case 4: _t->finishUpdates((*reinterpret_cast< v3d::DownloadingUpdatesDialog*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< v3d::DownloadingUpdatesDialog* >(); break;
            }
            break;
        }
    }
}

const QMetaObject v3d::V3DVersionChecker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_v3d__V3DVersionChecker.offsetsAndSize,
    qt_meta_data_v3d__V3DVersionChecker,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_v3d__V3DVersionChecker_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<v3d::DownloadingUpdatesDialog *, std::false_type>


>,
    nullptr
} };


const QMetaObject *v3d::V3DVersionChecker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *v3d::V3DVersionChecker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_v3d__V3DVersionChecker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int v3d::V3DVersionChecker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_v3d__VersionUrlValidator_t {
    const uint offsetsAndSize[2];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_v3d__VersionUrlValidator_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_v3d__VersionUrlValidator_t qt_meta_stringdata_v3d__VersionUrlValidator = {
    {
QT_MOC_LITERAL(0, 24) // "v3d::VersionUrlValidator"

    },
    "v3d::VersionUrlValidator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_v3d__VersionUrlValidator[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void v3d::VersionUrlValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject v3d::VersionUrlValidator::staticMetaObject = { {
    QMetaObject::SuperData::link<QValidator::staticMetaObject>(),
    qt_meta_stringdata_v3d__VersionUrlValidator.offsetsAndSize,
    qt_meta_data_v3d__VersionUrlValidator,
    qt_static_metacall,
    nullptr,
    nullptr,
    nullptr
} };


const QMetaObject *v3d::VersionUrlValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *v3d::VersionUrlValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_v3d__VersionUrlValidator.stringdata0))
        return static_cast<void*>(this);
    return QValidator::qt_metacast(_clname);
}

int v3d::VersionUrlValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QValidator::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_v3d__CheckForUpdatesDialog_t {
    const uint offsetsAndSize[10];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_v3d__CheckForUpdatesDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_v3d__CheckForUpdatesDialog_t qt_meta_stringdata_v3d__CheckForUpdatesDialog = {
    {
QT_MOC_LITERAL(0, 26), // "v3d::CheckForUpdatesDialog"
QT_MOC_LITERAL(27, 10), // "yes_update"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 9), // "check_now"
QT_MOC_LITERAL(49, 12) // "show_options"

    },
    "v3d::CheckForUpdatesDialog\0yes_update\0"
    "\0check_now\0show_options"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_v3d__CheckForUpdatesDialog[] = {

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
       1,    0,   32,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   33,    2, 0x08,    1 /* Private */,
       4,    0,   34,    2, 0x08,    2 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void v3d::CheckForUpdatesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CheckForUpdatesDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->yes_update(); break;
        case 1: _t->check_now(); break;
        case 2: _t->show_options(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CheckForUpdatesDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CheckForUpdatesDialog::yes_update)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject v3d::CheckForUpdatesDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_v3d__CheckForUpdatesDialog.offsetsAndSize,
    qt_meta_data_v3d__CheckForUpdatesDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_v3d__CheckForUpdatesDialog_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *v3d::CheckForUpdatesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *v3d::CheckForUpdatesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_v3d__CheckForUpdatesDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::dialog_update_v3d"))
        return static_cast< Ui::dialog_update_v3d*>(this);
    return QDialog::qt_metacast(_clname);
}

int v3d::CheckForUpdatesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void v3d::CheckForUpdatesDialog::yes_update()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_v3d__UpdatesListDialog_t {
    const uint offsetsAndSize[6];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_v3d__UpdatesListDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_v3d__UpdatesListDialog_t qt_meta_stringdata_v3d__UpdatesListDialog = {
    {
QT_MOC_LITERAL(0, 22), // "v3d::UpdatesListDialog"
QT_MOC_LITERAL(23, 14), // "update_install"
QT_MOC_LITERAL(38, 0) // ""

    },
    "v3d::UpdatesListDialog\0update_install\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_v3d__UpdatesListDialog[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    0 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void v3d::UpdatesListDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UpdatesListDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->update_install(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UpdatesListDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdatesListDialog::update_install)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject v3d::UpdatesListDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_v3d__UpdatesListDialog.offsetsAndSize,
    qt_meta_data_v3d__UpdatesListDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_v3d__UpdatesListDialog_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>



>,
    nullptr
} };


const QMetaObject *v3d::UpdatesListDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *v3d::UpdatesListDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_v3d__UpdatesListDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::dialog_update_list"))
        return static_cast< Ui::dialog_update_list*>(this);
    return QDialog::qt_metacast(_clname);
}

int v3d::UpdatesListDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void v3d::UpdatesListDialog::update_install()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_v3d__UpdateOptionsDialog_t {
    const uint offsetsAndSize[16];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_v3d__UpdateOptionsDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_v3d__UpdateOptionsDialog_t qt_meta_stringdata_v3d__UpdateOptionsDialog = {
    {
QT_MOC_LITERAL(0, 24), // "v3d::UpdateOptionsDialog"
QT_MOC_LITERAL(25, 13), // "save_xml_file"
QT_MOC_LITERAL(39, 0), // ""
QT_MOC_LITERAL(40, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(72, 15), // "updateFrequency"
QT_MOC_LITERAL(88, 27), // "on_lineEdit_editingFinished"
QT_MOC_LITERAL(116, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(140, 24) // "use_default_version_file"

    },
    "v3d::UpdateOptionsDialog\0save_xml_file\0"
    "\0on_comboBox_currentIndexChanged\0"
    "updateFrequency\0on_lineEdit_editingFinished\0"
    "on_lineEdit_textChanged\0"
    "use_default_version_file"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_v3d__UpdateOptionsDialog[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    0 /* Private */,
       3,    1,   45,    2, 0x08,    1 /* Private */,
       5,    0,   48,    2, 0x08,    3 /* Private */,
       6,    0,   49,    2, 0x08,    4 /* Private */,
       7,    0,   50,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void v3d::UpdateOptionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UpdateOptionsDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->save_xml_file(); break;
        case 1: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_lineEdit_editingFinished(); break;
        case 3: _t->on_lineEdit_textChanged(); break;
        case 4: _t->use_default_version_file(); break;
        default: ;
        }
    }
}

const QMetaObject v3d::UpdateOptionsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_v3d__UpdateOptionsDialog.offsetsAndSize,
    qt_meta_data_v3d__UpdateOptionsDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_v3d__UpdateOptionsDialog_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *v3d::UpdateOptionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *v3d::UpdateOptionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_v3d__UpdateOptionsDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::dialog_update_options"))
        return static_cast< Ui::dialog_update_options*>(this);
    return QDialog::qt_metacast(_clname);
}

int v3d::UpdateOptionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_v3d__CheckingForUpdatesDialog_t {
    const uint offsetsAndSize[6];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_v3d__CheckingForUpdatesDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_v3d__CheckingForUpdatesDialog_t qt_meta_stringdata_v3d__CheckingForUpdatesDialog = {
    {
QT_MOC_LITERAL(0, 29), // "v3d::CheckingForUpdatesDialog"
QT_MOC_LITERAL(30, 8), // "canceled"
QT_MOC_LITERAL(39, 0) // ""

    },
    "v3d::CheckingForUpdatesDialog\0canceled\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_v3d__CheckingForUpdatesDialog[] = {

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

void v3d::CheckingForUpdatesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CheckingForUpdatesDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->canceled(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject v3d::CheckingForUpdatesDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_v3d__CheckingForUpdatesDialog.offsetsAndSize,
    qt_meta_data_v3d__CheckingForUpdatesDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_v3d__CheckingForUpdatesDialog_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *v3d::CheckingForUpdatesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *v3d::CheckingForUpdatesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_v3d__CheckingForUpdatesDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::checking_for_updates_dialog"))
        return static_cast< Ui::checking_for_updates_dialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int v3d::CheckingForUpdatesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_v3d__UpdatesAvailableDialog_t {
    const uint offsetsAndSize[10];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_v3d__UpdatesAvailableDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_v3d__UpdatesAvailableDialog_t qt_meta_stringdata_v3d__UpdatesAvailableDialog = {
    {
QT_MOC_LITERAL(0, 27), // "v3d::UpdatesAvailableDialog"
QT_MOC_LITERAL(28, 10), // "yes_update"
QT_MOC_LITERAL(39, 0), // ""
QT_MOC_LITERAL(40, 12), // "never_update"
QT_MOC_LITERAL(53, 15) // "remind_me_later"

    },
    "v3d::UpdatesAvailableDialog\0yes_update\0"
    "\0never_update\0remind_me_later"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_v3d__UpdatesAvailableDialog[] = {

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
       1,    0,   32,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   33,    2, 0x08,    1 /* Private */,
       4,    0,   34,    2, 0x08,    2 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void v3d::UpdatesAvailableDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UpdatesAvailableDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->yes_update(); break;
        case 1: _t->never_update(); break;
        case 2: _t->remind_me_later(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UpdatesAvailableDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdatesAvailableDialog::yes_update)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject v3d::UpdatesAvailableDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QMessageBox::staticMetaObject>(),
    qt_meta_stringdata_v3d__UpdatesAvailableDialog.offsetsAndSize,
    qt_meta_data_v3d__UpdatesAvailableDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_v3d__UpdatesAvailableDialog_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *v3d::UpdatesAvailableDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *v3d::UpdatesAvailableDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_v3d__UpdatesAvailableDialog.stringdata0))
        return static_cast<void*>(this);
    return QMessageBox::qt_metacast(_clname);
}

int v3d::UpdatesAvailableDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMessageBox::qt_metacall(_c, _id, _a);
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
void v3d::UpdatesAvailableDialog::yes_update()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_v3d__DownloadingUpdatesDialog_t {
    const uint offsetsAndSize[6];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_v3d__DownloadingUpdatesDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_v3d__DownloadingUpdatesDialog_t qt_meta_stringdata_v3d__DownloadingUpdatesDialog = {
    {
QT_MOC_LITERAL(0, 29), // "v3d::DownloadingUpdatesDialog"
QT_MOC_LITERAL(30, 8), // "canceled"
QT_MOC_LITERAL(39, 0) // ""

    },
    "v3d::DownloadingUpdatesDialog\0canceled\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_v3d__DownloadingUpdatesDialog[] = {

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

void v3d::DownloadingUpdatesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DownloadingUpdatesDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->canceled(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject v3d::DownloadingUpdatesDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_v3d__DownloadingUpdatesDialog.offsetsAndSize,
    qt_meta_data_v3d__DownloadingUpdatesDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_v3d__DownloadingUpdatesDialog_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *v3d::DownloadingUpdatesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *v3d::DownloadingUpdatesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_v3d__DownloadingUpdatesDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::downloading_updates_dialog"))
        return static_cast< Ui::downloading_updates_dialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int v3d::DownloadingUpdatesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
