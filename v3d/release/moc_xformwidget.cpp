/****************************************************************************
** Meta object code from reading C++ file 'xformwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../xformwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xformwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_XFormWidget_t {
    const uint offsetsAndSize[176];
    char stringdata0[1452];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_XFormWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_XFormWidget_t qt_meta_stringdata_XFormWidget = {
    {
QT_MOC_LITERAL(0, 11), // "XFormWidget"
QT_MOC_LITERAL(12, 12), // "colorChanged"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 17), // "colorChangedGlass"
QT_MOC_LITERAL(44, 22), // "external_focusXChanged"
QT_MOC_LITERAL(67, 1), // "c"
QT_MOC_LITERAL(69, 22), // "external_focusYChanged"
QT_MOC_LITERAL(92, 22), // "external_focusZChanged"
QT_MOC_LITERAL(115, 27), // "external_validZSliceChanged"
QT_MOC_LITERAL(143, 1), // "z"
QT_MOC_LITERAL(145, 21), // "mixChannelColorPlaneX"
QT_MOC_LITERAL(167, 3), // "pxm"
QT_MOC_LITERAL(171, 6), // "bGlass"
QT_MOC_LITERAL(178, 21), // "mixChannelColorPlaneY"
QT_MOC_LITERAL(200, 21), // "mixChannelColorPlaneZ"
QT_MOC_LITERAL(222, 11), // "onActivated"
QT_MOC_LITERAL(234, 14), // "QMdiSubWindow*"
QT_MOC_LITERAL(249, 21), // "syncChannelTabWidgets"
QT_MOC_LITERAL(271, 17), // "ChannelTabWidget*"
QT_MOC_LITERAL(289, 6), // "sender"
QT_MOC_LITERAL(296, 15), // "setColorRedType"
QT_MOC_LITERAL(312, 17), // "setColorGreenType"
QT_MOC_LITERAL(330, 16), // "setColorBlueType"
QT_MOC_LITERAL(347, 15), // "setColorAllType"
QT_MOC_LITERAL(363, 20), // "setColorRed2GrayType"
QT_MOC_LITERAL(384, 22), // "setColorGreen2GrayType"
QT_MOC_LITERAL(407, 21), // "setColorBlue2GrayType"
QT_MOC_LITERAL(429, 20), // "setColorAll2GrayType"
QT_MOC_LITERAL(450, 19), // "setColorMapDispType"
QT_MOC_LITERAL(470, 21), // "ImageDisplayColorType"
QT_MOC_LITERAL(492, 5), // "Ctype"
QT_MOC_LITERAL(498, 18), // "switchMaskColormap"
QT_MOC_LITERAL(517, 23), // "toggleLinkFocusCheckBox"
QT_MOC_LITERAL(541, 31), // "toggleDisplayFocusCrossCheckBox"
QT_MOC_LITERAL(573, 24), // "toggleImgValScaleDisplay"
QT_MOC_LITERAL(598, 26), // "toggleLookingGlassCheckBox"
QT_MOC_LITERAL(625, 19), // "doMenuOfTriviewZoom"
QT_MOC_LITERAL(645, 14), // "triview_zoomin"
QT_MOC_LITERAL(660, 15), // "triview_zoomout"
QT_MOC_LITERAL(676, 13), // "triview_zoom1"
QT_MOC_LITERAL(690, 13), // "triview_zoom2"
QT_MOC_LITERAL(704, 16), // "triview_zoomhalf"
QT_MOC_LITERAL(721, 15), // "triview_setzoom"
QT_MOC_LITERAL(737, 10), // "b_multiply"
QT_MOC_LITERAL(748, 26), // "popupImageProcessingDialog"
QT_MOC_LITERAL(775, 4), // "item"
QT_MOC_LITERAL(780, 13), // "doImage3DView"
QT_MOC_LITERAL(794, 24), // "doImage3DLocalMarkerView"
QT_MOC_LITERAL(819, 21), // "doImage3DLocalRoiView"
QT_MOC_LITERAL(841, 22), // "doImage3DLocalBBoxView"
QT_MOC_LITERAL(864, 21), // "tmp_b_use_512x512x256"
QT_MOC_LITERAL(886, 7), // "b_local"
QT_MOC_LITERAL(894, 4), // "bbx0"
QT_MOC_LITERAL(899, 4), // "bbx1"
QT_MOC_LITERAL(904, 4), // "bby0"
QT_MOC_LITERAL(909, 4), // "bby1"
QT_MOC_LITERAL(914, 4), // "bbz0"
QT_MOC_LITERAL(919, 4), // "bbz1"
QT_MOC_LITERAL(924, 4), // "show"
QT_MOC_LITERAL(929, 16), // "doMenuOf3DViewer"
QT_MOC_LITERAL(946, 9), // "aboutInfo"
QT_MOC_LITERAL(956, 15), // "setOpenFileName"
QT_MOC_LITERAL(972, 5), // "reset"
QT_MOC_LITERAL(978, 22), // "changeFocusXToExternal"
QT_MOC_LITERAL(1001, 22), // "changeFocusYToExternal"
QT_MOC_LITERAL(1024, 22), // "changeFocusZToExternal"
QT_MOC_LITERAL(1047, 36), // "toggleCheckBox_bSendSignalToE..."
QT_MOC_LITERAL(1084, 40), // "toggleCheckBox_bAcceptSignalF..."
QT_MOC_LITERAL(1125, 26), // "copyLandmarkToPublicBuffer"
QT_MOC_LITERAL(1152, 29), // "pasteLandmarkFromPublicBuffer"
QT_MOC_LITERAL(1182, 18), // "saveLandmarkToFile"
QT_MOC_LITERAL(1201, 20), // "loadLandmarkFromFile"
QT_MOC_LITERAL(1222, 19), // "openLandmarkManager"
QT_MOC_LITERAL(1242, 23), // "toggleLandmarkLabelDisp"
QT_MOC_LITERAL(1266, 17), // "launchAtlasViewer"
QT_MOC_LITERAL(1284, 6), // "curTab"
QT_MOC_LITERAL(1291, 14), // "cascadeWindows"
QT_MOC_LITERAL(1306, 11), // "updateViews"
QT_MOC_LITERAL(1318, 13), // "updateTriview"
QT_MOC_LITERAL(1332, 18), // "changeXOffset_mapv"
QT_MOC_LITERAL(1351, 1), // "x"
QT_MOC_LITERAL(1353, 18), // "changeYOffset_mapv"
QT_MOC_LITERAL(1372, 1), // "y"
QT_MOC_LITERAL(1374, 18), // "changeZOffset_mapv"
QT_MOC_LITERAL(1393, 16), // "changeLevel_mapv"
QT_MOC_LITERAL(1410, 5), // "level"
QT_MOC_LITERAL(1416, 19), // "hideDisplayControls"
QT_MOC_LITERAL(1436, 15) // "hideDisplayInfo"

    },
    "XFormWidget\0colorChanged\0\0colorChangedGlass\0"
    "external_focusXChanged\0c\0"
    "external_focusYChanged\0external_focusZChanged\0"
    "external_validZSliceChanged\0z\0"
    "mixChannelColorPlaneX\0pxm\0bGlass\0"
    "mixChannelColorPlaneY\0mixChannelColorPlaneZ\0"
    "onActivated\0QMdiSubWindow*\0"
    "syncChannelTabWidgets\0ChannelTabWidget*\0"
    "sender\0setColorRedType\0setColorGreenType\0"
    "setColorBlueType\0setColorAllType\0"
    "setColorRed2GrayType\0setColorGreen2GrayType\0"
    "setColorBlue2GrayType\0setColorAll2GrayType\0"
    "setColorMapDispType\0ImageDisplayColorType\0"
    "Ctype\0switchMaskColormap\0"
    "toggleLinkFocusCheckBox\0"
    "toggleDisplayFocusCrossCheckBox\0"
    "toggleImgValScaleDisplay\0"
    "toggleLookingGlassCheckBox\0"
    "doMenuOfTriviewZoom\0triview_zoomin\0"
    "triview_zoomout\0triview_zoom1\0"
    "triview_zoom2\0triview_zoomhalf\0"
    "triview_setzoom\0b_multiply\0"
    "popupImageProcessingDialog\0item\0"
    "doImage3DView\0doImage3DLocalMarkerView\0"
    "doImage3DLocalRoiView\0doImage3DLocalBBoxView\0"
    "tmp_b_use_512x512x256\0b_local\0bbx0\0"
    "bbx1\0bby0\0bby1\0bbz0\0bbz1\0show\0"
    "doMenuOf3DViewer\0aboutInfo\0setOpenFileName\0"
    "reset\0changeFocusXToExternal\0"
    "changeFocusYToExternal\0changeFocusZToExternal\0"
    "toggleCheckBox_bSendSignalToExternal\0"
    "toggleCheckBox_bAcceptSignalFromExternal\0"
    "copyLandmarkToPublicBuffer\0"
    "pasteLandmarkFromPublicBuffer\0"
    "saveLandmarkToFile\0loadLandmarkFromFile\0"
    "openLandmarkManager\0toggleLandmarkLabelDisp\0"
    "launchAtlasViewer\0curTab\0cascadeWindows\0"
    "updateViews\0updateTriview\0changeXOffset_mapv\0"
    "x\0changeYOffset_mapv\0y\0changeZOffset_mapv\0"
    "changeLevel_mapv\0level\0hideDisplayControls\0"
    "hideDisplayInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XFormWidget[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      75,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  464,    2, 0x06,    0 /* Public */,
       3,    1,  467,    2, 0x06,    2 /* Public */,
       4,    1,  470,    2, 0x06,    4 /* Public */,
       6,    1,  473,    2, 0x06,    6 /* Public */,
       7,    1,  476,    2, 0x06,    8 /* Public */,
       8,    1,  479,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    2,  482,    2, 0x0a,   12 /* Public */,
      13,    2,  487,    2, 0x0a,   15 /* Public */,
      14,    2,  492,    2, 0x0a,   18 /* Public */,
      15,    1,  497,    2, 0x0a,   21 /* Public */,
      17,    1,  500,    2, 0x0a,   23 /* Public */,
      20,    0,  503,    2, 0x0a,   25 /* Public */,
      21,    0,  504,    2, 0x0a,   26 /* Public */,
      22,    0,  505,    2, 0x0a,   27 /* Public */,
      23,    0,  506,    2, 0x0a,   28 /* Public */,
      24,    0,  507,    2, 0x0a,   29 /* Public */,
      25,    0,  508,    2, 0x0a,   30 /* Public */,
      26,    0,  509,    2, 0x0a,   31 /* Public */,
      27,    0,  510,    2, 0x0a,   32 /* Public */,
      28,    2,  511,    2, 0x0a,   33 /* Public */,
      28,    1,  516,    2, 0x2a,   36 /* Public | MethodCloned */,
      28,    0,  519,    2, 0x2a,   38 /* Public | MethodCloned */,
      31,    0,  520,    2, 0x0a,   39 /* Public */,
      32,    0,  521,    2, 0x0a,   40 /* Public */,
      33,    0,  522,    2, 0x0a,   41 /* Public */,
      34,    0,  523,    2, 0x0a,   42 /* Public */,
      35,    0,  524,    2, 0x0a,   43 /* Public */,
      36,    0,  525,    2, 0x0a,   44 /* Public */,
      37,    0,  526,    2, 0x0a,   45 /* Public */,
      38,    0,  527,    2, 0x0a,   46 /* Public */,
      39,    0,  528,    2, 0x0a,   47 /* Public */,
      40,    0,  529,    2, 0x0a,   48 /* Public */,
      41,    0,  530,    2, 0x0a,   49 /* Public */,
      42,    2,  531,    2, 0x0a,   50 /* Public */,
      44,    0,  536,    2, 0x0a,   53 /* Public */,
      44,    1,  537,    2, 0x0a,   54 /* Public */,
      46,    0,  540,    2, 0x0a,   56 /* Public */,
      47,    0,  541,    2, 0x0a,   57 /* Public */,
      48,    0,  542,    2, 0x0a,   58 /* Public */,
      49,    0,  543,    2, 0x0a,   59 /* Public */,
      46,    9,  544,    2, 0x0a,   60 /* Public */,
      46,    8,  563,    2, 0x2a,   70 /* Public | MethodCloned */,
      46,    7,  580,    2, 0x2a,   79 /* Public | MethodCloned */,
      46,    6,  595,    2, 0x2a,   87 /* Public | MethodCloned */,
      46,    5,  608,    2, 0x2a,   94 /* Public | MethodCloned */,
      46,    4,  619,    2, 0x2a,  100 /* Public | MethodCloned */,
      46,    3,  628,    2, 0x2a,  105 /* Public | MethodCloned */,
      46,    2,  635,    2, 0x2a,  109 /* Public | MethodCloned */,
      46,    1,  640,    2, 0x2a,  112 /* Public | MethodCloned */,
      59,    0,  643,    2, 0x0a,  114 /* Public */,
      60,    0,  644,    2, 0x0a,  115 /* Public */,
      61,    0,  645,    2, 0x0a,  116 /* Public */,
      62,    0,  646,    2, 0x0a,  117 /* Public */,
      63,    1,  647,    2, 0x0a,  118 /* Public */,
      64,    1,  650,    2, 0x0a,  120 /* Public */,
      65,    1,  653,    2, 0x0a,  122 /* Public */,
      66,    0,  656,    2, 0x0a,  124 /* Public */,
      67,    0,  657,    2, 0x0a,  125 /* Public */,
      68,    0,  658,    2, 0x0a,  126 /* Public */,
      69,    0,  659,    2, 0x0a,  127 /* Public */,
      70,    0,  660,    2, 0x0a,  128 /* Public */,
      71,    0,  661,    2, 0x0a,  129 /* Public */,
      72,    0,  662,    2, 0x0a,  130 /* Public */,
      73,    0,  663,    2, 0x0a,  131 /* Public */,
      74,    1,  664,    2, 0x0a,  132 /* Public */,
      74,    0,  667,    2, 0x2a,  134 /* Public | MethodCloned */,
      76,    0,  668,    2, 0x0a,  135 /* Public */,
      77,    0,  669,    2, 0x0a,  136 /* Public */,
      78,    0,  670,    2, 0x0a,  137 /* Public */,
      79,    1,  671,    2, 0x0a,  138 /* Public */,
      81,    1,  674,    2, 0x0a,  140 /* Public */,
      83,    1,  677,    2, 0x0a,  142 /* Public */,
      84,    1,  680,    2, 0x0a,  144 /* Public */,
      86,    0,  683,    2, 0x0a,  146 /* Public */,
      87,    0,  684,    2, 0x0a,  147 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Long,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QPixmap, QMetaType::Bool,   11,   12,
    QMetaType::Void, QMetaType::QPixmap, QMetaType::Bool,   11,   12,
    QMetaType::Void, QMetaType::QPixmap, QMetaType::Bool,   11,   12,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29, QMetaType::Bool,   30,   12,
    QMetaType::Void, 0x80000000 | 29,   30,
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
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,    9,   43,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Long, QMetaType::Long, QMetaType::Long, QMetaType::Long, QMetaType::Long, QMetaType::Long, QMetaType::Bool,   50,   51,   52,   53,   54,   55,   56,   57,   58,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Long, QMetaType::Long, QMetaType::Long, QMetaType::Long, QMetaType::Long, QMetaType::Long,   50,   51,   52,   53,   54,   55,   56,   57,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Long, QMetaType::Long, QMetaType::Long, QMetaType::Long, QMetaType::Long,   50,   51,   52,   53,   54,   55,   56,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Long, QMetaType::Long, QMetaType::Long, QMetaType::Long,   50,   51,   52,   53,   54,   55,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Long, QMetaType::Long, QMetaType::Long,   50,   51,   52,   53,   54,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Long, QMetaType::Long,   50,   51,   52,   53,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Long,   50,   51,   52,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int,   50,   51,
    QMetaType::Void, QMetaType::Bool,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   75,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   80,
    QMetaType::Void, QMetaType::Int,   82,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   85,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void XFormWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XFormWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->colorChangedGlass((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->external_focusXChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->external_focusYChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->external_focusZChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->external_validZSliceChanged((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 6: _t->mixChannelColorPlaneX((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->mixChannelColorPlaneY((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->mixChannelColorPlaneZ((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->onActivated((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        case 10: _t->syncChannelTabWidgets((*reinterpret_cast< ChannelTabWidget*(*)>(_a[1]))); break;
        case 11: _t->setColorRedType(); break;
        case 12: _t->setColorGreenType(); break;
        case 13: _t->setColorBlueType(); break;
        case 14: _t->setColorAllType(); break;
        case 15: _t->setColorRed2GrayType(); break;
        case 16: _t->setColorGreen2GrayType(); break;
        case 17: _t->setColorBlue2GrayType(); break;
        case 18: _t->setColorAll2GrayType(); break;
        case 19: _t->setColorMapDispType((*reinterpret_cast< ImageDisplayColorType(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 20: _t->setColorMapDispType((*reinterpret_cast< ImageDisplayColorType(*)>(_a[1]))); break;
        case 21: _t->setColorMapDispType(); break;
        case 22: _t->switchMaskColormap(); break;
        case 23: _t->toggleLinkFocusCheckBox(); break;
        case 24: _t->toggleDisplayFocusCrossCheckBox(); break;
        case 25: _t->toggleImgValScaleDisplay(); break;
        case 26: _t->toggleLookingGlassCheckBox(); break;
        case 27: _t->doMenuOfTriviewZoom(); break;
        case 28: _t->triview_zoomin(); break;
        case 29: _t->triview_zoomout(); break;
        case 30: _t->triview_zoom1(); break;
        case 31: _t->triview_zoom2(); break;
        case 32: _t->triview_zoomhalf(); break;
        case 33: _t->triview_setzoom((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 34: _t->popupImageProcessingDialog(); break;
        case 35: _t->popupImageProcessingDialog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 36: _t->doImage3DView(); break;
        case 37: _t->doImage3DLocalMarkerView(); break;
        case 38: _t->doImage3DLocalRoiView(); break;
        case 39: _t->doImage3DLocalBBoxView(); break;
        case 40: _t->doImage3DView((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< long(*)>(_a[3])),(*reinterpret_cast< long(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5])),(*reinterpret_cast< long(*)>(_a[6])),(*reinterpret_cast< long(*)>(_a[7])),(*reinterpret_cast< long(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 41: _t->doImage3DView((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< long(*)>(_a[3])),(*reinterpret_cast< long(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5])),(*reinterpret_cast< long(*)>(_a[6])),(*reinterpret_cast< long(*)>(_a[7])),(*reinterpret_cast< long(*)>(_a[8]))); break;
        case 42: _t->doImage3DView((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< long(*)>(_a[3])),(*reinterpret_cast< long(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5])),(*reinterpret_cast< long(*)>(_a[6])),(*reinterpret_cast< long(*)>(_a[7]))); break;
        case 43: _t->doImage3DView((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< long(*)>(_a[3])),(*reinterpret_cast< long(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5])),(*reinterpret_cast< long(*)>(_a[6]))); break;
        case 44: _t->doImage3DView((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< long(*)>(_a[3])),(*reinterpret_cast< long(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5]))); break;
        case 45: _t->doImage3DView((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< long(*)>(_a[3])),(*reinterpret_cast< long(*)>(_a[4]))); break;
        case 46: _t->doImage3DView((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< long(*)>(_a[3]))); break;
        case 47: _t->doImage3DView((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 48: _t->doImage3DView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->doMenuOf3DViewer(); break;
        case 50: _t->aboutInfo(); break;
        case 51: _t->setOpenFileName(); break;
        case 52: _t->reset(); break;
        case 53: _t->changeFocusXToExternal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 54: _t->changeFocusYToExternal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 55: _t->changeFocusZToExternal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: _t->toggleCheckBox_bSendSignalToExternal(); break;
        case 57: _t->toggleCheckBox_bAcceptSignalFromExternal(); break;
        case 58: _t->copyLandmarkToPublicBuffer(); break;
        case 59: _t->pasteLandmarkFromPublicBuffer(); break;
        case 60: _t->saveLandmarkToFile(); break;
        case 61: _t->loadLandmarkFromFile(); break;
        case 62: _t->openLandmarkManager(); break;
        case 63: _t->toggleLandmarkLabelDisp(); break;
        case 64: _t->launchAtlasViewer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 65: _t->launchAtlasViewer(); break;
        case 66: _t->cascadeWindows(); break;
        case 67: _t->updateViews(); break;
        case 68: _t->updateTriview(); break;
        case 69: _t->changeXOffset_mapv((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 70: _t->changeYOffset_mapv((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 71: _t->changeZOffset_mapv((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 72: _t->changeLevel_mapv((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 73: _t->hideDisplayControls(); break;
        case 74: _t->hideDisplayInfo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QMdiSubWindow* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (XFormWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XFormWidget::colorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (XFormWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XFormWidget::colorChangedGlass)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (XFormWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XFormWidget::external_focusXChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (XFormWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XFormWidget::external_focusYChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (XFormWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XFormWidget::external_focusZChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (XFormWidget::*)(long );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XFormWidget::external_validZSliceChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject XFormWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QMdiSubWindow::staticMetaObject>(),
    qt_meta_stringdata_XFormWidget.offsetsAndSize,
    qt_meta_data_XFormWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_XFormWidget_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPixmap &, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPixmap &, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPixmap &, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMdiSubWindow *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ChannelTabWidget *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ImageDisplayColorType, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ImageDisplayColorType, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<long, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *XFormWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XFormWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XFormWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "TriviewControl"))
        return static_cast< TriviewControl*>(this);
    return QMdiSubWindow::qt_metacast(_clname);
}

int XFormWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMdiSubWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 75)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 75;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 75)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 75;
    }
    return _id;
}

// SIGNAL 0
void XFormWidget::colorChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XFormWidget::colorChangedGlass(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void XFormWidget::external_focusXChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void XFormWidget::external_focusYChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void XFormWidget::external_focusZChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void XFormWidget::external_validZSliceChanged(long _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
