/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[280];
    char stringdata0[3570];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 22), // "triviewUpdateTriggered"
QT_MOC_LITERAL(34, 0), // ""
QT_MOC_LITERAL(35, 18), // "imageLoaded2Plugin"
QT_MOC_LITERAL(54, 7), // "newFile"
QT_MOC_LITERAL(62, 4), // "open"
QT_MOC_LITERAL(67, 10), // "openWebUrl"
QT_MOC_LITERAL(78, 17), // "func_open_terafly"
QT_MOC_LITERAL(96, 23), // "func_open_teraconverter"
QT_MOC_LITERAL(120, 21), // "func_open_neuron_game"
QT_MOC_LITERAL(142, 16), // "addCustomToolbar"
QT_MOC_LITERAL(159, 23), // "finishedLoadingWebImage"
QT_MOC_LITERAL(183, 3), // "url"
QT_MOC_LITERAL(187, 8), // "fileName"
QT_MOC_LITERAL(196, 11), // "b_cacheFile"
QT_MOC_LITERAL(208, 19), // "b_forceopen3dviewer"
QT_MOC_LITERAL(228, 15), // "checkForUpdates"
QT_MOC_LITERAL(244, 18), // "b_informOnNoUpdate"
QT_MOC_LITERAL(263, 19), // "generateVersionInfo"
QT_MOC_LITERAL(283, 9), // "atlasView"
QT_MOC_LITERAL(293, 4), // "save"
QT_MOC_LITERAL(298, 6), // "saveAs"
QT_MOC_LITERAL(305, 3), // "cut"
QT_MOC_LITERAL(309, 4), // "copy"
QT_MOC_LITERAL(314, 5), // "paste"
QT_MOC_LITERAL(320, 14), // "openRecentFile"
QT_MOC_LITERAL(335, 11), // "updateMenus"
QT_MOC_LITERAL(347, 16), // "updatePluginMenu"
QT_MOC_LITERAL(364, 14), // "updateModeMenu"
QT_MOC_LITERAL(379, 16), // "updateWindowMenu"
QT_MOC_LITERAL(396, 4), // "exit"
QT_MOC_LITERAL(401, 20), // "updateProcessingMenu"
QT_MOC_LITERAL(422, 14), // "createMdiChild"
QT_MOC_LITERAL(437, 12), // "XFormWidget*"
QT_MOC_LITERAL(450, 14), // "activeMdiChild"
QT_MOC_LITERAL(465, 12), // "findMdiChild"
QT_MOC_LITERAL(478, 11), // "loadV3DFile"
QT_MOC_LITERAL(490, 8), // "filename"
QT_MOC_LITERAL(499, 21), // "b_putinrecentfilelist"
QT_MOC_LITERAL(521, 10), // "loadV3DUrl"
QT_MOC_LITERAL(532, 16), // "b_cacheLocalFile"
QT_MOC_LITERAL(549, 24), // "func_procLandmarkManager"
QT_MOC_LITERAL(574, 20), // "func_procAtlasViewer"
QT_MOC_LITERAL(595, 17), // "func_proc3DViewer"
QT_MOC_LITERAL(613, 25), // "func_proc3DLocalRoiViewer"
QT_MOC_LITERAL(639, 17), // "func_procSettings"
QT_MOC_LITERAL(657, 24), // "func_proc_plugin_manager"
QT_MOC_LITERAL(682, 33), // "func_procIO_export_to_vano_fo..."
QT_MOC_LITERAL(716, 27), // "func_procIO_export_to_movie"
QT_MOC_LITERAL(744, 41), // "func_procIO_export_landmark_t..."
QT_MOC_LITERAL(786, 34), // "func_procIO_export_landmark_t..."
QT_MOC_LITERAL(821, 38), // "func_procIO_export_tracedneur..."
QT_MOC_LITERAL(860, 23), // "import_GeneralImageFile"
QT_MOC_LITERAL(884, 12), // "import_Leica"
QT_MOC_LITERAL(897, 34), // "func_procIO_import_atlas_imgf..."
QT_MOC_LITERAL(932, 47), // "func_procPC_Atlas_view_atlas_..."
QT_MOC_LITERAL(980, 29), // "func_procGeneral_rotate_paxis"
QT_MOC_LITERAL(1010, 29), // "func_procGeneral_rotate_angle"
QT_MOC_LITERAL(1040, 21), // "func_procGeneral_flip"
QT_MOC_LITERAL(1062, 35), // "func_procGeneral_clear_all_la..."
QT_MOC_LITERAL(1098, 38), // "func_procGeneral_toggle_landm..."
QT_MOC_LITERAL(1137, 33), // "func_procGeneral_clear_connec..."
QT_MOC_LITERAL(1171, 39), // "func_procGeneral_rescale_land..."
QT_MOC_LITERAL(1211, 37), // "func_procGeneral_automarker_e..."
QT_MOC_LITERAL(1249, 31), // "func_procGeneral_automarker_roi"
QT_MOC_LITERAL(1281, 31), // "func_procGeneral_split_channels"
QT_MOC_LITERAL(1313, 34), // "func_procGeneral_extract_a_ch..."
QT_MOC_LITERAL(1348, 37), // "func_procGeneral_crop_image_m..."
QT_MOC_LITERAL(1386, 30), // "func_procGeneral_crop_bbox_roi"
QT_MOC_LITERAL(1417, 25), // "func_procGeneral_mask_roi"
QT_MOC_LITERAL(1443, 31), // "func_procGeneral_mask_nonroi_xy"
QT_MOC_LITERAL(1475, 29), // "func_procGeneral_mask_channel"
QT_MOC_LITERAL(1505, 26), // "func_procGeneral_clear_roi"
QT_MOC_LITERAL(1532, 31), // "func_procGeneral_resample_image"
QT_MOC_LITERAL(1564, 31), // "func_procGeneral_projection_max"
QT_MOC_LITERAL(1596, 28), // "func_procGeneral_blend_image"
QT_MOC_LITERAL(1625, 29), // "func_procGeneral_stitch_image"
QT_MOC_LITERAL(1655, 34), // "func_procGeneral_display_hist..."
QT_MOC_LITERAL(1690, 34), // "func_procGeneral_linear_adjus..."
QT_MOC_LITERAL(1725, 39), // "func_procGeneral_histogram_eq..."
QT_MOC_LITERAL(1765, 34), // "func_procGeneral_intensity_re..."
QT_MOC_LITERAL(1800, 36), // "func_procGeneral_intensity_th..."
QT_MOC_LITERAL(1837, 35), // "func_procGeneral_intensity_bi..."
QT_MOC_LITERAL(1873, 39), // "func_procGeneral_intensity_up..."
QT_MOC_LITERAL(1913, 29), // "func_procGeneral_color_invert"
QT_MOC_LITERAL(1943, 30), // "func_procGeneral_16bit_to_8bit"
QT_MOC_LITERAL(1974, 30), // "func_procGeneral_32bit_to_8bit"
QT_MOC_LITERAL(2005, 37), // "func_procGeneral_scaleandconv..."
QT_MOC_LITERAL(2043, 46), // "func_procGeneral_scaleandconv..."
QT_MOC_LITERAL(2090, 31), // "func_procGeneral_indexedimg2rgb"
QT_MOC_LITERAL(2122, 27), // "func_procGeneral_save_image"
QT_MOC_LITERAL(2150, 32), // "func_procElongated_randomSeeding"
QT_MOC_LITERAL(2183, 30), // "func_procElongated_minSpanTree"
QT_MOC_LITERAL(2214, 30), // "func_procElongated_mstDiameter"
QT_MOC_LITERAL(2245, 43), // "func_procElongated_genCutting..."
QT_MOC_LITERAL(2289, 42), // "func_procElongated_restacking..."
QT_MOC_LITERAL(2332, 27), // "func_procElongated_bdbminus"
QT_MOC_LITERAL(2360, 24), // "func_procReg_gridSeeding"
QT_MOC_LITERAL(2385, 26), // "func_procReg_randomSeeding"
QT_MOC_LITERAL(2412, 37), // "func_procReg_bigGradient_edge..."
QT_MOC_LITERAL(2450, 41), // "func_procReg_big_curvature_co..."
QT_MOC_LITERAL(2492, 24), // "func_procReg_fileSeeding"
QT_MOC_LITERAL(2517, 25), // "func_procReg_global_align"
QT_MOC_LITERAL(2543, 33), // "func_procReg_affine_markers_a..."
QT_MOC_LITERAL(2577, 29), // "func_procReg_flybrain_lobeseg"
QT_MOC_LITERAL(2607, 28), // "func_procReg_detect_matching"
QT_MOC_LITERAL(2636, 32), // "func_procReg_detect_matching_1pt"
QT_MOC_LITERAL(2669, 33), // "func_procReg_warp_using_landm..."
QT_MOC_LITERAL(2703, 28), // "func_procReg_all_in_one_warp"
QT_MOC_LITERAL(2732, 30), // "func_procCellSeg_localTemplate"
QT_MOC_LITERAL(2763, 29), // "func_procCellSeg_cellcounting"
QT_MOC_LITERAL(2793, 26), // "func_procCellSeg_watershed"
QT_MOC_LITERAL(2820, 25), // "func_procCellSeg_levelset"
QT_MOC_LITERAL(2846, 44), // "func_procCellSeg_Gaussian_fit..."
QT_MOC_LITERAL(2891, 44), // "func_procCellSeg_Gaussian_fit..."
QT_MOC_LITERAL(2936, 35), // "func_procCellSeg_Gaussian_par..."
QT_MOC_LITERAL(2972, 30), // "func_procCellSeg_manualCorrect"
QT_MOC_LITERAL(3003, 32), // "func_procTracing_topdownSkeleton"
QT_MOC_LITERAL(3036, 31), // "func_procTracing_bottomupSearch"
QT_MOC_LITERAL(3068, 31), // "func_procTracing_glocal_combine"
QT_MOC_LITERAL(3100, 30), // "func_procTracing_manualCorrect"
QT_MOC_LITERAL(3131, 25), // "func_procTracing_APP2auto"
QT_MOC_LITERAL(3157, 27), // "func_procTracing_one2others"
QT_MOC_LITERAL(3185, 30), // "func_procTracing_trace_a_curve"
QT_MOC_LITERAL(3216, 30), // "func_procTracing_undo_laststep"
QT_MOC_LITERAL(3247, 30), // "func_procTracing_redo_laststep"
QT_MOC_LITERAL(3278, 22), // "func_procTracing_clear"
QT_MOC_LITERAL(3301, 29), // "func_procTracing_update3Dview"
QT_MOC_LITERAL(3331, 21), // "func_procTracing_save"
QT_MOC_LITERAL(3353, 20), // "func_procModeDefault"
QT_MOC_LITERAL(3374, 28), // "func_procModeNeuronAnnotator"
QT_MOC_LITERAL(3403, 16), // "transactionStart"
QT_MOC_LITERAL(3420, 19), // "allTransactionsDone"
QT_MOC_LITERAL(3440, 13), // "updateTriview"
QT_MOC_LITERAL(3454, 19), // "updateTriviewWindow"
QT_MOC_LITERAL(3474, 15), // "updateRunPlugin"
QT_MOC_LITERAL(3490, 32), // "handleCoordinatedCloseEvent_real"
QT_MOC_LITERAL(3523, 27), // "handleCoordinatedCloseEvent"
QT_MOC_LITERAL(3551, 12), // "QCloseEvent*"
QT_MOC_LITERAL(3564, 5) // "event"

    },
    "MainWindow\0triviewUpdateTriggered\0\0"
    "imageLoaded2Plugin\0newFile\0open\0"
    "openWebUrl\0func_open_terafly\0"
    "func_open_teraconverter\0func_open_neuron_game\0"
    "addCustomToolbar\0finishedLoadingWebImage\0"
    "url\0fileName\0b_cacheFile\0b_forceopen3dviewer\0"
    "checkForUpdates\0b_informOnNoUpdate\0"
    "generateVersionInfo\0atlasView\0save\0"
    "saveAs\0cut\0copy\0paste\0openRecentFile\0"
    "updateMenus\0updatePluginMenu\0"
    "updateModeMenu\0updateWindowMenu\0exit\0"
    "updateProcessingMenu\0createMdiChild\0"
    "XFormWidget*\0activeMdiChild\0findMdiChild\0"
    "loadV3DFile\0filename\0b_putinrecentfilelist\0"
    "loadV3DUrl\0b_cacheLocalFile\0"
    "func_procLandmarkManager\0func_procAtlasViewer\0"
    "func_proc3DViewer\0func_proc3DLocalRoiViewer\0"
    "func_procSettings\0func_proc_plugin_manager\0"
    "func_procIO_export_to_vano_format\0"
    "func_procIO_export_to_movie\0"
    "func_procIO_export_landmark_to_pointcloud\0"
    "func_procIO_export_landmark_to_swc\0"
    "func_procIO_export_tracedneuron_to_swc\0"
    "import_GeneralImageFile\0import_Leica\0"
    "func_procIO_import_atlas_imgfolder\0"
    "func_procPC_Atlas_view_atlas_computeVanoObjStat\0"
    "func_procGeneral_rotate_paxis\0"
    "func_procGeneral_rotate_angle\0"
    "func_procGeneral_flip\0"
    "func_procGeneral_clear_all_landmark\0"
    "func_procGeneral_toggle_landmark_label\0"
    "func_procGeneral_clear_connectmap\0"
    "func_procGeneral_rescale_landmarks_only\0"
    "func_procGeneral_automarker_entireimg\0"
    "func_procGeneral_automarker_roi\0"
    "func_procGeneral_split_channels\0"
    "func_procGeneral_extract_a_channel\0"
    "func_procGeneral_crop_image_minMaxBox\0"
    "func_procGeneral_crop_bbox_roi\0"
    "func_procGeneral_mask_roi\0"
    "func_procGeneral_mask_nonroi_xy\0"
    "func_procGeneral_mask_channel\0"
    "func_procGeneral_clear_roi\0"
    "func_procGeneral_resample_image\0"
    "func_procGeneral_projection_max\0"
    "func_procGeneral_blend_image\0"
    "func_procGeneral_stitch_image\0"
    "func_procGeneral_display_histogram\0"
    "func_procGeneral_linear_adjustment\0"
    "func_procGeneral_histogram_equalization\0"
    "func_procGeneral_intensity_rescale\0"
    "func_procGeneral_intensity_threshold\0"
    "func_procGeneral_intensity_binarize\0"
    "func_procGeneral_intensity_updateminmax\0"
    "func_procGeneral_color_invert\0"
    "func_procGeneral_16bit_to_8bit\0"
    "func_procGeneral_32bit_to_8bit\0"
    "func_procGeneral_scaleandconvert28bit\0"
    "func_procGeneral_scaleandconvert28bit_1percent\0"
    "func_procGeneral_indexedimg2rgb\0"
    "func_procGeneral_save_image\0"
    "func_procElongated_randomSeeding\0"
    "func_procElongated_minSpanTree\0"
    "func_procElongated_mstDiameter\0"
    "func_procElongated_genCuttingPlaneLocations\0"
    "func_procElongated_restackingCuttingPlanes\0"
    "func_procElongated_bdbminus\0"
    "func_procReg_gridSeeding\0"
    "func_procReg_randomSeeding\0"
    "func_procReg_bigGradient_edge_Seeding\0"
    "func_procReg_big_curvature_corner_Seeding\0"
    "func_procReg_fileSeeding\0"
    "func_procReg_global_align\0"
    "func_procReg_affine_markers_align\0"
    "func_procReg_flybrain_lobeseg\0"
    "func_procReg_detect_matching\0"
    "func_procReg_detect_matching_1pt\0"
    "func_procReg_warp_using_landmarks\0"
    "func_procReg_all_in_one_warp\0"
    "func_procCellSeg_localTemplate\0"
    "func_procCellSeg_cellcounting\0"
    "func_procCellSeg_watershed\0"
    "func_procCellSeg_levelset\0"
    "func_procCellSeg_Gaussian_fit_1_spot_1_Gauss\0"
    "func_procCellSeg_Gaussian_fit_1_spot_N_Gauss\0"
    "func_procCellSeg_Gaussian_partition\0"
    "func_procCellSeg_manualCorrect\0"
    "func_procTracing_topdownSkeleton\0"
    "func_procTracing_bottomupSearch\0"
    "func_procTracing_glocal_combine\0"
    "func_procTracing_manualCorrect\0"
    "func_procTracing_APP2auto\0"
    "func_procTracing_one2others\0"
    "func_procTracing_trace_a_curve\0"
    "func_procTracing_undo_laststep\0"
    "func_procTracing_redo_laststep\0"
    "func_procTracing_clear\0"
    "func_procTracing_update3Dview\0"
    "func_procTracing_save\0func_procModeDefault\0"
    "func_procModeNeuronAnnotator\0"
    "transactionStart\0allTransactionsDone\0"
    "updateTriview\0updateTriviewWindow\0"
    "updateRunPlugin\0handleCoordinatedCloseEvent_real\0"
    "handleCoordinatedCloseEvent\0QCloseEvent*\0"
    "event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
     132,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  806,    2, 0x06,    0 /* Public */,
       3,    0,  807,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  808,    2, 0x0a,    2 /* Public */,
       5,    0,  809,    2, 0x0a,    3 /* Public */,
       6,    0,  810,    2, 0x0a,    4 /* Public */,
       7,    0,  811,    2, 0x0a,    5 /* Public */,
       8,    0,  812,    2, 0x0a,    6 /* Public */,
       9,    0,  813,    2, 0x0a,    7 /* Public */,
      10,    0,  814,    2, 0x0a,    8 /* Public */,
      11,    4,  815,    2, 0x0a,    9 /* Public */,
      16,    1,  824,    2, 0x0a,   14 /* Public */,
      16,    0,  827,    2, 0x2a,   16 /* Public | MethodCloned */,
      18,    0,  828,    2, 0x0a,   17 /* Public */,
      19,    0,  829,    2, 0x0a,   18 /* Public */,
      20,    0,  830,    2, 0x0a,   19 /* Public */,
      21,    0,  831,    2, 0x0a,   20 /* Public */,
      22,    0,  832,    2, 0x0a,   21 /* Public */,
      23,    0,  833,    2, 0x0a,   22 /* Public */,
      24,    0,  834,    2, 0x0a,   23 /* Public */,
      25,    0,  835,    2, 0x0a,   24 /* Public */,
      26,    0,  836,    2, 0x0a,   25 /* Public */,
      27,    0,  837,    2, 0x0a,   26 /* Public */,
      28,    0,  838,    2, 0x0a,   27 /* Public */,
      29,    0,  839,    2, 0x0a,   28 /* Public */,
      30,    0,  840,    2, 0x0a,   29 /* Public */,
      31,    0,  841,    2, 0x0a,   30 /* Public */,
      32,    0,  842,    2, 0x0a,   31 /* Public */,
      34,    0,  843,    2, 0x0a,   32 /* Public */,
      35,    1,  844,    2, 0x0a,   33 /* Public */,
      36,    3,  847,    2, 0x0a,   35 /* Public */,
      36,    2,  854,    2, 0x2a,   39 /* Public | MethodCloned */,
      36,    1,  859,    2, 0x2a,   42 /* Public | MethodCloned */,
      39,    3,  862,    2, 0x0a,   44 /* Public */,
      39,    2,  869,    2, 0x2a,   48 /* Public | MethodCloned */,
      39,    1,  874,    2, 0x2a,   51 /* Public | MethodCloned */,
      41,    0,  877,    2, 0x0a,   53 /* Public */,
      42,    0,  878,    2, 0x0a,   54 /* Public */,
      43,    0,  879,    2, 0x0a,   55 /* Public */,
      44,    0,  880,    2, 0x0a,   56 /* Public */,
      45,    0,  881,    2, 0x0a,   57 /* Public */,
      46,    0,  882,    2, 0x0a,   58 /* Public */,
      47,    0,  883,    2, 0x0a,   59 /* Public */,
      48,    0,  884,    2, 0x0a,   60 /* Public */,
      49,    0,  885,    2, 0x0a,   61 /* Public */,
      50,    0,  886,    2, 0x0a,   62 /* Public */,
      51,    0,  887,    2, 0x0a,   63 /* Public */,
      52,    0,  888,    2, 0x0a,   64 /* Public */,
      53,    0,  889,    2, 0x0a,   65 /* Public */,
      54,    0,  890,    2, 0x0a,   66 /* Public */,
      55,    0,  891,    2, 0x0a,   67 /* Public */,
      56,    0,  892,    2, 0x0a,   68 /* Public */,
      57,    0,  893,    2, 0x0a,   69 /* Public */,
      58,    0,  894,    2, 0x0a,   70 /* Public */,
      59,    0,  895,    2, 0x0a,   71 /* Public */,
      60,    0,  896,    2, 0x0a,   72 /* Public */,
      61,    0,  897,    2, 0x0a,   73 /* Public */,
      62,    0,  898,    2, 0x0a,   74 /* Public */,
      63,    0,  899,    2, 0x0a,   75 /* Public */,
      64,    0,  900,    2, 0x0a,   76 /* Public */,
      65,    0,  901,    2, 0x0a,   77 /* Public */,
      66,    0,  902,    2, 0x0a,   78 /* Public */,
      67,    0,  903,    2, 0x0a,   79 /* Public */,
      68,    0,  904,    2, 0x0a,   80 /* Public */,
      69,    0,  905,    2, 0x0a,   81 /* Public */,
      70,    0,  906,    2, 0x0a,   82 /* Public */,
      71,    0,  907,    2, 0x0a,   83 /* Public */,
      72,    0,  908,    2, 0x0a,   84 /* Public */,
      73,    0,  909,    2, 0x0a,   85 /* Public */,
      74,    0,  910,    2, 0x0a,   86 /* Public */,
      75,    0,  911,    2, 0x0a,   87 /* Public */,
      76,    0,  912,    2, 0x0a,   88 /* Public */,
      77,    0,  913,    2, 0x0a,   89 /* Public */,
      78,    0,  914,    2, 0x0a,   90 /* Public */,
      79,    0,  915,    2, 0x0a,   91 /* Public */,
      80,    0,  916,    2, 0x0a,   92 /* Public */,
      81,    0,  917,    2, 0x0a,   93 /* Public */,
      82,    0,  918,    2, 0x0a,   94 /* Public */,
      83,    0,  919,    2, 0x0a,   95 /* Public */,
      84,    0,  920,    2, 0x0a,   96 /* Public */,
      85,    0,  921,    2, 0x0a,   97 /* Public */,
      86,    0,  922,    2, 0x0a,   98 /* Public */,
      87,    0,  923,    2, 0x0a,   99 /* Public */,
      88,    0,  924,    2, 0x0a,  100 /* Public */,
      89,    0,  925,    2, 0x0a,  101 /* Public */,
      90,    0,  926,    2, 0x0a,  102 /* Public */,
      91,    0,  927,    2, 0x0a,  103 /* Public */,
      92,    0,  928,    2, 0x0a,  104 /* Public */,
      93,    0,  929,    2, 0x0a,  105 /* Public */,
      94,    0,  930,    2, 0x0a,  106 /* Public */,
      95,    0,  931,    2, 0x0a,  107 /* Public */,
      96,    0,  932,    2, 0x0a,  108 /* Public */,
      97,    0,  933,    2, 0x0a,  109 /* Public */,
      98,    0,  934,    2, 0x0a,  110 /* Public */,
      99,    0,  935,    2, 0x0a,  111 /* Public */,
     100,    0,  936,    2, 0x0a,  112 /* Public */,
     101,    0,  937,    2, 0x0a,  113 /* Public */,
     102,    0,  938,    2, 0x0a,  114 /* Public */,
     103,    0,  939,    2, 0x0a,  115 /* Public */,
     104,    0,  940,    2, 0x0a,  116 /* Public */,
     105,    0,  941,    2, 0x0a,  117 /* Public */,
     106,    0,  942,    2, 0x0a,  118 /* Public */,
     107,    0,  943,    2, 0x0a,  119 /* Public */,
     108,    0,  944,    2, 0x0a,  120 /* Public */,
     109,    0,  945,    2, 0x0a,  121 /* Public */,
     110,    0,  946,    2, 0x0a,  122 /* Public */,
     111,    0,  947,    2, 0x0a,  123 /* Public */,
     112,    0,  948,    2, 0x0a,  124 /* Public */,
     113,    0,  949,    2, 0x0a,  125 /* Public */,
     114,    0,  950,    2, 0x0a,  126 /* Public */,
     115,    0,  951,    2, 0x0a,  127 /* Public */,
     116,    0,  952,    2, 0x0a,  128 /* Public */,
     117,    0,  953,    2, 0x0a,  129 /* Public */,
     118,    0,  954,    2, 0x0a,  130 /* Public */,
     119,    0,  955,    2, 0x0a,  131 /* Public */,
     120,    0,  956,    2, 0x0a,  132 /* Public */,
     121,    0,  957,    2, 0x0a,  133 /* Public */,
     122,    0,  958,    2, 0x0a,  134 /* Public */,
     123,    0,  959,    2, 0x0a,  135 /* Public */,
     124,    0,  960,    2, 0x0a,  136 /* Public */,
     125,    0,  961,    2, 0x0a,  137 /* Public */,
     126,    0,  962,    2, 0x0a,  138 /* Public */,
     127,    0,  963,    2, 0x0a,  139 /* Public */,
     128,    0,  964,    2, 0x0a,  140 /* Public */,
     129,    0,  965,    2, 0x0a,  141 /* Public */,
     130,    0,  966,    2, 0x0a,  142 /* Public */,
     131,    0,  967,    2, 0x0a,  143 /* Public */,
     132,    0,  968,    2, 0x0a,  144 /* Public */,
     133,    0,  969,    2, 0x0a,  145 /* Public */,
     134,    0,  970,    2, 0x0a,  146 /* Public */,
     135,    0,  971,    2, 0x0a,  147 /* Public */,
     136,    0,  972,    2, 0x0a,  148 /* Public */,
     137,    1,  973,    2, 0x0a,  149 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,   12,   13,   14,   15,
    QMetaType::Void, QMetaType::Bool,   17,
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
    0x80000000 | 33,
    0x80000000 | 33,
    0x80000000 | 33, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,   37,   38,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   37,   38,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Bool, QMetaType::Bool,   12,   40,   15,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Bool,   12,   40,
    QMetaType::Void, QMetaType::QUrl,   12,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 138,  139,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->triviewUpdateTriggered(); break;
        case 1: _t->imageLoaded2Plugin(); break;
        case 2: _t->newFile(); break;
        case 3: _t->open(); break;
        case 4: _t->openWebUrl(); break;
        case 5: _t->func_open_terafly(); break;
        case 6: _t->func_open_teraconverter(); break;
        case 7: _t->func_open_neuron_game(); break;
        case 8: _t->addCustomToolbar(); break;
        case 9: _t->finishedLoadingWebImage((*reinterpret_cast< QUrl(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 10: _t->checkForUpdates((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->checkForUpdates(); break;
        case 12: _t->generateVersionInfo(); break;
        case 13: _t->atlasView(); break;
        case 14: _t->save(); break;
        case 15: _t->saveAs(); break;
        case 16: _t->cut(); break;
        case 17: _t->copy(); break;
        case 18: _t->paste(); break;
        case 19: _t->openRecentFile(); break;
        case 20: _t->updateMenus(); break;
        case 21: _t->updatePluginMenu(); break;
        case 22: _t->updateModeMenu(); break;
        case 23: _t->updateWindowMenu(); break;
        case 24: _t->exit(); break;
        case 25: _t->updateProcessingMenu(); break;
        case 26: { XFormWidget* _r = _t->createMdiChild();
            if (_a[0]) *reinterpret_cast< XFormWidget**>(_a[0]) = std::move(_r); }  break;
        case 27: { XFormWidget* _r = _t->activeMdiChild();
            if (_a[0]) *reinterpret_cast< XFormWidget**>(_a[0]) = std::move(_r); }  break;
        case 28: { XFormWidget* _r = _t->findMdiChild((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< XFormWidget**>(_a[0]) = std::move(_r); }  break;
        case 29: _t->loadV3DFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 30: _t->loadV3DFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 31: _t->loadV3DFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: _t->loadV3DUrl((*reinterpret_cast< QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 33: _t->loadV3DUrl((*reinterpret_cast< QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 34: _t->loadV3DUrl((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 35: _t->func_procLandmarkManager(); break;
        case 36: _t->func_procAtlasViewer(); break;
        case 37: _t->func_proc3DViewer(); break;
        case 38: _t->func_proc3DLocalRoiViewer(); break;
        case 39: _t->func_procSettings(); break;
        case 40: _t->func_proc_plugin_manager(); break;
        case 41: _t->func_procIO_export_to_vano_format(); break;
        case 42: _t->func_procIO_export_to_movie(); break;
        case 43: _t->func_procIO_export_landmark_to_pointcloud(); break;
        case 44: _t->func_procIO_export_landmark_to_swc(); break;
        case 45: _t->func_procIO_export_tracedneuron_to_swc(); break;
        case 46: _t->import_GeneralImageFile(); break;
        case 47: _t->import_Leica(); break;
        case 48: _t->func_procIO_import_atlas_imgfolder(); break;
        case 49: _t->func_procPC_Atlas_view_atlas_computeVanoObjStat(); break;
        case 50: _t->func_procGeneral_rotate_paxis(); break;
        case 51: _t->func_procGeneral_rotate_angle(); break;
        case 52: _t->func_procGeneral_flip(); break;
        case 53: _t->func_procGeneral_clear_all_landmark(); break;
        case 54: _t->func_procGeneral_toggle_landmark_label(); break;
        case 55: _t->func_procGeneral_clear_connectmap(); break;
        case 56: _t->func_procGeneral_rescale_landmarks_only(); break;
        case 57: _t->func_procGeneral_automarker_entireimg(); break;
        case 58: _t->func_procGeneral_automarker_roi(); break;
        case 59: _t->func_procGeneral_split_channels(); break;
        case 60: _t->func_procGeneral_extract_a_channel(); break;
        case 61: _t->func_procGeneral_crop_image_minMaxBox(); break;
        case 62: _t->func_procGeneral_crop_bbox_roi(); break;
        case 63: _t->func_procGeneral_mask_roi(); break;
        case 64: _t->func_procGeneral_mask_nonroi_xy(); break;
        case 65: _t->func_procGeneral_mask_channel(); break;
        case 66: _t->func_procGeneral_clear_roi(); break;
        case 67: _t->func_procGeneral_resample_image(); break;
        case 68: _t->func_procGeneral_projection_max(); break;
        case 69: _t->func_procGeneral_blend_image(); break;
        case 70: _t->func_procGeneral_stitch_image(); break;
        case 71: _t->func_procGeneral_display_histogram(); break;
        case 72: _t->func_procGeneral_linear_adjustment(); break;
        case 73: _t->func_procGeneral_histogram_equalization(); break;
        case 74: _t->func_procGeneral_intensity_rescale(); break;
        case 75: _t->func_procGeneral_intensity_threshold(); break;
        case 76: _t->func_procGeneral_intensity_binarize(); break;
        case 77: _t->func_procGeneral_intensity_updateminmax(); break;
        case 78: _t->func_procGeneral_color_invert(); break;
        case 79: _t->func_procGeneral_16bit_to_8bit(); break;
        case 80: _t->func_procGeneral_32bit_to_8bit(); break;
        case 81: _t->func_procGeneral_scaleandconvert28bit(); break;
        case 82: _t->func_procGeneral_scaleandconvert28bit_1percent(); break;
        case 83: _t->func_procGeneral_indexedimg2rgb(); break;
        case 84: _t->func_procGeneral_save_image(); break;
        case 85: _t->func_procElongated_randomSeeding(); break;
        case 86: _t->func_procElongated_minSpanTree(); break;
        case 87: _t->func_procElongated_mstDiameter(); break;
        case 88: _t->func_procElongated_genCuttingPlaneLocations(); break;
        case 89: _t->func_procElongated_restackingCuttingPlanes(); break;
        case 90: _t->func_procElongated_bdbminus(); break;
        case 91: _t->func_procReg_gridSeeding(); break;
        case 92: _t->func_procReg_randomSeeding(); break;
        case 93: _t->func_procReg_bigGradient_edge_Seeding(); break;
        case 94: _t->func_procReg_big_curvature_corner_Seeding(); break;
        case 95: _t->func_procReg_fileSeeding(); break;
        case 96: _t->func_procReg_global_align(); break;
        case 97: _t->func_procReg_affine_markers_align(); break;
        case 98: _t->func_procReg_flybrain_lobeseg(); break;
        case 99: _t->func_procReg_detect_matching(); break;
        case 100: _t->func_procReg_detect_matching_1pt(); break;
        case 101: _t->func_procReg_warp_using_landmarks(); break;
        case 102: _t->func_procReg_all_in_one_warp(); break;
        case 103: _t->func_procCellSeg_localTemplate(); break;
        case 104: _t->func_procCellSeg_cellcounting(); break;
        case 105: _t->func_procCellSeg_watershed(); break;
        case 106: _t->func_procCellSeg_levelset(); break;
        case 107: _t->func_procCellSeg_Gaussian_fit_1_spot_1_Gauss(); break;
        case 108: _t->func_procCellSeg_Gaussian_fit_1_spot_N_Gauss(); break;
        case 109: _t->func_procCellSeg_Gaussian_partition(); break;
        case 110: _t->func_procCellSeg_manualCorrect(); break;
        case 111: _t->func_procTracing_topdownSkeleton(); break;
        case 112: _t->func_procTracing_bottomupSearch(); break;
        case 113: _t->func_procTracing_glocal_combine(); break;
        case 114: _t->func_procTracing_manualCorrect(); break;
        case 115: _t->func_procTracing_APP2auto(); break;
        case 116: _t->func_procTracing_one2others(); break;
        case 117: _t->func_procTracing_trace_a_curve(); break;
        case 118: _t->func_procTracing_undo_laststep(); break;
        case 119: _t->func_procTracing_redo_laststep(); break;
        case 120: _t->func_procTracing_clear(); break;
        case 121: _t->func_procTracing_update3Dview(); break;
        case 122: _t->func_procTracing_save(); break;
        case 123: _t->func_procModeDefault(); break;
        case 124: _t->func_procModeNeuronAnnotator(); break;
        case 125: _t->transactionStart(); break;
        case 126: _t->allTransactionsDone(); break;
        case 127: _t->updateTriview(); break;
        case 128: _t->updateTriviewWindow(); break;
        case 129: _t->updateRunPlugin(); break;
        case 130: _t->handleCoordinatedCloseEvent_real(); break;
        case 131: _t->handleCoordinatedCloseEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::triviewUpdateTriggered)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::imageLoaded2Plugin)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QUrl, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<XFormWidget *, std::false_type>, QtPrivate::TypeAndForceComplete<XFormWidget *, std::false_type>, QtPrivate::TypeAndForceComplete<XFormWidget *, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QUrl, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QUrl, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QUrl, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCloseEvent *, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 132)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 132;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 132)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 132;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::triviewUpdateTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::imageLoaded2Plugin()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
