/****************************************************************************
** Meta object code from reading C++ file 'window-basic-settings.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UI/window-basic-settings.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-basic-settings.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SilentUpdateCheckBox_t {
    QByteArrayData data[4];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SilentUpdateCheckBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SilentUpdateCheckBox_t qt_meta_stringdata_SilentUpdateCheckBox = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SilentUpdateCheckBox"
QT_MOC_LITERAL(1, 21, 18), // "setCheckedSilently"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 7) // "checked"

    },
    "SilentUpdateCheckBox\0setCheckedSilently\0"
    "\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SilentUpdateCheckBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void SilentUpdateCheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SilentUpdateCheckBox *_t = static_cast<SilentUpdateCheckBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCheckedSilently((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SilentUpdateCheckBox::staticMetaObject = {
    { &QCheckBox::staticMetaObject, qt_meta_stringdata_SilentUpdateCheckBox.data,
      qt_meta_data_SilentUpdateCheckBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SilentUpdateCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SilentUpdateCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SilentUpdateCheckBox.stringdata0))
        return static_cast<void*>(const_cast< SilentUpdateCheckBox*>(this));
    return QCheckBox::qt_metacast(_clname);
}

int SilentUpdateCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_SilentUpdateSpinBox_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SilentUpdateSpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SilentUpdateSpinBox_t qt_meta_stringdata_SilentUpdateSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SilentUpdateSpinBox"
QT_MOC_LITERAL(1, 20, 16), // "setValueSilently"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 3) // "val"

    },
    "SilentUpdateSpinBox\0setValueSilently\0"
    "\0val"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SilentUpdateSpinBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void SilentUpdateSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SilentUpdateSpinBox *_t = static_cast<SilentUpdateSpinBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setValueSilently((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SilentUpdateSpinBox::staticMetaObject = {
    { &QSpinBox::staticMetaObject, qt_meta_stringdata_SilentUpdateSpinBox.data,
      qt_meta_data_SilentUpdateSpinBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SilentUpdateSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SilentUpdateSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SilentUpdateSpinBox.stringdata0))
        return static_cast<void*>(const_cast< SilentUpdateSpinBox*>(this));
    return QSpinBox::qt_metacast(_clname);
}

int SilentUpdateSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_OBSBasicSettings_t {
    QByteArrayData data[52];
    char stringdata0[1236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSBasicSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSBasicSettings_t qt_meta_stringdata_OBSBasicSettings = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OBSBasicSettings"
QT_MOC_LITERAL(1, 17, 18), // "on_theme_activated"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 3), // "idx"
QT_MOC_LITERAL(4, 41, 34), // "on_listWidget_itemSelectionCh..."
QT_MOC_LITERAL(5, 76, 20), // "on_buttonBox_clicked"
QT_MOC_LITERAL(6, 97, 16), // "QAbstractButton*"
QT_MOC_LITERAL(7, 114, 6), // "button"
QT_MOC_LITERAL(8, 121, 33), // "on_streamType_currentIndexCha..."
QT_MOC_LITERAL(9, 155, 29), // "on_simpleOutputBrowse_clicked"
QT_MOC_LITERAL(10, 185, 30), // "on_advOutRecPathBrowse_clicked"
QT_MOC_LITERAL(11, 216, 29), // "on_advOutFFPathBrowse_clicked"
QT_MOC_LITERAL(12, 246, 36), // "on_advOutEncoder_currentIndex..."
QT_MOC_LITERAL(13, 283, 39), // "on_advOutRecEncoder_currentIn..."
QT_MOC_LITERAL(14, 323, 36), // "on_advOutFFIgnoreCompat_state..."
QT_MOC_LITERAL(15, 360, 5), // "state"
QT_MOC_LITERAL(16, 366, 37), // "on_advOutFFFormat_currentInde..."
QT_MOC_LITERAL(17, 404, 39), // "on_advOutFFAEncoder_currentIn..."
QT_MOC_LITERAL(18, 444, 39), // "on_advOutFFVEncoder_currentIn..."
QT_MOC_LITERAL(19, 484, 35), // "on_advOutFFType_currentIndexC..."
QT_MOC_LITERAL(20, 520, 34), // "on_colorFormat_currentIndexCh..."
QT_MOC_LITERAL(21, 555, 4), // "text"
QT_MOC_LITERAL(22, 560, 32), // "on_filenameFormatting_textEdited"
QT_MOC_LITERAL(23, 593, 35), // "on_outputResolution_editTextC..."
QT_MOC_LITERAL(24, 629, 33), // "on_baseResolution_editTextCha..."
QT_MOC_LITERAL(25, 663, 26), // "on_disableOSXVSync_clicked"
QT_MOC_LITERAL(26, 690, 14), // "GeneralChanged"
QT_MOC_LITERAL(27, 705, 12), // "AudioChanged"
QT_MOC_LITERAL(28, 718, 19), // "AudioChangedRestart"
QT_MOC_LITERAL(29, 738, 18), // "ReloadAudioSources"
QT_MOC_LITERAL(30, 757, 15), // "SurroundWarning"
QT_MOC_LITERAL(31, 773, 20), // "SpeakerLayoutChanged"
QT_MOC_LITERAL(32, 794, 14), // "OutputsChanged"
QT_MOC_LITERAL(33, 809, 14), // "Stream1Changed"
QT_MOC_LITERAL(34, 824, 12), // "VideoChanged"
QT_MOC_LITERAL(35, 837, 22), // "VideoChangedResolution"
QT_MOC_LITERAL(36, 860, 19), // "VideoChangedRestart"
QT_MOC_LITERAL(37, 880, 14), // "HotkeysChanged"
QT_MOC_LITERAL(38, 895, 13), // "ReloadHotkeys"
QT_MOC_LITERAL(39, 909, 13), // "obs_hotkey_id"
QT_MOC_LITERAL(40, 923, 9), // "ignoreKey"
QT_MOC_LITERAL(41, 933, 15), // "AdvancedChanged"
QT_MOC_LITERAL(42, 949, 22), // "AdvancedChangedRestart"
QT_MOC_LITERAL(43, 972, 25), // "UpdateStreamDelayEstimate"
QT_MOC_LITERAL(44, 998, 37), // "UpdateAutomaticReplayBufferCh..."
QT_MOC_LITERAL(45, 1036, 22), // "AdvOutRecCheckWarnings"
QT_MOC_LITERAL(46, 1059, 29), // "SimpleRecordingQualityChanged"
QT_MOC_LITERAL(47, 1089, 29), // "SimpleRecordingEncoderChanged"
QT_MOC_LITERAL(48, 1119, 37), // "SimpleRecordingQualityLossles..."
QT_MOC_LITERAL(49, 1157, 25), // "SimpleReplayBufferChanged"
QT_MOC_LITERAL(50, 1183, 22), // "AdvReplayBufferChanged"
QT_MOC_LITERAL(51, 1206, 29) // "SimpleStreamingEncoderChanged"

    },
    "OBSBasicSettings\0on_theme_activated\0"
    "\0idx\0on_listWidget_itemSelectionChanged\0"
    "on_buttonBox_clicked\0QAbstractButton*\0"
    "button\0on_streamType_currentIndexChanged\0"
    "on_simpleOutputBrowse_clicked\0"
    "on_advOutRecPathBrowse_clicked\0"
    "on_advOutFFPathBrowse_clicked\0"
    "on_advOutEncoder_currentIndexChanged\0"
    "on_advOutRecEncoder_currentIndexChanged\0"
    "on_advOutFFIgnoreCompat_stateChanged\0"
    "state\0on_advOutFFFormat_currentIndexChanged\0"
    "on_advOutFFAEncoder_currentIndexChanged\0"
    "on_advOutFFVEncoder_currentIndexChanged\0"
    "on_advOutFFType_currentIndexChanged\0"
    "on_colorFormat_currentIndexChanged\0"
    "text\0on_filenameFormatting_textEdited\0"
    "on_outputResolution_editTextChanged\0"
    "on_baseResolution_editTextChanged\0"
    "on_disableOSXVSync_clicked\0GeneralChanged\0"
    "AudioChanged\0AudioChangedRestart\0"
    "ReloadAudioSources\0SurroundWarning\0"
    "SpeakerLayoutChanged\0OutputsChanged\0"
    "Stream1Changed\0VideoChanged\0"
    "VideoChangedResolution\0VideoChangedRestart\0"
    "HotkeysChanged\0ReloadHotkeys\0obs_hotkey_id\0"
    "ignoreKey\0AdvancedChanged\0"
    "AdvancedChangedRestart\0UpdateStreamDelayEstimate\0"
    "UpdateAutomaticReplayBufferCheckboxes\0"
    "AdvOutRecCheckWarnings\0"
    "SimpleRecordingQualityChanged\0"
    "SimpleRecordingEncoderChanged\0"
    "SimpleRecordingQualityLosslessWarning\0"
    "SimpleReplayBufferChanged\0"
    "AdvReplayBufferChanged\0"
    "SimpleStreamingEncoderChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSBasicSettings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  234,    2, 0x08 /* Private */,
       4,    0,  237,    2, 0x08 /* Private */,
       5,    1,  238,    2, 0x08 /* Private */,
       8,    1,  241,    2, 0x08 /* Private */,
       9,    0,  244,    2, 0x08 /* Private */,
      10,    0,  245,    2, 0x08 /* Private */,
      11,    0,  246,    2, 0x08 /* Private */,
      12,    1,  247,    2, 0x08 /* Private */,
      13,    1,  250,    2, 0x08 /* Private */,
      14,    1,  253,    2, 0x08 /* Private */,
      16,    1,  256,    2, 0x08 /* Private */,
      17,    1,  259,    2, 0x08 /* Private */,
      18,    1,  262,    2, 0x08 /* Private */,
      19,    1,  265,    2, 0x08 /* Private */,
      20,    1,  268,    2, 0x08 /* Private */,
      22,    1,  271,    2, 0x08 /* Private */,
      23,    1,  274,    2, 0x08 /* Private */,
      24,    1,  277,    2, 0x08 /* Private */,
      25,    0,  280,    2, 0x08 /* Private */,
      26,    0,  281,    2, 0x08 /* Private */,
      27,    0,  282,    2, 0x08 /* Private */,
      28,    0,  283,    2, 0x08 /* Private */,
      29,    0,  284,    2, 0x08 /* Private */,
      30,    1,  285,    2, 0x08 /* Private */,
      31,    1,  288,    2, 0x08 /* Private */,
      32,    0,  291,    2, 0x08 /* Private */,
      33,    0,  292,    2, 0x08 /* Private */,
      34,    0,  293,    2, 0x08 /* Private */,
      35,    0,  294,    2, 0x08 /* Private */,
      36,    0,  295,    2, 0x08 /* Private */,
      37,    0,  296,    2, 0x08 /* Private */,
      38,    1,  297,    2, 0x08 /* Private */,
      38,    0,  300,    2, 0x28 /* Private | MethodCloned */,
      41,    0,  301,    2, 0x08 /* Private */,
      42,    0,  302,    2, 0x08 /* Private */,
      43,    0,  303,    2, 0x08 /* Private */,
      44,    0,  304,    2, 0x08 /* Private */,
      45,    0,  305,    2, 0x08 /* Private */,
      46,    0,  306,    2, 0x08 /* Private */,
      47,    0,  307,    2, 0x08 /* Private */,
      48,    1,  308,    2, 0x08 /* Private */,
      49,    0,  311,    2, 0x08 /* Private */,
      50,    0,  312,    2, 0x08 /* Private */,
      51,    0,  313,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OBSBasicSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OBSBasicSettings *_t = static_cast<OBSBasicSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_theme_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_listWidget_itemSelectionChanged(); break;
        case 2: _t->on_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 3: _t->on_streamType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_simpleOutputBrowse_clicked(); break;
        case 5: _t->on_advOutRecPathBrowse_clicked(); break;
        case 6: _t->on_advOutFFPathBrowse_clicked(); break;
        case 7: _t->on_advOutEncoder_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_advOutRecEncoder_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_advOutFFIgnoreCompat_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_advOutFFFormat_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_advOutFFAEncoder_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_advOutFFVEncoder_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_advOutFFType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_colorFormat_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->on_filenameFormatting_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->on_outputResolution_editTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->on_baseResolution_editTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->on_disableOSXVSync_clicked(); break;
        case 19: _t->GeneralChanged(); break;
        case 20: _t->AudioChanged(); break;
        case 21: _t->AudioChangedRestart(); break;
        case 22: _t->ReloadAudioSources(); break;
        case 23: _t->SurroundWarning((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->SpeakerLayoutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->OutputsChanged(); break;
        case 26: _t->Stream1Changed(); break;
        case 27: _t->VideoChanged(); break;
        case 28: _t->VideoChangedResolution(); break;
        case 29: _t->VideoChangedRestart(); break;
        case 30: _t->HotkeysChanged(); break;
        case 31: _t->ReloadHotkeys((*reinterpret_cast< obs_hotkey_id(*)>(_a[1]))); break;
        case 32: _t->ReloadHotkeys(); break;
        case 33: _t->AdvancedChanged(); break;
        case 34: _t->AdvancedChangedRestart(); break;
        case 35: _t->UpdateStreamDelayEstimate(); break;
        case 36: _t->UpdateAutomaticReplayBufferCheckboxes(); break;
        case 37: _t->AdvOutRecCheckWarnings(); break;
        case 38: _t->SimpleRecordingQualityChanged(); break;
        case 39: _t->SimpleRecordingEncoderChanged(); break;
        case 40: _t->SimpleRecordingQualityLosslessWarning((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->SimpleReplayBufferChanged(); break;
        case 42: _t->AdvReplayBufferChanged(); break;
        case 43: _t->SimpleStreamingEncoderChanged(); break;
        default: ;
        }
    }
}

const QMetaObject OBSBasicSettings::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OBSBasicSettings.data,
      qt_meta_data_OBSBasicSettings,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OBSBasicSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasicSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OBSBasicSettings.stringdata0))
        return static_cast<void*>(const_cast< OBSBasicSettings*>(this));
    return QDialog::qt_metacast(_clname);
}

int OBSBasicSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 44)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 44;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
