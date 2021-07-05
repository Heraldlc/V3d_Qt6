/****************************************************************************
** Meta object code from reading C++ file 'v3dr_glwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../3drenderer/v3dr_glwidget.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'v3dr_glwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_V3dR_GLWidget_t {
    const uint offsetsAndSize[446];
    char stringdata0[3304];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_V3dR_GLWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_V3dR_GLWidget_t qt_meta_stringdata_V3dR_GLWidget = {
    {
QT_MOC_LITERAL(0, 13), // "V3dR_GLWidget"
QT_MOC_LITERAL(14, 22), // "signalInitControlValue"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 20), // "signalVolumeCutRange"
QT_MOC_LITERAL(59, 20), // "signalOnlySurfaceObj"
QT_MOC_LITERAL(80, 21), // "changeVolumeTimePoint"
QT_MOC_LITERAL(102, 20), // "changeDispType_maxip"
QT_MOC_LITERAL(123, 20), // "changeDispType_minip"
QT_MOC_LITERAL(144, 20), // "changeDispType_alpha"
QT_MOC_LITERAL(165, 19), // "changeDispType_cs3d"
QT_MOC_LITERAL(185, 17), // "changeVolCompress"
QT_MOC_LITERAL(203, 23), // "changeEnableVolCompress"
QT_MOC_LITERAL(227, 23), // "changeEnableVolColormap"
QT_MOC_LITERAL(251, 28), // "changeTransparentSliderLabel"
QT_MOC_LITERAL(280, 29), // "changeEnableTransparentSlider"
QT_MOC_LITERAL(310, 16), // "changeMarkerSize"
QT_MOC_LITERAL(327, 16), // "xRotationChanged"
QT_MOC_LITERAL(344, 16), // "yRotationChanged"
QT_MOC_LITERAL(361, 16), // "zRotationChanged"
QT_MOC_LITERAL(378, 11), // "zoomChanged"
QT_MOC_LITERAL(390, 13), // "xShiftChanged"
QT_MOC_LITERAL(404, 13), // "yShiftChanged"
QT_MOC_LITERAL(418, 13), // "zShiftChanged"
QT_MOC_LITERAL(432, 22), // "changeEnableCut0Slider"
QT_MOC_LITERAL(455, 22), // "changeEnableCut1Slider"
QT_MOC_LITERAL(478, 24), // "changeCurrentTabCutPlane"
QT_MOC_LITERAL(503, 23), // "changeEnableTabCutPlane"
QT_MOC_LITERAL(527, 15), // "changeXCSSlider"
QT_MOC_LITERAL(543, 1), // "s"
QT_MOC_LITERAL(545, 15), // "changeYCSSlider"
QT_MOC_LITERAL(561, 15), // "changeZCSSlider"
QT_MOC_LITERAL(577, 14), // "changeFrontCut"
QT_MOC_LITERAL(592, 11), // "changeXCut0"
QT_MOC_LITERAL(604, 11), // "changeXCut1"
QT_MOC_LITERAL(616, 11), // "changeYCut0"
QT_MOC_LITERAL(628, 11), // "changeYCut1"
QT_MOC_LITERAL(640, 11), // "changeZCut0"
QT_MOC_LITERAL(652, 11), // "changeZCut1"
QT_MOC_LITERAL(664, 12), // "changeXClip0"
QT_MOC_LITERAL(677, 12), // "changeXClip1"
QT_MOC_LITERAL(690, 12), // "changeYClip0"
QT_MOC_LITERAL(703, 12), // "changeYClip1"
QT_MOC_LITERAL(716, 12), // "changeZClip0"
QT_MOC_LITERAL(729, 12), // "changeZClip1"
QT_MOC_LITERAL(742, 13), // "changeConfCut"
QT_MOC_LITERAL(756, 15), // "changeOrthoView"
QT_MOC_LITERAL(772, 1), // "b"
QT_MOC_LITERAL(774, 11), // "neuronShown"
QT_MOC_LITERAL(786, 10), // "QList<int>"
QT_MOC_LITERAL(797, 11), // "overlayList"
QT_MOC_LITERAL(809, 14), // "neuronShownAll"
QT_MOC_LITERAL(824, 14), // "neuronClearAll"
QT_MOC_LITERAL(839, 18), // "neuronIndexChanged"
QT_MOC_LITERAL(858, 5), // "index"
QT_MOC_LITERAL(864, 24), // "neuronClearAllSelections"
QT_MOC_LITERAL(889, 17), // "signalCallTerafly"
QT_MOC_LITERAL(907, 7), // "nDirect"
QT_MOC_LITERAL(915, 10), // "stillPaint"
QT_MOC_LITERAL(926, 18), // "setVolumeTimePoint"
QT_MOC_LITERAL(945, 1), // "t"
QT_MOC_LITERAL(947, 18), // "incVolumeTimePoint"
QT_MOC_LITERAL(966, 4), // "step"
QT_MOC_LITERAL(971, 17), // "setRenderMode_Mip"
QT_MOC_LITERAL(989, 6), // "useMin"
QT_MOC_LITERAL(996, 19), // "setRenderMode_Maxip"
QT_MOC_LITERAL(1016, 19), // "setRenderMode_Minip"
QT_MOC_LITERAL(1036, 19), // "setRenderMode_Alpha"
QT_MOC_LITERAL(1056, 18), // "setRenderMode_Cs3d"
QT_MOC_LITERAL(1075, 16), // "setCSTransparent"
QT_MOC_LITERAL(1092, 11), // "setContrast"
QT_MOC_LITERAL(1104, 12), // "setThickness"
QT_MOC_LITERAL(1117, 13), // "setCurChannel"
QT_MOC_LITERAL(1131, 11), // "setChannelR"
QT_MOC_LITERAL(1143, 11), // "setChannelG"
QT_MOC_LITERAL(1155, 11), // "setChannelB"
QT_MOC_LITERAL(1167, 14), // "setVolCompress"
QT_MOC_LITERAL(1182, 20), // "volumeColormapDialog"
QT_MOC_LITERAL(1203, 19), // "surfaceSelectDialog"
QT_MOC_LITERAL(1223, 6), // "curTab"
QT_MOC_LITERAL(1230, 16), // "surfaceSelectTab"
QT_MOC_LITERAL(1247, 17), // "surfaceDialogHide"
QT_MOC_LITERAL(1265, 16), // "annotationDialog"
QT_MOC_LITERAL(1282, 9), // "dataClass"
QT_MOC_LITERAL(1292, 11), // "surfaceType"
QT_MOC_LITERAL(1304, 15), // "doimage3DVRView"
QT_MOC_LITERAL(1320, 10), // "bCanCoMode"
QT_MOC_LITERAL(1331, 15), // "process3Dwindow"
QT_MOC_LITERAL(1347, 4), // "show"
QT_MOC_LITERAL(1352, 13), // "doimageVRView"
QT_MOC_LITERAL(1366, 12), // "doclientView"
QT_MOC_LITERAL(1379, 10), // "check_flag"
QT_MOC_LITERAL(1390, 22), // "OnVRSocketDisConnected"
QT_MOC_LITERAL(1413, 12), // "setXRotation"
QT_MOC_LITERAL(1426, 5), // "angle"
QT_MOC_LITERAL(1432, 12), // "setYRotation"
QT_MOC_LITERAL(1445, 12), // "setZRotation"
QT_MOC_LITERAL(1458, 13), // "resetRotation"
QT_MOC_LITERAL(1472, 6), // "b_emit"
QT_MOC_LITERAL(1479, 13), // "modelRotation"
QT_MOC_LITERAL(1493, 8), // "xRotStep"
QT_MOC_LITERAL(1502, 8), // "yRotStep"
QT_MOC_LITERAL(1511, 8), // "zRotStep"
QT_MOC_LITERAL(1520, 12), // "viewRotation"
QT_MOC_LITERAL(1533, 15), // "absoluteRotPose"
QT_MOC_LITERAL(1549, 13), // "doAbsoluteRot"
QT_MOC_LITERAL(1563, 4), // "xRot"
QT_MOC_LITERAL(1568, 4), // "yRot"
QT_MOC_LITERAL(1573, 4), // "zRot"
QT_MOC_LITERAL(1578, 9), // "lookAlong"
QT_MOC_LITERAL(1588, 5), // "xLook"
QT_MOC_LITERAL(1594, 5), // "yLook"
QT_MOC_LITERAL(1600, 5), // "zLook"
QT_MOC_LITERAL(1606, 14), // "resetAltCenter"
QT_MOC_LITERAL(1621, 12), // "setAltCenter"
QT_MOC_LITERAL(1634, 2), // "xC"
QT_MOC_LITERAL(1637, 2), // "yC"
QT_MOC_LITERAL(1640, 2), // "zC"
QT_MOC_LITERAL(1643, 7), // "setZoom"
QT_MOC_LITERAL(1651, 1), // "r"
QT_MOC_LITERAL(1653, 9), // "setXShift"
QT_MOC_LITERAL(1663, 9), // "setYShift"
QT_MOC_LITERAL(1673, 9), // "setZShift"
QT_MOC_LITERAL(1683, 14), // "resetZoomShift"
QT_MOC_LITERAL(1698, 16), // "enableFrontSlice"
QT_MOC_LITERAL(1715, 12), // "enableXSlice"
QT_MOC_LITERAL(1728, 12), // "enableYSlice"
QT_MOC_LITERAL(1741, 12), // "enableZSlice"
QT_MOC_LITERAL(1754, 11), // "setFrontCut"
QT_MOC_LITERAL(1766, 8), // "setXCut0"
QT_MOC_LITERAL(1775, 8), // "setYCut0"
QT_MOC_LITERAL(1784, 8), // "setZCut0"
QT_MOC_LITERAL(1793, 8), // "setXCut1"
QT_MOC_LITERAL(1802, 8), // "setYCut1"
QT_MOC_LITERAL(1811, 8), // "setZCut1"
QT_MOC_LITERAL(1820, 6), // "setXCS"
QT_MOC_LITERAL(1827, 6), // "setYCS"
QT_MOC_LITERAL(1834, 6), // "setZCS"
QT_MOC_LITERAL(1841, 9), // "setXClip0"
QT_MOC_LITERAL(1851, 9), // "setYClip0"
QT_MOC_LITERAL(1861, 9), // "setZClip0"
QT_MOC_LITERAL(1871, 9), // "setXClip1"
QT_MOC_LITERAL(1881, 9), // "setYClip1"
QT_MOC_LITERAL(1891, 9), // "setZClip1"
QT_MOC_LITERAL(1901, 11), // "setXCutLock"
QT_MOC_LITERAL(1913, 11), // "setYCutLock"
QT_MOC_LITERAL(1925, 11), // "setZCutLock"
QT_MOC_LITERAL(1937, 10), // "setConfCut"
QT_MOC_LITERAL(1948, 16), // "confidenceDialog"
QT_MOC_LITERAL(1965, 14), // "enableShowAxes"
QT_MOC_LITERAL(1980, 21), // "enableShowBoundingBox"
QT_MOC_LITERAL(2002, 21), // "enableClipBoundingBox"
QT_MOC_LITERAL(2024, 15), // "enableOrthoView"
QT_MOC_LITERAL(2040, 18), // "setBackgroundColor"
QT_MOC_LITERAL(2059, 21), // "switchBackgroundColor"
QT_MOC_LITERAL(2081, 9), // "setBright"
QT_MOC_LITERAL(2091, 14), // "setShowMarkers"
QT_MOC_LITERAL(2106, 18), // "setShowSurfObjects"
QT_MOC_LITERAL(2125, 13), // "setXYZSurfure"
QT_MOC_LITERAL(2139, 17), // "enableMarkerLabel"
QT_MOC_LITERAL(2157, 13), // "setMarkerSize"
QT_MOC_LITERAL(2171, 17), // "enableSurfStretch"
QT_MOC_LITERAL(2189, 15), // "enableSurfZLock"
QT_MOC_LITERAL(2205, 14), // "toggleCellName"
QT_MOC_LITERAL(2220, 16), // "toggleMarkerName"
QT_MOC_LITERAL(2237, 18), // "createSurfCurrentR"
QT_MOC_LITERAL(2256, 18), // "createSurfCurrentG"
QT_MOC_LITERAL(2275, 18), // "createSurfCurrentB"
QT_MOC_LITERAL(2294, 18), // "loadObjectFromFile"
QT_MOC_LITERAL(2313, 3), // "url"
QT_MOC_LITERAL(2317, 22), // "loadObjectListFromFile"
QT_MOC_LITERAL(2340, 12), // "saveSurfFile"
QT_MOC_LITERAL(2353, 17), // "togglePolygonMode"
QT_MOC_LITERAL(2371, 14), // "toggleLineType"
QT_MOC_LITERAL(2386, 15), // "toggleObjShader"
QT_MOC_LITERAL(2402, 17), // "getLocalStartPosX"
QT_MOC_LITERAL(2420, 17), // "getLocalStartPosY"
QT_MOC_LITERAL(2438, 17), // "getLocalStartPosZ"
QT_MOC_LITERAL(2456, 15), // "getLocalEndPosX"
QT_MOC_LITERAL(2472, 15), // "getLocalEndPosY"
QT_MOC_LITERAL(2488, 15), // "getLocalEndPosZ"
QT_MOC_LITERAL(2504, 25), // "toggleNStrokeCurveDrawing"
QT_MOC_LITERAL(2530, 21), // "callCurveLineDetector"
QT_MOC_LITERAL(2552, 6), // "option"
QT_MOC_LITERAL(2559, 16), // "callLoadNewStack"
QT_MOC_LITERAL(2576, 15), // "callAutoTracers"
QT_MOC_LITERAL(2592, 13), // "callcheckmode"
QT_MOC_LITERAL(2606, 15), // "returncheckmode"
QT_MOC_LITERAL(2622, 14), // "setDragWinSize"
QT_MOC_LITERAL(2637, 5), // "csize"
QT_MOC_LITERAL(2643, 16), // "changeLineOption"
QT_MOC_LITERAL(2660, 22), // "changeVolShadingOption"
QT_MOC_LITERAL(2683, 22), // "changeObjShadingOption"
QT_MOC_LITERAL(2706, 15), // "toggleTexFilter"
QT_MOC_LITERAL(2722, 13), // "toggleTex2D3D"
QT_MOC_LITERAL(2736, 20), // "toggleTexCompression"
QT_MOC_LITERAL(2757, 15), // "toggleTexStream"
QT_MOC_LITERAL(2773, 12), // "toggleShader"
QT_MOC_LITERAL(2786, 10), // "showGLinfo"
QT_MOC_LITERAL(2797, 17), // "updateWithTriView"
QT_MOC_LITERAL(2815, 14), // "updateLandmark"
QT_MOC_LITERAL(2830, 15), // "updateImageData"
QT_MOC_LITERAL(2846, 10), // "reloadData"
QT_MOC_LITERAL(2857, 12), // "cancelSelect"
QT_MOC_LITERAL(2870, 10), // "setVoxSize"
QT_MOC_LITERAL(2881, 28), // "callStrokeCurveDrawingBBoxes"
QT_MOC_LITERAL(2910, 28), // "callStrokeRetypeMultiNeurons"
QT_MOC_LITERAL(2939, 28), // "callStrokeDeleteMultiNeurons"
QT_MOC_LITERAL(2968, 27), // "callStrokeSplitMultiNeurons"
QT_MOC_LITERAL(2996, 29), // "callStrokeConnectMultiNeurons"
QT_MOC_LITERAL(3026, 15), // "callShowSubtree"
QT_MOC_LITERAL(3042, 21), // "callShowConnectedSegs"
QT_MOC_LITERAL(3064, 19), // "callShowBreakPoints"
QT_MOC_LITERAL(3084, 28), // "callStrokeCurveDrawingGlobal"
QT_MOC_LITERAL(3113, 20), // "callDefine3DPolyline"
QT_MOC_LITERAL(3134, 27), // "callCreateMarkerNearestNode"
QT_MOC_LITERAL(3162, 34), // "callCreateSpecialMarkerNeares..."
QT_MOC_LITERAL(3197, 13), // "callGDTracing"
QT_MOC_LITERAL(3211, 16), // "callUpBrainAtlas"
QT_MOC_LITERAL(3228, 14), // "toggleEditMode"
QT_MOC_LITERAL(3243, 11), // "setEditMode"
QT_MOC_LITERAL(3255, 15), // "updateColorMode"
QT_MOC_LITERAL(3271, 4), // "mode"
QT_MOC_LITERAL(3276, 27) // "subtreeHighlightModeMonitor"

    },
    "V3dR_GLWidget\0signalInitControlValue\0"
    "\0signalVolumeCutRange\0signalOnlySurfaceObj\0"
    "changeVolumeTimePoint\0changeDispType_maxip\0"
    "changeDispType_minip\0changeDispType_alpha\0"
    "changeDispType_cs3d\0changeVolCompress\0"
    "changeEnableVolCompress\0changeEnableVolColormap\0"
    "changeTransparentSliderLabel\0"
    "changeEnableTransparentSlider\0"
    "changeMarkerSize\0xRotationChanged\0"
    "yRotationChanged\0zRotationChanged\0"
    "zoomChanged\0xShiftChanged\0yShiftChanged\0"
    "zShiftChanged\0changeEnableCut0Slider\0"
    "changeEnableCut1Slider\0changeCurrentTabCutPlane\0"
    "changeEnableTabCutPlane\0changeXCSSlider\0"
    "s\0changeYCSSlider\0changeZCSSlider\0"
    "changeFrontCut\0changeXCut0\0changeXCut1\0"
    "changeYCut0\0changeYCut1\0changeZCut0\0"
    "changeZCut1\0changeXClip0\0changeXClip1\0"
    "changeYClip0\0changeYClip1\0changeZClip0\0"
    "changeZClip1\0changeConfCut\0changeOrthoView\0"
    "b\0neuronShown\0QList<int>\0overlayList\0"
    "neuronShownAll\0neuronClearAll\0"
    "neuronIndexChanged\0index\0"
    "neuronClearAllSelections\0signalCallTerafly\0"
    "nDirect\0stillPaint\0setVolumeTimePoint\0"
    "t\0incVolumeTimePoint\0step\0setRenderMode_Mip\0"
    "useMin\0setRenderMode_Maxip\0"
    "setRenderMode_Minip\0setRenderMode_Alpha\0"
    "setRenderMode_Cs3d\0setCSTransparent\0"
    "setContrast\0setThickness\0setCurChannel\0"
    "setChannelR\0setChannelG\0setChannelB\0"
    "setVolCompress\0volumeColormapDialog\0"
    "surfaceSelectDialog\0curTab\0surfaceSelectTab\0"
    "surfaceDialogHide\0annotationDialog\0"
    "dataClass\0surfaceType\0doimage3DVRView\0"
    "bCanCoMode\0process3Dwindow\0show\0"
    "doimageVRView\0doclientView\0check_flag\0"
    "OnVRSocketDisConnected\0setXRotation\0"
    "angle\0setYRotation\0setZRotation\0"
    "resetRotation\0b_emit\0modelRotation\0"
    "xRotStep\0yRotStep\0zRotStep\0viewRotation\0"
    "absoluteRotPose\0doAbsoluteRot\0xRot\0"
    "yRot\0zRot\0lookAlong\0xLook\0yLook\0zLook\0"
    "resetAltCenter\0setAltCenter\0xC\0yC\0zC\0"
    "setZoom\0r\0setXShift\0setYShift\0setZShift\0"
    "resetZoomShift\0enableFrontSlice\0"
    "enableXSlice\0enableYSlice\0enableZSlice\0"
    "setFrontCut\0setXCut0\0setYCut0\0setZCut0\0"
    "setXCut1\0setYCut1\0setZCut1\0setXCS\0"
    "setYCS\0setZCS\0setXClip0\0setYClip0\0"
    "setZClip0\0setXClip1\0setYClip1\0setZClip1\0"
    "setXCutLock\0setYCutLock\0setZCutLock\0"
    "setConfCut\0confidenceDialog\0enableShowAxes\0"
    "enableShowBoundingBox\0enableClipBoundingBox\0"
    "enableOrthoView\0setBackgroundColor\0"
    "switchBackgroundColor\0setBright\0"
    "setShowMarkers\0setShowSurfObjects\0"
    "setXYZSurfure\0enableMarkerLabel\0"
    "setMarkerSize\0enableSurfStretch\0"
    "enableSurfZLock\0toggleCellName\0"
    "toggleMarkerName\0createSurfCurrentR\0"
    "createSurfCurrentG\0createSurfCurrentB\0"
    "loadObjectFromFile\0url\0loadObjectListFromFile\0"
    "saveSurfFile\0togglePolygonMode\0"
    "toggleLineType\0toggleObjShader\0"
    "getLocalStartPosX\0getLocalStartPosY\0"
    "getLocalStartPosZ\0getLocalEndPosX\0"
    "getLocalEndPosY\0getLocalEndPosZ\0"
    "toggleNStrokeCurveDrawing\0"
    "callCurveLineDetector\0option\0"
    "callLoadNewStack\0callAutoTracers\0"
    "callcheckmode\0returncheckmode\0"
    "setDragWinSize\0csize\0changeLineOption\0"
    "changeVolShadingOption\0changeObjShadingOption\0"
    "toggleTexFilter\0toggleTex2D3D\0"
    "toggleTexCompression\0toggleTexStream\0"
    "toggleShader\0showGLinfo\0updateWithTriView\0"
    "updateLandmark\0updateImageData\0"
    "reloadData\0cancelSelect\0setVoxSize\0"
    "callStrokeCurveDrawingBBoxes\0"
    "callStrokeRetypeMultiNeurons\0"
    "callStrokeDeleteMultiNeurons\0"
    "callStrokeSplitMultiNeurons\0"
    "callStrokeConnectMultiNeurons\0"
    "callShowSubtree\0callShowConnectedSegs\0"
    "callShowBreakPoints\0callStrokeCurveDrawingGlobal\0"
    "callDefine3DPolyline\0callCreateMarkerNearestNode\0"
    "callCreateSpecialMarkerNearestNode\0"
    "callGDTracing\0callUpBrainAtlas\0"
    "toggleEditMode\0setEditMode\0updateColorMode\0"
    "mode\0subtreeHighlightModeMonitor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_V3dR_GLWidget[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
     203,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      49,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0, 1232,    2, 0x06,    0 /* Public */,
       3,    0, 1233,    2, 0x06,    1 /* Public */,
       4,    0, 1234,    2, 0x06,    2 /* Public */,
       5,    1, 1235,    2, 0x06,    3 /* Public */,
       6,    1, 1238,    2, 0x06,    5 /* Public */,
       7,    1, 1241,    2, 0x06,    7 /* Public */,
       8,    1, 1244,    2, 0x06,    9 /* Public */,
       9,    1, 1247,    2, 0x06,   11 /* Public */,
      10,    1, 1250,    2, 0x06,   13 /* Public */,
      11,    1, 1253,    2, 0x06,   15 /* Public */,
      12,    1, 1256,    2, 0x06,   17 /* Public */,
      13,    1, 1259,    2, 0x06,   19 /* Public */,
      14,    1, 1262,    2, 0x06,   21 /* Public */,
      15,    1, 1265,    2, 0x06,   23 /* Public */,
      16,    1, 1268,    2, 0x06,   25 /* Public */,
      17,    1, 1271,    2, 0x06,   27 /* Public */,
      18,    1, 1274,    2, 0x06,   29 /* Public */,
      19,    1, 1277,    2, 0x06,   31 /* Public */,
      20,    1, 1280,    2, 0x06,   33 /* Public */,
      21,    1, 1283,    2, 0x06,   35 /* Public */,
      22,    1, 1286,    2, 0x06,   37 /* Public */,
      23,    1, 1289,    2, 0x06,   39 /* Public */,
      24,    1, 1292,    2, 0x06,   41 /* Public */,
      25,    1, 1295,    2, 0x06,   43 /* Public */,
      26,    2, 1298,    2, 0x06,   45 /* Public */,
      27,    1, 1303,    2, 0x06,   48 /* Public */,
      29,    1, 1306,    2, 0x06,   50 /* Public */,
      30,    1, 1309,    2, 0x06,   52 /* Public */,
      31,    1, 1312,    2, 0x06,   54 /* Public */,
      32,    1, 1315,    2, 0x06,   56 /* Public */,
      33,    1, 1318,    2, 0x06,   58 /* Public */,
      34,    1, 1321,    2, 0x06,   60 /* Public */,
      35,    1, 1324,    2, 0x06,   62 /* Public */,
      36,    1, 1327,    2, 0x06,   64 /* Public */,
      37,    1, 1330,    2, 0x06,   66 /* Public */,
      38,    1, 1333,    2, 0x06,   68 /* Public */,
      39,    1, 1336,    2, 0x06,   70 /* Public */,
      40,    1, 1339,    2, 0x06,   72 /* Public */,
      41,    1, 1342,    2, 0x06,   74 /* Public */,
      42,    1, 1345,    2, 0x06,   76 /* Public */,
      43,    1, 1348,    2, 0x06,   78 /* Public */,
      44,    1, 1351,    2, 0x06,   80 /* Public */,
      45,    1, 1354,    2, 0x06,   82 /* Public */,
      47,    1, 1357,    2, 0x06,   84 /* Public */,
      50,    1, 1360,    2, 0x06,   86 /* Public */,
      51,    0, 1363,    2, 0x06,   88 /* Public */,
      52,    1, 1364,    2, 0x06,   89 /* Public */,
      54,    0, 1367,    2, 0x06,   91 /* Public */,
      55,    1, 1368,    2, 0x06,   92 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      57,    0, 1371,    2, 0x0a,   94 /* Public */,
      58,    1, 1372,    2, 0x0a,   95 /* Public */,
      60,    1, 1375,    2, 0x0a,   97 /* Public */,
      62,    2, 1378,    2, 0x0a,   99 /* Public */,
      62,    1, 1383,    2, 0x2a,  102 /* Public | MethodCloned */,
      64,    1, 1386,    2, 0x0a,  104 /* Public */,
      65,    1, 1389,    2, 0x0a,  106 /* Public */,
      66,    1, 1392,    2, 0x0a,  108 /* Public */,
      67,    1, 1395,    2, 0x0a,  110 /* Public */,
      68,    1, 1398,    2, 0x0a,  112 /* Public */,
      69,    1, 1401,    2, 0x0a,  114 /* Public */,
      70,    1, 1404,    2, 0x0a,  116 /* Public */,
      71,    1, 1407,    2, 0x0a,  118 /* Public */,
      72,    1, 1410,    2, 0x0a,  120 /* Public */,
      73,    1, 1413,    2, 0x0a,  122 /* Public */,
      74,    1, 1416,    2, 0x0a,  124 /* Public */,
      75,    1, 1419,    2, 0x0a,  126 /* Public */,
      76,    0, 1422,    2, 0x0a,  128 /* Public */,
      77,    1, 1423,    2, 0x0a,  129 /* Public */,
      77,    0, 1426,    2, 0x2a,  131 /* Public | MethodCloned */,
      79,    1, 1427,    2, 0x0a,  132 /* Public */,
      79,    0, 1430,    2, 0x2a,  134 /* Public | MethodCloned */,
      80,    0, 1431,    2, 0x0a,  135 /* Public */,
      81,    3, 1432,    2, 0x0a,  136 /* Public */,
      84,    1, 1439,    2, 0x0a,  140 /* Public */,
      84,    0, 1442,    2, 0x2a,  142 /* Public | MethodCloned */,
      86,    1, 1443,    2, 0x0a,  143 /* Public */,
      88,    1, 1446,    2, 0x0a,  145 /* Public */,
      88,    0, 1449,    2, 0x2a,  147 /* Public | MethodCloned */,
      89,    1, 1450,    2, 0x0a,  148 /* Public */,
      89,    0, 1453,    2, 0x2a,  150 /* Public | MethodCloned */,
      91,    0, 1454,    2, 0x0a,  151 /* Public */,
      92,    1, 1455,    2, 0x0a,  152 /* Public */,
      94,    1, 1458,    2, 0x0a,  154 /* Public */,
      95,    1, 1461,    2, 0x0a,  156 /* Public */,
      96,    1, 1464,    2, 0x0a,  158 /* Public */,
      96,    0, 1467,    2, 0x2a,  160 /* Public | MethodCloned */,
      98,    3, 1468,    2, 0x0a,  161 /* Public */,
     102,    3, 1475,    2, 0x0a,  165 /* Public */,
     103,    0, 1482,    2, 0x0a,  169 /* Public */,
     104,    3, 1483,    2, 0x0a,  170 /* Public */,
     108,    3, 1490,    2, 0x0a,  174 /* Public */,
     112,    0, 1497,    2, 0x0a,  178 /* Public */,
     113,    3, 1498,    2, 0x0a,  179 /* Public */,
     117,    1, 1505,    2, 0x0a,  183 /* Public */,
     119,    1, 1508,    2, 0x0a,  185 /* Public */,
     120,    1, 1511,    2, 0x0a,  187 /* Public */,
     121,    1, 1514,    2, 0x0a,  189 /* Public */,
     122,    0, 1517,    2, 0x0a,  191 /* Public */,
     119,    1, 1518,    2, 0x0a,  192 /* Public */,
     120,    1, 1521,    2, 0x0a,  194 /* Public */,
     121,    1, 1524,    2, 0x0a,  196 /* Public */,
     117,    1, 1527,    2, 0x0a,  198 /* Public */,
     104,    3, 1530,    2, 0x0a,  200 /* Public */,
      92,    1, 1537,    2, 0x0a,  204 /* Public */,
      94,    1, 1540,    2, 0x0a,  206 /* Public */,
      95,    1, 1543,    2, 0x0a,  208 /* Public */,
     123,    1, 1546,    2, 0x0a,  210 /* Public */,
     124,    1, 1549,    2, 0x0a,  212 /* Public */,
     125,    1, 1552,    2, 0x0a,  214 /* Public */,
     126,    1, 1555,    2, 0x0a,  216 /* Public */,
     127,    1, 1558,    2, 0x0a,  218 /* Public */,
     128,    1, 1561,    2, 0x0a,  220 /* Public */,
     129,    1, 1564,    2, 0x0a,  222 /* Public */,
     130,    1, 1567,    2, 0x0a,  224 /* Public */,
     131,    1, 1570,    2, 0x0a,  226 /* Public */,
     132,    1, 1573,    2, 0x0a,  228 /* Public */,
     133,    1, 1576,    2, 0x0a,  230 /* Public */,
     134,    1, 1579,    2, 0x0a,  232 /* Public */,
     135,    1, 1582,    2, 0x0a,  234 /* Public */,
     136,    1, 1585,    2, 0x0a,  236 /* Public */,
     137,    1, 1588,    2, 0x0a,  238 /* Public */,
     138,    1, 1591,    2, 0x0a,  240 /* Public */,
     139,    1, 1594,    2, 0x0a,  242 /* Public */,
     140,    1, 1597,    2, 0x0a,  244 /* Public */,
     141,    1, 1600,    2, 0x0a,  246 /* Public */,
     142,    1, 1603,    2, 0x0a,  248 /* Public */,
     143,    1, 1606,    2, 0x0a,  250 /* Public */,
     144,    1, 1609,    2, 0x0a,  252 /* Public */,
     145,    1, 1612,    2, 0x0a,  254 /* Public */,
     146,    1, 1615,    2, 0x0a,  256 /* Public */,
     147,    0, 1618,    2, 0x0a,  258 /* Public */,
     148,    1, 1619,    2, 0x0a,  259 /* Public */,
     149,    1, 1622,    2, 0x0a,  261 /* Public */,
     150,    1, 1625,    2, 0x0a,  263 /* Public */,
     151,    1, 1628,    2, 0x0a,  265 /* Public */,
     152,    0, 1631,    2, 0x0a,  267 /* Public */,
     153,    0, 1632,    2, 0x0a,  268 /* Public */,
     154,    0, 1633,    2, 0x0a,  269 /* Public */,
     155,    1, 1634,    2, 0x0a,  270 /* Public */,
     156,    1, 1637,    2, 0x0a,  272 /* Public */,
     157,    1, 1640,    2, 0x0a,  274 /* Public */,
     158,    1, 1643,    2, 0x0a,  276 /* Public */,
     159,    1, 1646,    2, 0x0a,  278 /* Public */,
     160,    1, 1649,    2, 0x0a,  280 /* Public */,
     161,    1, 1652,    2, 0x0a,  282 /* Public */,
     162,    0, 1655,    2, 0x0a,  284 /* Public */,
     163,    0, 1656,    2, 0x0a,  285 /* Public */,
     164,    0, 1657,    2, 0x0a,  286 /* Public */,
     165,    0, 1658,    2, 0x0a,  287 /* Public */,
     166,    0, 1659,    2, 0x0a,  288 /* Public */,
     167,    1, 1660,    2, 0x0a,  289 /* Public */,
     167,    0, 1663,    2, 0x2a,  291 /* Public | MethodCloned */,
     169,    0, 1664,    2, 0x0a,  292 /* Public */,
     170,    0, 1665,    2, 0x0a,  293 /* Public */,
     171,    0, 1666,    2, 0x0a,  294 /* Public */,
     172,    0, 1667,    2, 0x0a,  295 /* Public */,
     173,    0, 1668,    2, 0x0a,  296 /* Public */,
     174,    0, 1669,    2, 0x0a,  297 /* Public */,
     175,    0, 1670,    2, 0x0a,  298 /* Public */,
     176,    0, 1671,    2, 0x0a,  299 /* Public */,
     177,    0, 1672,    2, 0x0a,  300 /* Public */,
     178,    0, 1673,    2, 0x0a,  301 /* Public */,
     179,    0, 1674,    2, 0x0a,  302 /* Public */,
     180,    0, 1675,    2, 0x0a,  303 /* Public */,
     181,    1, 1676,    2, 0x0a,  304 /* Public */,
     183,    0, 1679,    2, 0x0a,  306 /* Public */,
     184,    0, 1680,    2, 0x0a,  307 /* Public */,
     185,    0, 1681,    2, 0x0a,  308 /* Public */,
     186,    0, 1682,    2, 0x0a,  309 /* Public */,
     187,    1, 1683,    2, 0x0a,  310 /* Public */,
     189,    0, 1686,    2, 0x0a,  312 /* Public */,
     190,    0, 1687,    2, 0x0a,  313 /* Public */,
     191,    0, 1688,    2, 0x0a,  314 /* Public */,
     192,    0, 1689,    2, 0x0a,  315 /* Public */,
     193,    0, 1690,    2, 0x0a,  316 /* Public */,
     194,    0, 1691,    2, 0x0a,  317 /* Public */,
     195,    0, 1692,    2, 0x0a,  318 /* Public */,
     196,    0, 1693,    2, 0x0a,  319 /* Public */,
     197,    0, 1694,    2, 0x0a,  320 /* Public */,
     198,    0, 1695,    2, 0x0a,  321 /* Public */,
     199,    0, 1696,    2, 0x0a,  322 /* Public */,
     200,    0, 1697,    2, 0x0a,  323 /* Public */,
     201,    0, 1698,    2, 0x0a,  324 /* Public */,
     202,    0, 1699,    2, 0x0a,  325 /* Public */,
     203,    0, 1700,    2, 0x0a,  326 /* Public */,
     204,    0, 1701,    2, 0x0a,  327 /* Public */,
     205,    0, 1702,    2, 0x0a,  328 /* Public */,
     206,    0, 1703,    2, 0x0a,  329 /* Public */,
     207,    0, 1704,    2, 0x0a,  330 /* Public */,
     208,    0, 1705,    2, 0x0a,  331 /* Public */,
     209,    0, 1706,    2, 0x0a,  332 /* Public */,
     210,    0, 1707,    2, 0x0a,  333 /* Public */,
     211,    0, 1708,    2, 0x0a,  334 /* Public */,
     212,    0, 1709,    2, 0x0a,  335 /* Public */,
     213,    0, 1710,    2, 0x0a,  336 /* Public */,
     214,    0, 1711,    2, 0x0a,  337 /* Public */,
     215,    0, 1712,    2, 0x0a,  338 /* Public */,
     216,    0, 1713,    2, 0x0a,  339 /* Public */,
     217,    0, 1714,    2, 0x0a,  340 /* Public */,
     218,    0, 1715,    2, 0x0a,  341 /* Public */,
     219,    0, 1716,    2, 0x0a,  342 /* Public */,
     220,    1, 1717,    2, 0x0a,  343 /* Public */,
     222,    0, 1720,    2, 0x0a,  345 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, 0x80000000 | 48,   49,
    QMetaType::Void, 0x80000000 | 48,   49,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   53,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   56,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int,   59,
    QMetaType::Void, QMetaType::Float,   61,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   46,   63,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   78,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   78,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   82,   83,   53,
    QMetaType::Void, QMetaType::Bool,   85,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void, QMetaType::Bool,   85,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   90,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   93,
    QMetaType::Void, QMetaType::Int,   93,
    QMetaType::Void, QMetaType::Int,   93,
    QMetaType::Void, QMetaType::Bool,   97,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   99,  100,  101,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   99,  100,  101,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,  105,  106,  107,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,  109,  110,  111,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,  114,  115,  116,
    QMetaType::Void, QMetaType::Int,  118,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   28,
    QMetaType::Void, QMetaType::Float,   28,
    QMetaType::Void, QMetaType::Float,   28,
    QMetaType::Void, QMetaType::Float,  118,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,  105,  106,  107,
    QMetaType::Void, QMetaType::Float,   93,
    QMetaType::Void, QMetaType::Float,   93,
    QMetaType::Void, QMetaType::Float,   93,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  168,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  182,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  188,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  221,
    QMetaType::Void,

       0        // eod
};

void V3dR_GLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<V3dR_GLWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalInitControlValue(); break;
        case 1: _t->signalVolumeCutRange(); break;
        case 2: _t->signalOnlySurfaceObj(); break;
        case 3: _t->changeVolumeTimePoint((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->changeDispType_maxip((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->changeDispType_minip((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->changeDispType_alpha((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->changeDispType_cs3d((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->changeVolCompress((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->changeEnableVolCompress((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->changeEnableVolColormap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->changeTransparentSliderLabel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->changeEnableTransparentSlider((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->changeMarkerSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->xRotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->yRotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->zRotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->zoomChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->xShiftChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->yShiftChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->zShiftChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->changeEnableCut0Slider((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->changeEnableCut1Slider((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->changeCurrentTabCutPlane((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->changeEnableTabCutPlane((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 25: _t->changeXCSSlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->changeYCSSlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->changeZCSSlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->changeFrontCut((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->changeXCut0((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->changeXCut1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->changeYCut0((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->changeYCut1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->changeZCut0((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->changeZCut1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->changeXClip0((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->changeXClip1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->changeYClip0((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->changeYClip1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->changeZClip0((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->changeZClip1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->changeConfCut((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->changeOrthoView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->neuronShown((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 44: _t->neuronShownAll((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 45: _t->neuronClearAll(); break;
        case 46: _t->neuronIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->neuronClearAllSelections(); break;
        case 48: _t->signalCallTerafly((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->stillPaint(); break;
        case 50: { int _r = _t->setVolumeTimePoint((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 51: _t->incVolumeTimePoint((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 52: _t->setRenderMode_Mip((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 53: _t->setRenderMode_Mip((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->setRenderMode_Maxip((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->setRenderMode_Minip((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: _t->setRenderMode_Alpha((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: _t->setRenderMode_Cs3d((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 58: _t->setCSTransparent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 59: _t->setContrast((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 60: _t->setThickness((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 61: _t->setCurChannel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 62: _t->setChannelR((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 63: _t->setChannelG((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 64: _t->setChannelB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 65: _t->setVolCompress((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 66: _t->volumeColormapDialog(); break;
        case 67: _t->surfaceSelectDialog((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 68: _t->surfaceSelectDialog(); break;
        case 69: _t->surfaceSelectTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 70: _t->surfaceSelectTab(); break;
        case 71: _t->surfaceDialogHide(); break;
        case 72: _t->annotationDialog((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 73: _t->doimage3DVRView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 74: _t->doimage3DVRView(); break;
        case 75: _t->process3Dwindow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 76: _t->doimageVRView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 77: _t->doimageVRView(); break;
        case 78: _t->doclientView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 79: _t->doclientView(); break;
        case 80: _t->OnVRSocketDisConnected(); break;
        case 81: _t->setXRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 82: _t->setYRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 83: _t->setZRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 84: _t->resetRotation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 85: _t->resetRotation(); break;
        case 86: _t->modelRotation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 87: _t->viewRotation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 88: _t->absoluteRotPose(); break;
        case 89: _t->doAbsoluteRot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 90: _t->lookAlong((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 91: _t->resetAltCenter(); break;
        case 92: _t->setAltCenter((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 93: _t->setZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 94: _t->setXShift((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 95: _t->setYShift((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 96: _t->setZShift((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 97: _t->resetZoomShift(); break;
        case 98: _t->setXShift((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 99: _t->setYShift((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 100: _t->setZShift((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 101: _t->setZoom((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 102: _t->doAbsoluteRot((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 103: _t->setXRotation((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 104: _t->setYRotation((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 105: _t->setZRotation((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 106: _t->enableFrontSlice((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 107: _t->enableXSlice((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 108: _t->enableYSlice((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 109: _t->enableZSlice((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 110: _t->setFrontCut((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 111: _t->setXCut0((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 112: _t->setYCut0((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 113: _t->setZCut0((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 114: _t->setXCut1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 115: _t->setYCut1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 116: _t->setZCut1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 117: _t->setXCS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 118: _t->setYCS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 119: _t->setZCS((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 120: _t->setXClip0((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 121: _t->setYClip0((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 122: _t->setZClip0((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 123: _t->setXClip1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 124: _t->setYClip1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 125: _t->setZClip1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 126: _t->setXCutLock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 127: _t->setYCutLock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 128: _t->setZCutLock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 129: _t->setConfCut((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 130: _t->confidenceDialog(); break;
        case 131: _t->enableShowAxes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 132: _t->enableShowBoundingBox((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 133: _t->enableClipBoundingBox((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 134: _t->enableOrthoView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 135: _t->setBackgroundColor(); break;
        case 136: _t->switchBackgroundColor(); break;
        case 137: _t->setBright(); break;
        case 138: _t->setShowMarkers((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 139: _t->setShowSurfObjects((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 140: _t->setXYZSurfure((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 141: _t->enableMarkerLabel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 142: _t->setMarkerSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 143: _t->enableSurfStretch((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 144: _t->enableSurfZLock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 145: _t->toggleCellName(); break;
        case 146: _t->toggleMarkerName(); break;
        case 147: _t->createSurfCurrentR(); break;
        case 148: _t->createSurfCurrentG(); break;
        case 149: _t->createSurfCurrentB(); break;
        case 150: _t->loadObjectFromFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 151: _t->loadObjectFromFile(); break;
        case 152: _t->loadObjectListFromFile(); break;
        case 153: _t->saveSurfFile(); break;
        case 154: _t->togglePolygonMode(); break;
        case 155: _t->toggleLineType(); break;
        case 156: _t->toggleObjShader(); break;
        case 157: { int _r = _t->getLocalStartPosX();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 158: { int _r = _t->getLocalStartPosY();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 159: { int _r = _t->getLocalStartPosZ();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 160: { int _r = _t->getLocalEndPosX();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 161: { int _r = _t->getLocalEndPosY();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 162: { int _r = _t->getLocalEndPosZ();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 163: _t->toggleNStrokeCurveDrawing(); break;
        case 164: _t->callCurveLineDetector((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 165: _t->callLoadNewStack(); break;
        case 166: _t->callAutoTracers(); break;
        case 167: _t->callcheckmode(); break;
        case 168: _t->returncheckmode(); break;
        case 169: _t->setDragWinSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 170: _t->changeLineOption(); break;
        case 171: _t->changeVolShadingOption(); break;
        case 172: _t->changeObjShadingOption(); break;
        case 173: _t->toggleTexFilter(); break;
        case 174: _t->toggleTex2D3D(); break;
        case 175: _t->toggleTexCompression(); break;
        case 176: _t->toggleTexStream(); break;
        case 177: _t->toggleShader(); break;
        case 178: _t->showGLinfo(); break;
        case 179: _t->updateWithTriView(); break;
        case 180: _t->updateLandmark(); break;
        case 181: _t->updateImageData(); break;
        case 182: _t->reloadData(); break;
        case 183: _t->cancelSelect(); break;
        case 184: _t->setVoxSize(); break;
        case 185: _t->callStrokeCurveDrawingBBoxes(); break;
        case 186: _t->callStrokeRetypeMultiNeurons(); break;
        case 187: _t->callStrokeDeleteMultiNeurons(); break;
        case 188: _t->callStrokeSplitMultiNeurons(); break;
        case 189: _t->callStrokeConnectMultiNeurons(); break;
        case 190: _t->callShowSubtree(); break;
        case 191: _t->callShowConnectedSegs(); break;
        case 192: _t->callShowBreakPoints(); break;
        case 193: _t->callStrokeCurveDrawingGlobal(); break;
        case 194: _t->callDefine3DPolyline(); break;
        case 195: _t->callCreateMarkerNearestNode(); break;
        case 196: _t->callCreateSpecialMarkerNearestNode(); break;
        case 197: _t->callGDTracing(); break;
        case 198: _t->callUpBrainAtlas(); break;
        case 199: _t->toggleEditMode(); break;
        case 200: _t->setEditMode(); break;
        case 201: _t->updateColorMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 202: _t->subtreeHighlightModeMonitor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (V3dR_GLWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::signalInitControlValue)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::signalVolumeCutRange)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::signalOnlySurfaceObj)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeVolumeTimePoint)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeDispType_maxip)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeDispType_minip)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeDispType_alpha)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeDispType_cs3d)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeVolCompress)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeEnableVolCompress)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeEnableVolColormap)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeTransparentSliderLabel)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeEnableTransparentSlider)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeMarkerSize)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::xRotationChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::yRotationChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::zRotationChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::zoomChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::xShiftChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::yShiftChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::zShiftChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeEnableCut0Slider)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeEnableCut1Slider)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeCurrentTabCutPlane)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeEnableTabCutPlane)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeXCSSlider)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeYCSSlider)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeZCSSlider)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeFrontCut)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeXCut0)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeXCut1)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeYCut0)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeYCut1)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeZCut0)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeZCut1)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeXClip0)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeXClip1)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeYClip0)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeYClip1)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeZClip0)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeZClip1)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeConfCut)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::changeOrthoView)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(const QList<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::neuronShown)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(const QList<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::neuronShownAll)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::neuronClearAll)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::neuronIndexChanged)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::neuronClearAllSelections)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (V3dR_GLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V3dR_GLWidget::signalCallTerafly)) {
                *result = 48;
                return;
            }
        }
    }
}

const QMetaObject V3dR_GLWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_meta_stringdata_V3dR_GLWidget.offsetsAndSize,
    qt_meta_data_V3dR_GLWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_V3dR_GLWidget_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QList<int>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QList<int>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *V3dR_GLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *V3dR_GLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_V3dR_GLWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QOpenGLFunctions"))
        return static_cast< QOpenGLFunctions*>(this);
    if (!strcmp(_clname, "View3DControl"))
        return static_cast< View3DControl*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int V3dR_GLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 203)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 203;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 203)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 203;
    }
    return _id;
}

// SIGNAL 0
void V3dR_GLWidget::signalInitControlValue()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void V3dR_GLWidget::signalVolumeCutRange()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void V3dR_GLWidget::signalOnlySurfaceObj()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void V3dR_GLWidget::changeVolumeTimePoint(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void V3dR_GLWidget::changeDispType_maxip(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void V3dR_GLWidget::changeDispType_minip(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void V3dR_GLWidget::changeDispType_alpha(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void V3dR_GLWidget::changeDispType_cs3d(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void V3dR_GLWidget::changeVolCompress(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void V3dR_GLWidget::changeEnableVolCompress(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void V3dR_GLWidget::changeEnableVolColormap(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void V3dR_GLWidget::changeTransparentSliderLabel(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void V3dR_GLWidget::changeEnableTransparentSlider(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void V3dR_GLWidget::changeMarkerSize(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void V3dR_GLWidget::xRotationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void V3dR_GLWidget::yRotationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void V3dR_GLWidget::zRotationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void V3dR_GLWidget::zoomChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void V3dR_GLWidget::xShiftChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void V3dR_GLWidget::yShiftChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void V3dR_GLWidget::zShiftChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void V3dR_GLWidget::changeEnableCut0Slider(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void V3dR_GLWidget::changeEnableCut1Slider(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void V3dR_GLWidget::changeCurrentTabCutPlane(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void V3dR_GLWidget::changeEnableTabCutPlane(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void V3dR_GLWidget::changeXCSSlider(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void V3dR_GLWidget::changeYCSSlider(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void V3dR_GLWidget::changeZCSSlider(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void V3dR_GLWidget::changeFrontCut(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void V3dR_GLWidget::changeXCut0(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void V3dR_GLWidget::changeXCut1(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void V3dR_GLWidget::changeYCut0(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void V3dR_GLWidget::changeYCut1(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void V3dR_GLWidget::changeZCut0(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void V3dR_GLWidget::changeZCut1(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void V3dR_GLWidget::changeXClip0(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void V3dR_GLWidget::changeXClip1(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void V3dR_GLWidget::changeYClip0(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void V3dR_GLWidget::changeYClip1(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void V3dR_GLWidget::changeZClip0(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void V3dR_GLWidget::changeZClip1(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void V3dR_GLWidget::changeConfCut(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void V3dR_GLWidget::changeOrthoView(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void V3dR_GLWidget::neuronShown(const QList<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void V3dR_GLWidget::neuronShownAll(const QList<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void V3dR_GLWidget::neuronClearAll()
{
    QMetaObject::activate(this, &staticMetaObject, 45, nullptr);
}

// SIGNAL 46
void V3dR_GLWidget::neuronIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void V3dR_GLWidget::neuronClearAllSelections()
{
    QMetaObject::activate(this, &staticMetaObject, 47, nullptr);
}

// SIGNAL 48
void V3dR_GLWidget::signalCallTerafly(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
