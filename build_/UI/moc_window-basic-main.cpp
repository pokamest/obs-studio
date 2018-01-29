/****************************************************************************
** Meta object code from reading C++ file 'window-basic-main.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UI/window-basic-main.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-basic-main.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OBSBasic_t {
    QByteArrayData data[209];
    char stringdata0[4543];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSBasic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSBasic_t qt_meta_stringdata_OBSBasic = {
    {
QT_MOC_LITERAL(0, 0, 8), // "OBSBasic"
QT_MOC_LITERAL(1, 9, 14), // "StartStreaming"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 13), // "StopStreaming"
QT_MOC_LITERAL(4, 39, 18), // "ForceStopStreaming"
QT_MOC_LITERAL(5, 58, 19), // "StreamDelayStarting"
QT_MOC_LITERAL(6, 78, 3), // "sec"
QT_MOC_LITERAL(7, 82, 19), // "StreamDelayStopping"
QT_MOC_LITERAL(8, 102, 14), // "StreamingStart"
QT_MOC_LITERAL(9, 117, 14), // "StreamStopping"
QT_MOC_LITERAL(10, 132, 13), // "StreamingStop"
QT_MOC_LITERAL(11, 146, 9), // "errorcode"
QT_MOC_LITERAL(12, 156, 10), // "last_error"
QT_MOC_LITERAL(13, 167, 14), // "StartRecording"
QT_MOC_LITERAL(14, 182, 13), // "StopRecording"
QT_MOC_LITERAL(15, 196, 14), // "RecordingStart"
QT_MOC_LITERAL(16, 211, 14), // "RecordStopping"
QT_MOC_LITERAL(17, 226, 13), // "RecordingStop"
QT_MOC_LITERAL(18, 240, 4), // "code"
QT_MOC_LITERAL(19, 245, 17), // "StartReplayBuffer"
QT_MOC_LITERAL(20, 263, 16), // "StopReplayBuffer"
QT_MOC_LITERAL(21, 280, 17), // "ReplayBufferStart"
QT_MOC_LITERAL(22, 298, 16), // "ReplayBufferSave"
QT_MOC_LITERAL(23, 315, 20), // "ReplayBufferStopping"
QT_MOC_LITERAL(24, 336, 16), // "ReplayBufferStop"
QT_MOC_LITERAL(25, 353, 19), // "SaveProjectDeferred"
QT_MOC_LITERAL(26, 373, 11), // "SaveProject"
QT_MOC_LITERAL(27, 385, 13), // "SetTransition"
QT_MOC_LITERAL(28, 399, 9), // "OBSSource"
QT_MOC_LITERAL(29, 409, 10), // "transition"
QT_MOC_LITERAL(30, 420, 17), // "TransitionToScene"
QT_MOC_LITERAL(31, 438, 8), // "OBSScene"
QT_MOC_LITERAL(32, 447, 5), // "scene"
QT_MOC_LITERAL(33, 453, 5), // "force"
QT_MOC_LITERAL(34, 459, 6), // "direct"
QT_MOC_LITERAL(35, 466, 15), // "quickTransition"
QT_MOC_LITERAL(36, 482, 15), // "SetCurrentScene"
QT_MOC_LITERAL(37, 498, 12), // "AddSceneItem"
QT_MOC_LITERAL(38, 511, 12), // "OBSSceneItem"
QT_MOC_LITERAL(39, 524, 4), // "item"
QT_MOC_LITERAL(40, 529, 15), // "RemoveSceneItem"
QT_MOC_LITERAL(41, 545, 8), // "AddScene"
QT_MOC_LITERAL(42, 554, 6), // "source"
QT_MOC_LITERAL(43, 561, 11), // "RemoveScene"
QT_MOC_LITERAL(44, 573, 13), // "RenameSources"
QT_MOC_LITERAL(45, 587, 7), // "newName"
QT_MOC_LITERAL(46, 595, 8), // "prevName"
QT_MOC_LITERAL(47, 604, 15), // "SelectSceneItem"
QT_MOC_LITERAL(48, 620, 6), // "select"
QT_MOC_LITERAL(49, 627, 19), // "ActivateAudioSource"
QT_MOC_LITERAL(50, 647, 21), // "DeactivateAudioSource"
QT_MOC_LITERAL(51, 669, 22), // "DuplicateSelectedScene"
QT_MOC_LITERAL(52, 692, 19), // "RemoveSelectedScene"
QT_MOC_LITERAL(53, 712, 23), // "RemoveSelectedSceneItem"
QT_MOC_LITERAL(54, 736, 17), // "ToggleAlwaysOnTop"
QT_MOC_LITERAL(55, 754, 14), // "ReorderSources"
QT_MOC_LITERAL(56, 769, 13), // "ProcessHotkey"
QT_MOC_LITERAL(57, 783, 13), // "obs_hotkey_id"
QT_MOC_LITERAL(58, 797, 2), // "id"
QT_MOC_LITERAL(59, 800, 7), // "pressed"
QT_MOC_LITERAL(60, 808, 13), // "AddTransition"
QT_MOC_LITERAL(61, 822, 16), // "RenameTransition"
QT_MOC_LITERAL(62, 839, 17), // "TransitionClicked"
QT_MOC_LITERAL(63, 857, 17), // "TransitionStopped"
QT_MOC_LITERAL(64, 875, 22), // "TransitionFullyStopped"
QT_MOC_LITERAL(65, 898, 22), // "TriggerQuickTransition"
QT_MOC_LITERAL(66, 921, 20), // "SetDeinterlacingMode"
QT_MOC_LITERAL(67, 942, 21), // "SetDeinterlacingOrder"
QT_MOC_LITERAL(68, 964, 14), // "SetScaleFilter"
QT_MOC_LITERAL(69, 979, 13), // "IconActivated"
QT_MOC_LITERAL(70, 993, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(71, 1027, 6), // "reason"
QT_MOC_LITERAL(72, 1034, 10), // "SetShowing"
QT_MOC_LITERAL(73, 1045, 7), // "showing"
QT_MOC_LITERAL(74, 1053, 14), // "ToggleShowHide"
QT_MOC_LITERAL(75, 1068, 16), // "HideAudioControl"
QT_MOC_LITERAL(76, 1085, 22), // "UnhideAllAudioControls"
QT_MOC_LITERAL(77, 1108, 15), // "ToggleHideMixer"
QT_MOC_LITERAL(78, 1124, 17), // "MixerRenameSource"
QT_MOC_LITERAL(79, 1142, 45), // "on_mixerScrollArea_customCont..."
QT_MOC_LITERAL(80, 1188, 29), // "on_actionCopySource_triggered"
QT_MOC_LITERAL(81, 1218, 27), // "on_actionPasteRef_triggered"
QT_MOC_LITERAL(82, 1246, 27), // "on_actionPasteDup_triggered"
QT_MOC_LITERAL(83, 1274, 30), // "on_actionCopyFilters_triggered"
QT_MOC_LITERAL(84, 1305, 31), // "on_actionPasteFilters_triggered"
QT_MOC_LITERAL(85, 1337, 38), // "on_actionFullscreenInterface_..."
QT_MOC_LITERAL(86, 1376, 34), // "on_actionShow_Recordings_trig..."
QT_MOC_LITERAL(87, 1411, 24), // "on_actionRemux_triggered"
QT_MOC_LITERAL(88, 1436, 28), // "on_action_Settings_triggered"
QT_MOC_LITERAL(89, 1465, 37), // "on_actionAdvAudioProperties_t..."
QT_MOC_LITERAL(90, 1503, 24), // "on_advAudioProps_clicked"
QT_MOC_LITERAL(91, 1528, 26), // "on_advAudioProps_destroyed"
QT_MOC_LITERAL(92, 1555, 27), // "on_actionShowLogs_triggered"
QT_MOC_LITERAL(93, 1583, 35), // "on_actionUploadCurrentLog_tri..."
QT_MOC_LITERAL(94, 1619, 32), // "on_actionUploadLastLog_triggered"
QT_MOC_LITERAL(95, 1652, 33), // "on_actionViewCurrentLog_trigg..."
QT_MOC_LITERAL(96, 1686, 34), // "on_actionCheckForUpdates_trig..."
QT_MOC_LITERAL(97, 1721, 32), // "on_actionEditTransform_triggered"
QT_MOC_LITERAL(98, 1754, 32), // "on_actionCopyTransform_triggered"
QT_MOC_LITERAL(99, 1787, 33), // "on_actionPasteTransform_trigg..."
QT_MOC_LITERAL(100, 1821, 29), // "on_actionRotate90CW_triggered"
QT_MOC_LITERAL(101, 1851, 30), // "on_actionRotate90CCW_triggered"
QT_MOC_LITERAL(102, 1882, 28), // "on_actionRotate180_triggered"
QT_MOC_LITERAL(103, 1911, 33), // "on_actionFlipHorizontal_trigg..."
QT_MOC_LITERAL(104, 1945, 31), // "on_actionFlipVertical_triggered"
QT_MOC_LITERAL(105, 1977, 30), // "on_actionFitToScreen_triggered"
QT_MOC_LITERAL(106, 2008, 34), // "on_actionStretchToScreen_trig..."
QT_MOC_LITERAL(107, 2043, 33), // "on_actionCenterToScreen_trigg..."
QT_MOC_LITERAL(108, 2077, 28), // "on_scenes_currentItemChanged"
QT_MOC_LITERAL(109, 2106, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(110, 2123, 7), // "current"
QT_MOC_LITERAL(111, 2131, 4), // "prev"
QT_MOC_LITERAL(112, 2136, 36), // "on_scenes_customContextMenuRe..."
QT_MOC_LITERAL(113, 2173, 3), // "pos"
QT_MOC_LITERAL(114, 2177, 27), // "on_actionAddScene_triggered"
QT_MOC_LITERAL(115, 2205, 30), // "on_actionRemoveScene_triggered"
QT_MOC_LITERAL(116, 2236, 26), // "on_actionSceneUp_triggered"
QT_MOC_LITERAL(117, 2263, 28), // "on_actionSceneDown_triggered"
QT_MOC_LITERAL(118, 2292, 31), // "on_sources_itemSelectionChanged"
QT_MOC_LITERAL(119, 2324, 37), // "on_sources_customContextMenuR..."
QT_MOC_LITERAL(120, 2362, 28), // "on_sources_itemDoubleClicked"
QT_MOC_LITERAL(121, 2391, 27), // "on_scenes_itemDoubleClicked"
QT_MOC_LITERAL(122, 2419, 28), // "on_actionAddSource_triggered"
QT_MOC_LITERAL(123, 2448, 31), // "on_actionRemoveSource_triggered"
QT_MOC_LITERAL(124, 2480, 27), // "on_actionInteract_triggered"
QT_MOC_LITERAL(125, 2508, 35), // "on_actionSourceProperties_tri..."
QT_MOC_LITERAL(126, 2544, 27), // "on_actionSourceUp_triggered"
QT_MOC_LITERAL(127, 2572, 29), // "on_actionSourceDown_triggered"
QT_MOC_LITERAL(128, 2602, 25), // "on_actionMoveUp_triggered"
QT_MOC_LITERAL(129, 2628, 27), // "on_actionMoveDown_triggered"
QT_MOC_LITERAL(130, 2656, 28), // "on_actionMoveToTop_triggered"
QT_MOC_LITERAL(131, 2685, 31), // "on_actionMoveToBottom_triggered"
QT_MOC_LITERAL(132, 2717, 30), // "on_actionLockPreview_triggered"
QT_MOC_LITERAL(133, 2748, 26), // "on_scalingMenu_aboutToShow"
QT_MOC_LITERAL(134, 2775, 30), // "on_actionScaleWindow_triggered"
QT_MOC_LITERAL(135, 2806, 30), // "on_actionScaleCanvas_triggered"
QT_MOC_LITERAL(136, 2837, 30), // "on_actionScaleOutput_triggered"
QT_MOC_LITERAL(137, 2868, 23), // "on_streamButton_clicked"
QT_MOC_LITERAL(138, 2892, 23), // "on_recordButton_clicked"
QT_MOC_LITERAL(139, 2916, 25), // "on_settingsButton_clicked"
QT_MOC_LITERAL(140, 2942, 29), // "on_actionHelpPortal_triggered"
QT_MOC_LITERAL(141, 2972, 26), // "on_actionWebsite_triggered"
QT_MOC_LITERAL(142, 2999, 37), // "on_preview_customContextMenuR..."
QT_MOC_LITERAL(143, 3037, 37), // "on_program_customContextMenuR..."
QT_MOC_LITERAL(144, 3075, 50), // "on_previewDisabledLabel_custo..."
QT_MOC_LITERAL(145, 3126, 37), // "on_actionNewSceneCollection_t..."
QT_MOC_LITERAL(146, 3164, 37), // "on_actionDupSceneCollection_t..."
QT_MOC_LITERAL(147, 3202, 40), // "on_actionRenameSceneCollectio..."
QT_MOC_LITERAL(148, 3243, 40), // "on_actionRemoveSceneCollectio..."
QT_MOC_LITERAL(149, 3284, 40), // "on_actionImportSceneCollectio..."
QT_MOC_LITERAL(150, 3325, 40), // "on_actionExportSceneCollectio..."
QT_MOC_LITERAL(151, 3366, 29), // "on_actionNewProfile_triggered"
QT_MOC_LITERAL(152, 3396, 29), // "on_actionDupProfile_triggered"
QT_MOC_LITERAL(153, 3426, 32), // "on_actionRenameProfile_triggered"
QT_MOC_LITERAL(154, 3459, 32), // "on_actionRemoveProfile_triggered"
QT_MOC_LITERAL(155, 3492, 32), // "on_actionImportProfile_triggered"
QT_MOC_LITERAL(156, 3525, 32), // "on_actionExportProfile_triggered"
QT_MOC_LITERAL(157, 3558, 37), // "on_actionShowSettingsFolder_t..."
QT_MOC_LITERAL(158, 3596, 36), // "on_actionShowProfileFolder_tr..."
QT_MOC_LITERAL(159, 3633, 30), // "on_actionAlwaysOnTop_triggered"
QT_MOC_LITERAL(160, 3664, 32), // "on_toggleListboxToolbars_toggled"
QT_MOC_LITERAL(161, 3697, 7), // "visible"
QT_MOC_LITERAL(162, 3705, 26), // "on_toggleStatusBar_toggled"
QT_MOC_LITERAL(163, 3732, 34), // "on_transitions_currentIndexCh..."
QT_MOC_LITERAL(164, 3767, 5), // "index"
QT_MOC_LITERAL(165, 3773, 24), // "on_transitionAdd_clicked"
QT_MOC_LITERAL(166, 3798, 27), // "on_transitionRemove_clicked"
QT_MOC_LITERAL(167, 3826, 26), // "on_transitionProps_clicked"
QT_MOC_LITERAL(168, 3853, 21), // "on_modeSwitch_clicked"
QT_MOC_LITERAL(169, 3875, 26), // "on_autoConfigure_triggered"
QT_MOC_LITERAL(170, 3902, 18), // "on_stats_triggered"
QT_MOC_LITERAL(171, 3921, 20), // "on_resetUI_triggered"
QT_MOC_LITERAL(172, 3942, 17), // "on_lockUI_toggled"
QT_MOC_LITERAL(173, 3960, 4), // "lock"
QT_MOC_LITERAL(174, 3965, 17), // "logUploadFinished"
QT_MOC_LITERAL(175, 3983, 4), // "text"
QT_MOC_LITERAL(176, 3988, 5), // "error"
QT_MOC_LITERAL(177, 3994, 19), // "updateCheckFinished"
QT_MOC_LITERAL(178, 4014, 19), // "AddSourceFromAction"
QT_MOC_LITERAL(179, 4034, 14), // "MoveSceneToTop"
QT_MOC_LITERAL(180, 4049, 17), // "MoveSceneToBottom"
QT_MOC_LITERAL(181, 4067, 13), // "EditSceneName"
QT_MOC_LITERAL(182, 4081, 17), // "EditSceneItemName"
QT_MOC_LITERAL(183, 4099, 15), // "SceneNameEdited"
QT_MOC_LITERAL(184, 4115, 8), // "QWidget*"
QT_MOC_LITERAL(185, 4124, 6), // "editor"
QT_MOC_LITERAL(186, 4131, 34), // "QAbstractItemDelegate::EndEdi..."
QT_MOC_LITERAL(187, 4166, 7), // "endHint"
QT_MOC_LITERAL(188, 4174, 19), // "SceneItemNameEdited"
QT_MOC_LITERAL(189, 4194, 16), // "OpenSceneFilters"
QT_MOC_LITERAL(190, 4211, 11), // "OpenFilters"
QT_MOC_LITERAL(191, 4223, 20), // "EnablePreviewDisplay"
QT_MOC_LITERAL(192, 4244, 6), // "enable"
QT_MOC_LITERAL(193, 4251, 13), // "TogglePreview"
QT_MOC_LITERAL(194, 4265, 7), // "NudgeUp"
QT_MOC_LITERAL(195, 4273, 9), // "NudgeDown"
QT_MOC_LITERAL(196, 4283, 9), // "NudgeLeft"
QT_MOC_LITERAL(197, 4293, 10), // "NudgeRight"
QT_MOC_LITERAL(198, 4304, 26), // "OpenStudioProgramProjector"
QT_MOC_LITERAL(199, 4331, 20), // "OpenPreviewProjector"
QT_MOC_LITERAL(200, 4352, 19), // "OpenSourceProjector"
QT_MOC_LITERAL(201, 4372, 22), // "OpenMultiviewProjector"
QT_MOC_LITERAL(202, 4395, 18), // "OpenSceneProjector"
QT_MOC_LITERAL(203, 4414, 23), // "OpenStudioProgramWindow"
QT_MOC_LITERAL(204, 4438, 17), // "OpenPreviewWindow"
QT_MOC_LITERAL(205, 4456, 16), // "OpenSourceWindow"
QT_MOC_LITERAL(206, 4473, 19), // "OpenMultiviewWindow"
QT_MOC_LITERAL(207, 4493, 15), // "OpenSceneWindow"
QT_MOC_LITERAL(208, 4509, 33) // "on_actionResetTransform_trigg..."

    },
    "OBSBasic\0StartStreaming\0\0StopStreaming\0"
    "ForceStopStreaming\0StreamDelayStarting\0"
    "sec\0StreamDelayStopping\0StreamingStart\0"
    "StreamStopping\0StreamingStop\0errorcode\0"
    "last_error\0StartRecording\0StopRecording\0"
    "RecordingStart\0RecordStopping\0"
    "RecordingStop\0code\0StartReplayBuffer\0"
    "StopReplayBuffer\0ReplayBufferStart\0"
    "ReplayBufferSave\0ReplayBufferStopping\0"
    "ReplayBufferStop\0SaveProjectDeferred\0"
    "SaveProject\0SetTransition\0OBSSource\0"
    "transition\0TransitionToScene\0OBSScene\0"
    "scene\0force\0direct\0quickTransition\0"
    "SetCurrentScene\0AddSceneItem\0OBSSceneItem\0"
    "item\0RemoveSceneItem\0AddScene\0source\0"
    "RemoveScene\0RenameSources\0newName\0"
    "prevName\0SelectSceneItem\0select\0"
    "ActivateAudioSource\0DeactivateAudioSource\0"
    "DuplicateSelectedScene\0RemoveSelectedScene\0"
    "RemoveSelectedSceneItem\0ToggleAlwaysOnTop\0"
    "ReorderSources\0ProcessHotkey\0obs_hotkey_id\0"
    "id\0pressed\0AddTransition\0RenameTransition\0"
    "TransitionClicked\0TransitionStopped\0"
    "TransitionFullyStopped\0TriggerQuickTransition\0"
    "SetDeinterlacingMode\0SetDeinterlacingOrder\0"
    "SetScaleFilter\0IconActivated\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason\0SetShowing\0showing\0ToggleShowHide\0"
    "HideAudioControl\0UnhideAllAudioControls\0"
    "ToggleHideMixer\0MixerRenameSource\0"
    "on_mixerScrollArea_customContextMenuRequested\0"
    "on_actionCopySource_triggered\0"
    "on_actionPasteRef_triggered\0"
    "on_actionPasteDup_triggered\0"
    "on_actionCopyFilters_triggered\0"
    "on_actionPasteFilters_triggered\0"
    "on_actionFullscreenInterface_triggered\0"
    "on_actionShow_Recordings_triggered\0"
    "on_actionRemux_triggered\0"
    "on_action_Settings_triggered\0"
    "on_actionAdvAudioProperties_triggered\0"
    "on_advAudioProps_clicked\0"
    "on_advAudioProps_destroyed\0"
    "on_actionShowLogs_triggered\0"
    "on_actionUploadCurrentLog_triggered\0"
    "on_actionUploadLastLog_triggered\0"
    "on_actionViewCurrentLog_triggered\0"
    "on_actionCheckForUpdates_triggered\0"
    "on_actionEditTransform_triggered\0"
    "on_actionCopyTransform_triggered\0"
    "on_actionPasteTransform_triggered\0"
    "on_actionRotate90CW_triggered\0"
    "on_actionRotate90CCW_triggered\0"
    "on_actionRotate180_triggered\0"
    "on_actionFlipHorizontal_triggered\0"
    "on_actionFlipVertical_triggered\0"
    "on_actionFitToScreen_triggered\0"
    "on_actionStretchToScreen_triggered\0"
    "on_actionCenterToScreen_triggered\0"
    "on_scenes_currentItemChanged\0"
    "QListWidgetItem*\0current\0prev\0"
    "on_scenes_customContextMenuRequested\0"
    "pos\0on_actionAddScene_triggered\0"
    "on_actionRemoveScene_triggered\0"
    "on_actionSceneUp_triggered\0"
    "on_actionSceneDown_triggered\0"
    "on_sources_itemSelectionChanged\0"
    "on_sources_customContextMenuRequested\0"
    "on_sources_itemDoubleClicked\0"
    "on_scenes_itemDoubleClicked\0"
    "on_actionAddSource_triggered\0"
    "on_actionRemoveSource_triggered\0"
    "on_actionInteract_triggered\0"
    "on_actionSourceProperties_triggered\0"
    "on_actionSourceUp_triggered\0"
    "on_actionSourceDown_triggered\0"
    "on_actionMoveUp_triggered\0"
    "on_actionMoveDown_triggered\0"
    "on_actionMoveToTop_triggered\0"
    "on_actionMoveToBottom_triggered\0"
    "on_actionLockPreview_triggered\0"
    "on_scalingMenu_aboutToShow\0"
    "on_actionScaleWindow_triggered\0"
    "on_actionScaleCanvas_triggered\0"
    "on_actionScaleOutput_triggered\0"
    "on_streamButton_clicked\0on_recordButton_clicked\0"
    "on_settingsButton_clicked\0"
    "on_actionHelpPortal_triggered\0"
    "on_actionWebsite_triggered\0"
    "on_preview_customContextMenuRequested\0"
    "on_program_customContextMenuRequested\0"
    "on_previewDisabledLabel_customContextMenuRequested\0"
    "on_actionNewSceneCollection_triggered\0"
    "on_actionDupSceneCollection_triggered\0"
    "on_actionRenameSceneCollection_triggered\0"
    "on_actionRemoveSceneCollection_triggered\0"
    "on_actionImportSceneCollection_triggered\0"
    "on_actionExportSceneCollection_triggered\0"
    "on_actionNewProfile_triggered\0"
    "on_actionDupProfile_triggered\0"
    "on_actionRenameProfile_triggered\0"
    "on_actionRemoveProfile_triggered\0"
    "on_actionImportProfile_triggered\0"
    "on_actionExportProfile_triggered\0"
    "on_actionShowSettingsFolder_triggered\0"
    "on_actionShowProfileFolder_triggered\0"
    "on_actionAlwaysOnTop_triggered\0"
    "on_toggleListboxToolbars_toggled\0"
    "visible\0on_toggleStatusBar_toggled\0"
    "on_transitions_currentIndexChanged\0"
    "index\0on_transitionAdd_clicked\0"
    "on_transitionRemove_clicked\0"
    "on_transitionProps_clicked\0"
    "on_modeSwitch_clicked\0on_autoConfigure_triggered\0"
    "on_stats_triggered\0on_resetUI_triggered\0"
    "on_lockUI_toggled\0lock\0logUploadFinished\0"
    "text\0error\0updateCheckFinished\0"
    "AddSourceFromAction\0MoveSceneToTop\0"
    "MoveSceneToBottom\0EditSceneName\0"
    "EditSceneItemName\0SceneNameEdited\0"
    "QWidget*\0editor\0QAbstractItemDelegate::EndEditHint\0"
    "endHint\0SceneItemNameEdited\0"
    "OpenSceneFilters\0OpenFilters\0"
    "EnablePreviewDisplay\0enable\0TogglePreview\0"
    "NudgeUp\0NudgeDown\0NudgeLeft\0NudgeRight\0"
    "OpenStudioProgramProjector\0"
    "OpenPreviewProjector\0OpenSourceProjector\0"
    "OpenMultiviewProjector\0OpenSceneProjector\0"
    "OpenStudioProgramWindow\0OpenPreviewWindow\0"
    "OpenSourceWindow\0OpenMultiviewWindow\0"
    "OpenSceneWindow\0on_actionResetTransform_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSBasic[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     178,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  904,    2, 0x0a /* Public */,
       3,    0,  905,    2, 0x0a /* Public */,
       4,    0,  906,    2, 0x0a /* Public */,
       5,    1,  907,    2, 0x0a /* Public */,
       7,    1,  910,    2, 0x0a /* Public */,
       8,    0,  913,    2, 0x0a /* Public */,
       9,    0,  914,    2, 0x0a /* Public */,
      10,    2,  915,    2, 0x0a /* Public */,
      13,    0,  920,    2, 0x0a /* Public */,
      14,    0,  921,    2, 0x0a /* Public */,
      15,    0,  922,    2, 0x0a /* Public */,
      16,    0,  923,    2, 0x0a /* Public */,
      17,    1,  924,    2, 0x0a /* Public */,
      19,    0,  927,    2, 0x0a /* Public */,
      20,    0,  928,    2, 0x0a /* Public */,
      21,    0,  929,    2, 0x0a /* Public */,
      22,    0,  930,    2, 0x0a /* Public */,
      23,    0,  931,    2, 0x0a /* Public */,
      24,    1,  932,    2, 0x0a /* Public */,
      25,    0,  935,    2, 0x0a /* Public */,
      26,    0,  936,    2, 0x0a /* Public */,
      27,    1,  937,    2, 0x0a /* Public */,
      30,    3,  940,    2, 0x0a /* Public */,
      30,    2,  947,    2, 0x2a /* Public | MethodCloned */,
      30,    1,  952,    2, 0x2a /* Public | MethodCloned */,
      30,    4,  955,    2, 0x0a /* Public */,
      30,    3,  964,    2, 0x2a /* Public | MethodCloned */,
      30,    2,  971,    2, 0x2a /* Public | MethodCloned */,
      30,    1,  976,    2, 0x2a /* Public | MethodCloned */,
      36,    3,  979,    2, 0x0a /* Public */,
      36,    2,  986,    2, 0x2a /* Public | MethodCloned */,
      36,    1,  991,    2, 0x2a /* Public | MethodCloned */,
      37,    1,  994,    2, 0x08 /* Private */,
      40,    1,  997,    2, 0x08 /* Private */,
      41,    1, 1000,    2, 0x08 /* Private */,
      43,    1, 1003,    2, 0x08 /* Private */,
      44,    3, 1006,    2, 0x08 /* Private */,
      47,    3, 1013,    2, 0x08 /* Private */,
      49,    1, 1020,    2, 0x08 /* Private */,
      50,    1, 1023,    2, 0x08 /* Private */,
      51,    0, 1026,    2, 0x08 /* Private */,
      52,    0, 1027,    2, 0x08 /* Private */,
      53,    0, 1028,    2, 0x08 /* Private */,
      54,    0, 1029,    2, 0x08 /* Private */,
      55,    1, 1030,    2, 0x08 /* Private */,
      56,    2, 1033,    2, 0x08 /* Private */,
      60,    0, 1038,    2, 0x08 /* Private */,
      61,    0, 1039,    2, 0x08 /* Private */,
      62,    0, 1040,    2, 0x08 /* Private */,
      63,    0, 1041,    2, 0x08 /* Private */,
      64,    0, 1042,    2, 0x08 /* Private */,
      65,    1, 1043,    2, 0x08 /* Private */,
      66,    0, 1046,    2, 0x08 /* Private */,
      67,    0, 1047,    2, 0x08 /* Private */,
      68,    0, 1048,    2, 0x08 /* Private */,
      69,    1, 1049,    2, 0x08 /* Private */,
      72,    1, 1052,    2, 0x08 /* Private */,
      74,    0, 1055,    2, 0x08 /* Private */,
      75,    0, 1056,    2, 0x08 /* Private */,
      76,    0, 1057,    2, 0x08 /* Private */,
      77,    0, 1058,    2, 0x08 /* Private */,
      78,    0, 1059,    2, 0x08 /* Private */,
      79,    0, 1060,    2, 0x08 /* Private */,
      80,    0, 1061,    2, 0x08 /* Private */,
      81,    0, 1062,    2, 0x08 /* Private */,
      82,    0, 1063,    2, 0x08 /* Private */,
      83,    0, 1064,    2, 0x08 /* Private */,
      84,    0, 1065,    2, 0x08 /* Private */,
      85,    0, 1066,    2, 0x08 /* Private */,
      86,    0, 1067,    2, 0x08 /* Private */,
      87,    0, 1068,    2, 0x08 /* Private */,
      88,    0, 1069,    2, 0x08 /* Private */,
      89,    0, 1070,    2, 0x08 /* Private */,
      90,    0, 1071,    2, 0x08 /* Private */,
      91,    0, 1072,    2, 0x08 /* Private */,
      92,    0, 1073,    2, 0x08 /* Private */,
      93,    0, 1074,    2, 0x08 /* Private */,
      94,    0, 1075,    2, 0x08 /* Private */,
      95,    0, 1076,    2, 0x08 /* Private */,
      96,    0, 1077,    2, 0x08 /* Private */,
      97,    0, 1078,    2, 0x08 /* Private */,
      98,    0, 1079,    2, 0x08 /* Private */,
      99,    0, 1080,    2, 0x08 /* Private */,
     100,    0, 1081,    2, 0x08 /* Private */,
     101,    0, 1082,    2, 0x08 /* Private */,
     102,    0, 1083,    2, 0x08 /* Private */,
     103,    0, 1084,    2, 0x08 /* Private */,
     104,    0, 1085,    2, 0x08 /* Private */,
     105,    0, 1086,    2, 0x08 /* Private */,
     106,    0, 1087,    2, 0x08 /* Private */,
     107,    0, 1088,    2, 0x08 /* Private */,
     108,    2, 1089,    2, 0x08 /* Private */,
     112,    1, 1094,    2, 0x08 /* Private */,
     114,    0, 1097,    2, 0x08 /* Private */,
     115,    0, 1098,    2, 0x08 /* Private */,
     116,    0, 1099,    2, 0x08 /* Private */,
     117,    0, 1100,    2, 0x08 /* Private */,
     118,    0, 1101,    2, 0x08 /* Private */,
     119,    1, 1102,    2, 0x08 /* Private */,
     120,    1, 1105,    2, 0x08 /* Private */,
     121,    1, 1108,    2, 0x08 /* Private */,
     122,    0, 1111,    2, 0x08 /* Private */,
     123,    0, 1112,    2, 0x08 /* Private */,
     124,    0, 1113,    2, 0x08 /* Private */,
     125,    0, 1114,    2, 0x08 /* Private */,
     126,    0, 1115,    2, 0x08 /* Private */,
     127,    0, 1116,    2, 0x08 /* Private */,
     128,    0, 1117,    2, 0x08 /* Private */,
     129,    0, 1118,    2, 0x08 /* Private */,
     130,    0, 1119,    2, 0x08 /* Private */,
     131,    0, 1120,    2, 0x08 /* Private */,
     132,    0, 1121,    2, 0x08 /* Private */,
     133,    0, 1122,    2, 0x08 /* Private */,
     134,    0, 1123,    2, 0x08 /* Private */,
     135,    0, 1124,    2, 0x08 /* Private */,
     136,    0, 1125,    2, 0x08 /* Private */,
     137,    0, 1126,    2, 0x08 /* Private */,
     138,    0, 1127,    2, 0x08 /* Private */,
     139,    0, 1128,    2, 0x08 /* Private */,
     140,    0, 1129,    2, 0x08 /* Private */,
     141,    0, 1130,    2, 0x08 /* Private */,
     142,    1, 1131,    2, 0x08 /* Private */,
     143,    1, 1134,    2, 0x08 /* Private */,
     144,    1, 1137,    2, 0x08 /* Private */,
     145,    0, 1140,    2, 0x08 /* Private */,
     146,    0, 1141,    2, 0x08 /* Private */,
     147,    0, 1142,    2, 0x08 /* Private */,
     148,    0, 1143,    2, 0x08 /* Private */,
     149,    0, 1144,    2, 0x08 /* Private */,
     150,    0, 1145,    2, 0x08 /* Private */,
     151,    0, 1146,    2, 0x08 /* Private */,
     152,    0, 1147,    2, 0x08 /* Private */,
     153,    0, 1148,    2, 0x08 /* Private */,
     154,    0, 1149,    2, 0x08 /* Private */,
     155,    0, 1150,    2, 0x08 /* Private */,
     156,    0, 1151,    2, 0x08 /* Private */,
     157,    0, 1152,    2, 0x08 /* Private */,
     158,    0, 1153,    2, 0x08 /* Private */,
     159,    0, 1154,    2, 0x08 /* Private */,
     160,    1, 1155,    2, 0x08 /* Private */,
     162,    1, 1158,    2, 0x08 /* Private */,
     163,    1, 1161,    2, 0x08 /* Private */,
     165,    0, 1164,    2, 0x08 /* Private */,
     166,    0, 1165,    2, 0x08 /* Private */,
     167,    0, 1166,    2, 0x08 /* Private */,
     168,    0, 1167,    2, 0x08 /* Private */,
     169,    0, 1168,    2, 0x08 /* Private */,
     170,    0, 1169,    2, 0x08 /* Private */,
     171,    0, 1170,    2, 0x08 /* Private */,
     172,    1, 1171,    2, 0x08 /* Private */,
     174,    2, 1174,    2, 0x08 /* Private */,
     177,    0, 1179,    2, 0x08 /* Private */,
     178,    0, 1180,    2, 0x08 /* Private */,
     179,    0, 1181,    2, 0x08 /* Private */,
     180,    0, 1182,    2, 0x08 /* Private */,
     181,    0, 1183,    2, 0x08 /* Private */,
     182,    0, 1184,    2, 0x08 /* Private */,
     183,    2, 1185,    2, 0x08 /* Private */,
     188,    2, 1190,    2, 0x08 /* Private */,
     189,    0, 1195,    2, 0x08 /* Private */,
     190,    0, 1196,    2, 0x08 /* Private */,
     191,    1, 1197,    2, 0x08 /* Private */,
     193,    0, 1200,    2, 0x08 /* Private */,
     194,    0, 1201,    2, 0x08 /* Private */,
     195,    0, 1202,    2, 0x08 /* Private */,
     196,    0, 1203,    2, 0x08 /* Private */,
     197,    0, 1204,    2, 0x08 /* Private */,
     198,    0, 1205,    2, 0x08 /* Private */,
     199,    0, 1206,    2, 0x08 /* Private */,
     200,    0, 1207,    2, 0x08 /* Private */,
     201,    0, 1208,    2, 0x08 /* Private */,
     202,    0, 1209,    2, 0x08 /* Private */,
     203,    0, 1210,    2, 0x08 /* Private */,
     204,    0, 1211,    2, 0x08 /* Private */,
     205,    0, 1212,    2, 0x08 /* Private */,
     206,    0, 1213,    2, 0x08 /* Private */,
     207,    0, 1214,    2, 0x08 /* Private */,
     208,    0, 1215,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 31, QMetaType::Bool, QMetaType::Bool,   32,   33,   34,
    QMetaType::Void, 0x80000000 | 31, QMetaType::Bool,   32,   33,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, 0x80000000 | 28, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   32,   33,   34,   35,
    QMetaType::Void, 0x80000000 | 28, QMetaType::Bool, QMetaType::Bool,   32,   33,   34,
    QMetaType::Void, 0x80000000 | 28, QMetaType::Bool,   32,   33,
    QMetaType::Void, 0x80000000 | 28,   32,
    QMetaType::Void, 0x80000000 | 28, QMetaType::Bool, QMetaType::Bool,   32,   33,   34,
    QMetaType::Void, 0x80000000 | 28, QMetaType::Bool,   32,   33,
    QMetaType::Void, 0x80000000 | 28,   32,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, 0x80000000 | 28,   42,
    QMetaType::Void, 0x80000000 | 28,   42,
    QMetaType::Void, 0x80000000 | 28, QMetaType::QString, QMetaType::QString,   42,   45,   46,
    QMetaType::Void, 0x80000000 | 31, 0x80000000 | 38, QMetaType::Bool,   32,   39,   48,
    QMetaType::Void, 0x80000000 | 28,   42,
    QMetaType::Void, 0x80000000 | 28,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, 0x80000000 | 57, QMetaType::Bool,   58,   59,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   58,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 70,   71,
    QMetaType::Void, QMetaType::Bool,   73,
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
    QMetaType::Void, 0x80000000 | 109, 0x80000000 | 109,  110,  111,
    QMetaType::Void, QMetaType::QPoint,  113,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,  113,
    QMetaType::Void, 0x80000000 | 109,   39,
    QMetaType::Void, 0x80000000 | 109,   39,
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
    QMetaType::Void, QMetaType::QPoint,  113,
    QMetaType::Void, QMetaType::QPoint,  113,
    QMetaType::Void, QMetaType::QPoint,  113,
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
    QMetaType::Void, QMetaType::Bool,  161,
    QMetaType::Void, QMetaType::Bool,  161,
    QMetaType::Void, QMetaType::Int,  164,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  173,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  175,  176,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 184, 0x80000000 | 186,  185,  187,
    QMetaType::Void, 0x80000000 | 184, 0x80000000 | 186,  185,  187,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  192,
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

       0        // eod
};

void OBSBasic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OBSBasic *_t = static_cast<OBSBasic *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->StartStreaming(); break;
        case 1: _t->StopStreaming(); break;
        case 2: _t->ForceStopStreaming(); break;
        case 3: _t->StreamDelayStarting((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->StreamDelayStopping((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->StreamingStart(); break;
        case 6: _t->StreamStopping(); break;
        case 7: _t->StreamingStop((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->StartRecording(); break;
        case 9: _t->StopRecording(); break;
        case 10: _t->RecordingStart(); break;
        case 11: _t->RecordStopping(); break;
        case 12: _t->RecordingStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->StartReplayBuffer(); break;
        case 14: _t->StopReplayBuffer(); break;
        case 15: _t->ReplayBufferStart(); break;
        case 16: _t->ReplayBufferSave(); break;
        case 17: _t->ReplayBufferStopping(); break;
        case 18: _t->ReplayBufferStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->SaveProjectDeferred(); break;
        case 20: _t->SaveProject(); break;
        case 21: _t->SetTransition((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 22: _t->TransitionToScene((*reinterpret_cast< OBSScene(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 23: _t->TransitionToScene((*reinterpret_cast< OBSScene(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 24: _t->TransitionToScene((*reinterpret_cast< OBSScene(*)>(_a[1]))); break;
        case 25: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 26: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 27: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 28: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 29: _t->SetCurrentScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 30: _t->SetCurrentScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 31: _t->SetCurrentScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 32: _t->AddSceneItem((*reinterpret_cast< OBSSceneItem(*)>(_a[1]))); break;
        case 33: _t->RemoveSceneItem((*reinterpret_cast< OBSSceneItem(*)>(_a[1]))); break;
        case 34: _t->AddScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 35: _t->RemoveScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 36: _t->RenameSources((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 37: _t->SelectSceneItem((*reinterpret_cast< OBSScene(*)>(_a[1])),(*reinterpret_cast< OBSSceneItem(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 38: _t->ActivateAudioSource((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 39: _t->DeactivateAudioSource((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 40: _t->DuplicateSelectedScene(); break;
        case 41: _t->RemoveSelectedScene(); break;
        case 42: _t->RemoveSelectedSceneItem(); break;
        case 43: _t->ToggleAlwaysOnTop(); break;
        case 44: _t->ReorderSources((*reinterpret_cast< OBSScene(*)>(_a[1]))); break;
        case 45: _t->ProcessHotkey((*reinterpret_cast< obs_hotkey_id(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 46: _t->AddTransition(); break;
        case 47: _t->RenameTransition(); break;
        case 48: _t->TransitionClicked(); break;
        case 49: _t->TransitionStopped(); break;
        case 50: _t->TransitionFullyStopped(); break;
        case 51: _t->TriggerQuickTransition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->SetDeinterlacingMode(); break;
        case 53: _t->SetDeinterlacingOrder(); break;
        case 54: _t->SetScaleFilter(); break;
        case 55: _t->IconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 56: _t->SetShowing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: _t->ToggleShowHide(); break;
        case 58: _t->HideAudioControl(); break;
        case 59: _t->UnhideAllAudioControls(); break;
        case 60: _t->ToggleHideMixer(); break;
        case 61: _t->MixerRenameSource(); break;
        case 62: _t->on_mixerScrollArea_customContextMenuRequested(); break;
        case 63: _t->on_actionCopySource_triggered(); break;
        case 64: _t->on_actionPasteRef_triggered(); break;
        case 65: _t->on_actionPasteDup_triggered(); break;
        case 66: _t->on_actionCopyFilters_triggered(); break;
        case 67: _t->on_actionPasteFilters_triggered(); break;
        case 68: _t->on_actionFullscreenInterface_triggered(); break;
        case 69: _t->on_actionShow_Recordings_triggered(); break;
        case 70: _t->on_actionRemux_triggered(); break;
        case 71: _t->on_action_Settings_triggered(); break;
        case 72: _t->on_actionAdvAudioProperties_triggered(); break;
        case 73: _t->on_advAudioProps_clicked(); break;
        case 74: _t->on_advAudioProps_destroyed(); break;
        case 75: _t->on_actionShowLogs_triggered(); break;
        case 76: _t->on_actionUploadCurrentLog_triggered(); break;
        case 77: _t->on_actionUploadLastLog_triggered(); break;
        case 78: _t->on_actionViewCurrentLog_triggered(); break;
        case 79: _t->on_actionCheckForUpdates_triggered(); break;
        case 80: _t->on_actionEditTransform_triggered(); break;
        case 81: _t->on_actionCopyTransform_triggered(); break;
        case 82: _t->on_actionPasteTransform_triggered(); break;
        case 83: _t->on_actionRotate90CW_triggered(); break;
        case 84: _t->on_actionRotate90CCW_triggered(); break;
        case 85: _t->on_actionRotate180_triggered(); break;
        case 86: _t->on_actionFlipHorizontal_triggered(); break;
        case 87: _t->on_actionFlipVertical_triggered(); break;
        case 88: _t->on_actionFitToScreen_triggered(); break;
        case 89: _t->on_actionStretchToScreen_triggered(); break;
        case 90: _t->on_actionCenterToScreen_triggered(); break;
        case 91: _t->on_scenes_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 92: _t->on_scenes_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 93: _t->on_actionAddScene_triggered(); break;
        case 94: _t->on_actionRemoveScene_triggered(); break;
        case 95: _t->on_actionSceneUp_triggered(); break;
        case 96: _t->on_actionSceneDown_triggered(); break;
        case 97: _t->on_sources_itemSelectionChanged(); break;
        case 98: _t->on_sources_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 99: _t->on_sources_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 100: _t->on_scenes_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 101: _t->on_actionAddSource_triggered(); break;
        case 102: _t->on_actionRemoveSource_triggered(); break;
        case 103: _t->on_actionInteract_triggered(); break;
        case 104: _t->on_actionSourceProperties_triggered(); break;
        case 105: _t->on_actionSourceUp_triggered(); break;
        case 106: _t->on_actionSourceDown_triggered(); break;
        case 107: _t->on_actionMoveUp_triggered(); break;
        case 108: _t->on_actionMoveDown_triggered(); break;
        case 109: _t->on_actionMoveToTop_triggered(); break;
        case 110: _t->on_actionMoveToBottom_triggered(); break;
        case 111: _t->on_actionLockPreview_triggered(); break;
        case 112: _t->on_scalingMenu_aboutToShow(); break;
        case 113: _t->on_actionScaleWindow_triggered(); break;
        case 114: _t->on_actionScaleCanvas_triggered(); break;
        case 115: _t->on_actionScaleOutput_triggered(); break;
        case 116: _t->on_streamButton_clicked(); break;
        case 117: _t->on_recordButton_clicked(); break;
        case 118: _t->on_settingsButton_clicked(); break;
        case 119: _t->on_actionHelpPortal_triggered(); break;
        case 120: _t->on_actionWebsite_triggered(); break;
        case 121: _t->on_preview_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 122: _t->on_program_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 123: _t->on_previewDisabledLabel_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 124: _t->on_actionNewSceneCollection_triggered(); break;
        case 125: _t->on_actionDupSceneCollection_triggered(); break;
        case 126: _t->on_actionRenameSceneCollection_triggered(); break;
        case 127: _t->on_actionRemoveSceneCollection_triggered(); break;
        case 128: _t->on_actionImportSceneCollection_triggered(); break;
        case 129: _t->on_actionExportSceneCollection_triggered(); break;
        case 130: _t->on_actionNewProfile_triggered(); break;
        case 131: _t->on_actionDupProfile_triggered(); break;
        case 132: _t->on_actionRenameProfile_triggered(); break;
        case 133: _t->on_actionRemoveProfile_triggered(); break;
        case 134: _t->on_actionImportProfile_triggered(); break;
        case 135: _t->on_actionExportProfile_triggered(); break;
        case 136: _t->on_actionShowSettingsFolder_triggered(); break;
        case 137: _t->on_actionShowProfileFolder_triggered(); break;
        case 138: _t->on_actionAlwaysOnTop_triggered(); break;
        case 139: _t->on_toggleListboxToolbars_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 140: _t->on_toggleStatusBar_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 141: _t->on_transitions_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 142: _t->on_transitionAdd_clicked(); break;
        case 143: _t->on_transitionRemove_clicked(); break;
        case 144: _t->on_transitionProps_clicked(); break;
        case 145: _t->on_modeSwitch_clicked(); break;
        case 146: _t->on_autoConfigure_triggered(); break;
        case 147: _t->on_stats_triggered(); break;
        case 148: _t->on_resetUI_triggered(); break;
        case 149: _t->on_lockUI_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 150: _t->logUploadFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 151: _t->updateCheckFinished(); break;
        case 152: _t->AddSourceFromAction(); break;
        case 153: _t->MoveSceneToTop(); break;
        case 154: _t->MoveSceneToBottom(); break;
        case 155: _t->EditSceneName(); break;
        case 156: _t->EditSceneItemName(); break;
        case 157: _t->SceneNameEdited((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemDelegate::EndEditHint(*)>(_a[2]))); break;
        case 158: _t->SceneItemNameEdited((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemDelegate::EndEditHint(*)>(_a[2]))); break;
        case 159: _t->OpenSceneFilters(); break;
        case 160: _t->OpenFilters(); break;
        case 161: _t->EnablePreviewDisplay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 162: _t->TogglePreview(); break;
        case 163: _t->NudgeUp(); break;
        case 164: _t->NudgeDown(); break;
        case 165: _t->NudgeLeft(); break;
        case 166: _t->NudgeRight(); break;
        case 167: _t->OpenStudioProgramProjector(); break;
        case 168: _t->OpenPreviewProjector(); break;
        case 169: _t->OpenSourceProjector(); break;
        case 170: _t->OpenMultiviewProjector(); break;
        case 171: _t->OpenSceneProjector(); break;
        case 172: _t->OpenStudioProgramWindow(); break;
        case 173: _t->OpenPreviewWindow(); break;
        case 174: _t->OpenSourceWindow(); break;
        case 175: _t->OpenMultiviewWindow(); break;
        case 176: _t->OpenSceneWindow(); break;
        case 177: _t->on_actionResetTransform_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 157:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 158:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject OBSBasic::staticMetaObject = {
    { &OBSMainWindow::staticMetaObject, qt_meta_stringdata_OBSBasic.data,
      qt_meta_data_OBSBasic,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OBSBasic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasic::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OBSBasic.stringdata0))
        return static_cast<void*>(const_cast< OBSBasic*>(this));
    return OBSMainWindow::qt_metacast(_clname);
}

int OBSBasic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OBSMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 178)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 178;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 178)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 178;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
