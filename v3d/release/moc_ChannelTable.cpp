/****************************************************************************
** Meta object code from reading C++ file 'ChannelTable.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ChannelTable.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChannelTable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChannelTabWidget_t {
    const uint offsetsAndSize[22];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ChannelTabWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ChannelTabWidget_t qt_meta_stringdata_ChannelTabWidget = {
    {
QT_MOC_LITERAL(0, 16), // "ChannelTabWidget"
QT_MOC_LITERAL(17, 17), // "updateXFormWidget"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 5), // "plane"
QT_MOC_LITERAL(42, 22), // "linkXFormWidgetChannel"
QT_MOC_LITERAL(65, 14), // "syncOpControls"
QT_MOC_LITERAL(80, 5), // "MixOP"
QT_MOC_LITERAL(86, 5), // "mixop"
QT_MOC_LITERAL(92, 14), // "syncSharedData"
QT_MOC_LITERAL(107, 17), // "ChannelSharedData"
QT_MOC_LITERAL(125, 4) // "data"

    },
    "ChannelTabWidget\0updateXFormWidget\0\0"
    "plane\0linkXFormWidgetChannel\0"
    "syncOpControls\0MixOP\0mixop\0syncSharedData\0"
    "ChannelSharedData\0data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChannelTabWidget[] = {

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
       1,    1,   44,    2, 0x0a,    0 /* Public */,
       1,    0,   47,    2, 0x2a,    2 /* Public | MethodCloned */,
       4,    0,   48,    2, 0x0a,    3 /* Public */,
       5,    1,   49,    2, 0x0a,    4 /* Public */,
       8,    1,   52,    2, 0x0a,    6 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void ChannelTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChannelTabWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateXFormWidget((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateXFormWidget(); break;
        case 2: _t->linkXFormWidgetChannel(); break;
        case 3: _t->syncOpControls((*reinterpret_cast< const MixOP(*)>(_a[1]))); break;
        case 4: _t->syncSharedData((*reinterpret_cast< const ChannelSharedData(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ChannelTabWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTabWidget::staticMetaObject>(),
    qt_meta_stringdata_ChannelTabWidget.offsetsAndSize,
    qt_meta_data_ChannelTabWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ChannelTabWidget_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const MixOP &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const ChannelSharedData &, std::false_type>


>,
    nullptr
} };


const QMetaObject *ChannelTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChannelTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChannelTabWidget.stringdata0))
        return static_cast<void*>(this);
    return QTabWidget::qt_metacast(_clname);
}

int ChannelTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ChannelTable_t {
    const uint offsetsAndSize[64];
    char stringdata0[411];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ChannelTable_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ChannelTable_t qt_meta_stringdata_ChannelTable = {
    {
QT_MOC_LITERAL(0, 12), // "ChannelTable"
QT_MOC_LITERAL(13, 19), // "channelTableChanged"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 17), // "updateXFormWidget"
QT_MOC_LITERAL(52, 5), // "plane"
QT_MOC_LITERAL(58, 22), // "linkXFormWidgetChannel"
QT_MOC_LITERAL(81, 22), // "setChannelColorDefault"
QT_MOC_LITERAL(104, 1), // "N"
QT_MOC_LITERAL(106, 18), // "updateTableChannel"
QT_MOC_LITERAL(125, 11), // "update_luts"
QT_MOC_LITERAL(137, 17), // "setRescaleDefault"
QT_MOC_LITERAL(155, 19), // "updateMixOpControls"
QT_MOC_LITERAL(175, 11), // "begin_batch"
QT_MOC_LITERAL(187, 9), // "end_batch"
QT_MOC_LITERAL(197, 14), // "updatedContent"
QT_MOC_LITERAL(212, 13), // "QTableWidget*"
QT_MOC_LITERAL(226, 1), // "t"
QT_MOC_LITERAL(228, 19), // "pressedClickHandler"
QT_MOC_LITERAL(248, 3), // "row"
QT_MOC_LITERAL(252, 3), // "col"
QT_MOC_LITERAL(256, 18), // "doubleClickHandler"
QT_MOC_LITERAL(275, 11), // "pickChannel"
QT_MOC_LITERAL(287, 11), // "setMixOpMax"
QT_MOC_LITERAL(299, 11), // "setMixOpSum"
QT_MOC_LITERAL(311, 12), // "setMixOpMean"
QT_MOC_LITERAL(324, 11), // "setMixOpOIT"
QT_MOC_LITERAL(336, 13), // "setMixOpIndex"
QT_MOC_LITERAL(350, 13), // "setMixRescale"
QT_MOC_LITERAL(364, 11), // "setMixMaskR"
QT_MOC_LITERAL(376, 11), // "setMixMaskG"
QT_MOC_LITERAL(388, 11), // "setMixMaskB"
QT_MOC_LITERAL(400, 10) // "setDefault"

    },
    "ChannelTable\0channelTableChanged\0\0"
    "updateXFormWidget\0plane\0linkXFormWidgetChannel\0"
    "setChannelColorDefault\0N\0updateTableChannel\0"
    "update_luts\0setRescaleDefault\0"
    "updateMixOpControls\0begin_batch\0"
    "end_batch\0updatedContent\0QTableWidget*\0"
    "t\0pressedClickHandler\0row\0col\0"
    "doubleClickHandler\0pickChannel\0"
    "setMixOpMax\0setMixOpSum\0setMixOpMean\0"
    "setMixOpOIT\0setMixOpIndex\0setMixRescale\0"
    "setMixMaskR\0setMixMaskG\0setMixMaskB\0"
    "setDefault"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChannelTable[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  164,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,  165,    2, 0x0a,    1 /* Public */,
       3,    0,  168,    2, 0x2a,    3 /* Public | MethodCloned */,
       5,    0,  169,    2, 0x0a,    4 /* Public */,
       6,    1,  170,    2, 0x0a,    5 /* Public */,
       8,    1,  173,    2, 0x0a,    7 /* Public */,
       8,    0,  176,    2, 0x2a,    9 /* Public | MethodCloned */,
      10,    0,  177,    2, 0x0a,   10 /* Public */,
      11,    0,  178,    2, 0x0a,   11 /* Public */,
      12,    0,  179,    2, 0x0a,   12 /* Public */,
      13,    0,  180,    2, 0x0a,   13 /* Public */,
      14,    1,  181,    2, 0x0a,   14 /* Public */,
      17,    2,  184,    2, 0x09,   16 /* Protected */,
      20,    2,  189,    2, 0x09,   19 /* Protected */,
      21,    2,  194,    2, 0x09,   22 /* Protected */,
      22,    0,  199,    2, 0x09,   25 /* Protected */,
      23,    0,  200,    2, 0x09,   26 /* Protected */,
      24,    0,  201,    2, 0x09,   27 /* Protected */,
      25,    0,  202,    2, 0x09,   28 /* Protected */,
      26,    0,  203,    2, 0x09,   29 /* Protected */,
      27,    0,  204,    2, 0x09,   30 /* Protected */,
      28,    0,  205,    2, 0x09,   31 /* Protected */,
      29,    0,  206,    2, 0x09,   32 /* Protected */,
      30,    0,  207,    2, 0x09,   33 /* Protected */,
      31,    0,  208,    2, 0x09,   34 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   18,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   18,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   18,   19,
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

void ChannelTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChannelTable *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->channelTableChanged(); break;
        case 1: _t->updateXFormWidget((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateXFormWidget(); break;
        case 3: _t->linkXFormWidgetChannel(); break;
        case 4: _t->setChannelColorDefault((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateTableChannel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->updateTableChannel(); break;
        case 7: _t->setRescaleDefault(); break;
        case 8: _t->updateMixOpControls(); break;
        case 9: _t->begin_batch(); break;
        case 10: _t->end_batch(); break;
        case 11: _t->updatedContent((*reinterpret_cast< QTableWidget*(*)>(_a[1]))); break;
        case 12: _t->pressedClickHandler((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->doubleClickHandler((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->pickChannel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->setMixOpMax(); break;
        case 16: _t->setMixOpSum(); break;
        case 17: _t->setMixOpMean(); break;
        case 18: _t->setMixOpOIT(); break;
        case 19: _t->setMixOpIndex(); break;
        case 20: _t->setMixRescale(); break;
        case 21: _t->setMixMaskR(); break;
        case 22: _t->setMixMaskG(); break;
        case 23: _t->setMixMaskB(); break;
        case 24: _t->setDefault(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTableWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChannelTable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelTable::channelTableChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ChannelTable::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ChannelTable.offsetsAndSize,
    qt_meta_data_ChannelTable,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ChannelTable_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QTableWidget *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ChannelTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChannelTable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChannelTable.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ChannelTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void ChannelTable::channelTableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_BrightenBox_t {
    const uint offsetsAndSize[14];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_BrightenBox_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_BrightenBox_t qt_meta_stringdata_BrightenBox = {
    {
QT_MOC_LITERAL(0, 11), // "BrightenBox"
QT_MOC_LITERAL(12, 15), // "brightenChanged"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 19), // "updateMixOpControls"
QT_MOC_LITERAL(49, 5), // "reset"
QT_MOC_LITERAL(55, 13), // "setBrightness"
QT_MOC_LITERAL(69, 11) // "setContrast"

    },
    "BrightenBox\0brightenChanged\0\0"
    "updateMixOpControls\0reset\0setBrightness\0"
    "setContrast"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BrightenBox[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   45,    2, 0x0a,    1 /* Public */,
       4,    0,   46,    2, 0x0a,    2 /* Public */,
       5,    1,   47,    2, 0x0a,    3 /* Public */,
       6,    1,   50,    2, 0x0a,    5 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void BrightenBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BrightenBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->brightenChanged(); break;
        case 1: _t->updateMixOpControls(); break;
        case 2: _t->reset(); break;
        case 3: _t->setBrightness((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setContrast((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BrightenBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrightenBox::brightenChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject BrightenBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_BrightenBox.offsetsAndSize,
    qt_meta_data_BrightenBox,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_BrightenBox_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *BrightenBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BrightenBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BrightenBox.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BrightenBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void BrightenBox::brightenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_MiscBox_t {
    const uint offsetsAndSize[6];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MiscBox_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MiscBox_t qt_meta_stringdata_MiscBox = {
    {
QT_MOC_LITERAL(0, 7), // "MiscBox"
QT_MOC_LITERAL(8, 14), // "exportRGBStack"
QT_MOC_LITERAL(23, 0) // ""

    },
    "MiscBox\0exportRGBStack\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MiscBox[] = {

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

void MiscBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MiscBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->exportRGBStack(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject MiscBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MiscBox.offsetsAndSize,
    qt_meta_data_MiscBox,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MiscBox_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MiscBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MiscBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MiscBox.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MiscBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
