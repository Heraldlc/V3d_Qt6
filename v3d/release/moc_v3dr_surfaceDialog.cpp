/****************************************************************************
** Meta object code from reading C++ file 'v3dr_surfaceDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../3drenderer/v3dr_surfaceDialog.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'v3dr_surfaceDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_V3dr_surfaceDialog_t {
    const uint offsetsAndSize[106];
    char stringdata0[708];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_V3dr_surfaceDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_V3dr_surfaceDialog_t qt_meta_stringdata_V3dr_surfaceDialog = {
    {
QT_MOC_LITERAL(0, 18), // "V3dr_surfaceDialog"
QT_MOC_LITERAL(19, 6), // "linkTo"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 8), // "QWidget*"
QT_MOC_LITERAL(36, 1), // "w"
QT_MOC_LITERAL(38, 6), // "DecRef"
QT_MOC_LITERAL(45, 10), // "onAttached"
QT_MOC_LITERAL(56, 4), // "undo"
QT_MOC_LITERAL(61, 9), // "selectAll"
QT_MOC_LITERAL(71, 11), // "deselectAll"
QT_MOC_LITERAL(83, 13), // "selectInverse"
QT_MOC_LITERAL(97, 13), // "selectedOnOff"
QT_MOC_LITERAL(111, 5), // "state"
QT_MOC_LITERAL(117, 10), // "selectedOn"
QT_MOC_LITERAL(128, 11), // "selectedOff"
QT_MOC_LITERAL(140, 13), // "doMenuOfColor"
QT_MOC_LITERAL(154, 13), // "selectedColor"
QT_MOC_LITERAL(168, 3), // "map"
QT_MOC_LITERAL(172, 15), // "mapSegmentColor"
QT_MOC_LITERAL(188, 19), // "mapMultiNeuronColor"
QT_MOC_LITERAL(208, 16), // "mapHanchuanColor"
QT_MOC_LITERAL(225, 14), // "mapRandomColor"
QT_MOC_LITERAL(240, 19), // "doMenuOfDisplayMode"
QT_MOC_LITERAL(260, 17), // "setSWCDisplayMode"
QT_MOC_LITERAL(278, 1), // "v"
QT_MOC_LITERAL(280, 32), // "setSWCDisplayUsingGlobalSettings"
QT_MOC_LITERAL(313, 22), // "setSWCDisplayUsingLine"
QT_MOC_LITERAL(336, 22), // "setSWCDisplayUsingTube"
QT_MOC_LITERAL(359, 19), // "pressedClickHandler"
QT_MOC_LITERAL(379, 3), // "row"
QT_MOC_LITERAL(383, 3), // "col"
QT_MOC_LITERAL(387, 18), // "doubleClickHandler"
QT_MOC_LITERAL(406, 8), // "pickSurf"
QT_MOC_LITERAL(415, 17), // "pickNeuronSegment"
QT_MOC_LITERAL(433, 7), // "pickSWC"
QT_MOC_LITERAL(441, 7), // "pickAPO"
QT_MOC_LITERAL(449, 11), // "pickAPO_Set"
QT_MOC_LITERAL(461, 10), // "pickMarker"
QT_MOC_LITERAL(472, 22), // "editObjNameAndComments"
QT_MOC_LITERAL(495, 21), // "editNeuronSegmentType"
QT_MOC_LITERAL(517, 8), // "findNext"
QT_MOC_LITERAL(526, 8), // "findPrev"
QT_MOC_LITERAL(535, 16), // "findAllHighlight"
QT_MOC_LITERAL(552, 17), // "onMarkerLocalView"
QT_MOC_LITERAL(570, 18), // "zoomMarkerLocation"
QT_MOC_LITERAL(589, 16), // "updateMarkerList"
QT_MOC_LITERAL(606, 18), // "QList<ImageMarker>"
QT_MOC_LITERAL(625, 7), // "markers"
QT_MOC_LITERAL(633, 14), // "menuExecBuffer"
QT_MOC_LITERAL(648, 12), // "getMarkerNum"
QT_MOC_LITERAL(661, 23), // "sortNeuronSegmentByType"
QT_MOC_LITERAL(685, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(703, 4) // "item"

    },
    "V3dr_surfaceDialog\0linkTo\0\0QWidget*\0"
    "w\0DecRef\0onAttached\0undo\0selectAll\0"
    "deselectAll\0selectInverse\0selectedOnOff\0"
    "state\0selectedOn\0selectedOff\0doMenuOfColor\0"
    "selectedColor\0map\0mapSegmentColor\0"
    "mapMultiNeuronColor\0mapHanchuanColor\0"
    "mapRandomColor\0doMenuOfDisplayMode\0"
    "setSWCDisplayMode\0v\0"
    "setSWCDisplayUsingGlobalSettings\0"
    "setSWCDisplayUsingLine\0setSWCDisplayUsingTube\0"
    "pressedClickHandler\0row\0col\0"
    "doubleClickHandler\0pickSurf\0"
    "pickNeuronSegment\0pickSWC\0pickAPO\0"
    "pickAPO_Set\0pickMarker\0editObjNameAndComments\0"
    "editNeuronSegmentType\0findNext\0findPrev\0"
    "findAllHighlight\0onMarkerLocalView\0"
    "zoomMarkerLocation\0updateMarkerList\0"
    "QList<ImageMarker>\0markers\0menuExecBuffer\0"
    "getMarkerNum\0sortNeuronSegmentByType\0"
    "QTableWidgetItem*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_V3dr_surfaceDialog[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  260,    2, 0x0a,    0 /* Public */,
       5,    1,  263,    2, 0x0a,    2 /* Public */,
       6,    1,  266,    2, 0x0a,    4 /* Public */,
       7,    0,  269,    2, 0x0a,    6 /* Public */,
       8,    0,  270,    2, 0x0a,    7 /* Public */,
       9,    0,  271,    2, 0x0a,    8 /* Public */,
      10,    0,  272,    2, 0x0a,    9 /* Public */,
      11,    1,  273,    2, 0x0a,   10 /* Public */,
      13,    0,  276,    2, 0x0a,   12 /* Public */,
      14,    0,  277,    2, 0x0a,   13 /* Public */,
      15,    0,  278,    2, 0x0a,   14 /* Public */,
      16,    1,  279,    2, 0x0a,   15 /* Public */,
      16,    0,  282,    2, 0x2a,   17 /* Public | MethodCloned */,
      18,    0,  283,    2, 0x0a,   18 /* Public */,
      19,    0,  284,    2, 0x0a,   19 /* Public */,
      20,    0,  285,    2, 0x0a,   20 /* Public */,
      21,    0,  286,    2, 0x0a,   21 /* Public */,
      22,    0,  287,    2, 0x0a,   22 /* Public */,
      23,    1,  288,    2, 0x0a,   23 /* Public */,
      25,    0,  291,    2, 0x0a,   25 /* Public */,
      26,    0,  292,    2, 0x0a,   26 /* Public */,
      27,    0,  293,    2, 0x0a,   27 /* Public */,
      28,    2,  294,    2, 0x0a,   28 /* Public */,
      31,    2,  299,    2, 0x0a,   31 /* Public */,
      32,    2,  304,    2, 0x0a,   34 /* Public */,
      33,    2,  309,    2, 0x0a,   37 /* Public */,
      34,    2,  314,    2, 0x0a,   40 /* Public */,
      35,    2,  319,    2, 0x0a,   43 /* Public */,
      36,    2,  324,    2, 0x0a,   46 /* Public */,
      37,    2,  329,    2, 0x0a,   49 /* Public */,
      38,    0,  334,    2, 0x0a,   52 /* Public */,
      39,    0,  335,    2, 0x0a,   53 /* Public */,
      40,    0,  336,    2, 0x0a,   54 /* Public */,
      41,    0,  337,    2, 0x0a,   55 /* Public */,
      42,    0,  338,    2, 0x0a,   56 /* Public */,
      43,    0,  339,    2, 0x0a,   57 /* Public */,
      44,    0,  340,    2, 0x0a,   58 /* Public */,
      45,    1,  341,    2, 0x0a,   59 /* Public */,
      48,    0,  344,    2, 0x0a,   61 /* Public */,
      49,    0,  345,    2, 0x0a,   62 /* Public */,
      50,    1,  346,    2, 0x0a,   63 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Int, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   29,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   29,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   29,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   29,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   29,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   29,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   29,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   29,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 46,   47,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, 0x80000000 | 51,   52,

       0        // eod
};

void V3dr_surfaceDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<V3dr_surfaceDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->linkTo((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: { int _r = _t->DecRef((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->onAttached((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->undo(); break;
        case 4: _t->selectAll(); break;
        case 5: _t->deselectAll(); break;
        case 6: _t->selectInverse(); break;
        case 7: _t->selectedOnOff((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->selectedOn(); break;
        case 9: _t->selectedOff(); break;
        case 10: _t->doMenuOfColor(); break;
        case 11: _t->selectedColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->selectedColor(); break;
        case 13: _t->mapSegmentColor(); break;
        case 14: _t->mapMultiNeuronColor(); break;
        case 15: _t->mapHanchuanColor(); break;
        case 16: _t->mapRandomColor(); break;
        case 17: _t->doMenuOfDisplayMode(); break;
        case 18: _t->setSWCDisplayMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->setSWCDisplayUsingGlobalSettings(); break;
        case 20: _t->setSWCDisplayUsingLine(); break;
        case 21: _t->setSWCDisplayUsingTube(); break;
        case 22: _t->pressedClickHandler((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->doubleClickHandler((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 24: _t->pickSurf((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 25: _t->pickNeuronSegment((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: _t->pickSWC((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 27: _t->pickAPO((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 28: _t->pickAPO_Set((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 29: _t->pickMarker((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 30: _t->editObjNameAndComments(); break;
        case 31: _t->editNeuronSegmentType(); break;
        case 32: _t->findNext(); break;
        case 33: _t->findPrev(); break;
        case 34: _t->findAllHighlight(); break;
        case 35: _t->onMarkerLocalView(); break;
        case 36: _t->zoomMarkerLocation(); break;
        case 37: _t->updateMarkerList((*reinterpret_cast< QList<ImageMarker>(*)>(_a[1]))); break;
        case 38: _t->menuExecBuffer(); break;
        case 39: { int _r = _t->getMarkerNum();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 40: _t->sortNeuronSegmentByType((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
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
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject V3dr_surfaceDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<SharedToolDialog::staticMetaObject>(),
    qt_meta_stringdata_V3dr_surfaceDialog.offsetsAndSize,
    qt_meta_data_V3dr_surfaceDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_V3dr_surfaceDialog_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QList<ImageMarker>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QTableWidgetItem *, std::false_type>


>,
    nullptr
} };


const QMetaObject *V3dr_surfaceDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *V3dr_surfaceDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_V3dr_surfaceDialog.stringdata0))
        return static_cast<void*>(this);
    return SharedToolDialog::qt_metacast(_clname);
}

int V3dr_surfaceDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SharedToolDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
