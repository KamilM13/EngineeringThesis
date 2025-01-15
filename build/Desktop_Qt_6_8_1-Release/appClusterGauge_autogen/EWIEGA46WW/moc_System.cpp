/****************************************************************************
** Meta object code from reading C++ file 'System.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../System.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'System.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN6SystemE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN6SystemE = QtMocHelpers::stringData(
    "System",
    "speedChanged",
    "",
    "speed",
    "speedColorWarningChanged",
    "speedColorWarning",
    "batteryLevelChanged",
    "batteryLevel",
    "batteryColorWarningChanged",
    "batteryColorWarning",
    "rightBlinkerChanged",
    "rightBlinker",
    "leftBlinkerChanged",
    "leftBlinker",
    "speedometerAngleChanged",
    "speedometerAngle",
    "stickStateChanged",
    "stickState",
    "stickStateStringChanged",
    "stickStateString",
    "lightsStateChanged",
    "lightsState",
    "distanceWarningChanged",
    "distanceWarning"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN6SystemE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
      11,  113, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,   12 /* Public */,
       4,    1,   83,    2, 0x06,   14 /* Public */,
       6,    1,   86,    2, 0x06,   16 /* Public */,
       8,    1,   89,    2, 0x06,   18 /* Public */,
      10,    1,   92,    2, 0x06,   20 /* Public */,
      12,    1,   95,    2, 0x06,   22 /* Public */,
      14,    1,   98,    2, 0x06,   24 /* Public */,
      16,    1,  101,    2, 0x06,   26 /* Public */,
      18,    1,  104,    2, 0x06,   28 /* Public */,
      20,    1,  107,    2, 0x06,   30 /* Public */,
      22,    1,  110,    2, 0x06,   32 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Float,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Bool,   23,

 // properties: name, type, flags, notifyId, revision
       3, QMetaType::Int, 0x00015103, uint(0), 0,
       5, QMetaType::QString, 0x00015103, uint(1), 0,
       7, QMetaType::Int, 0x00015103, uint(2), 0,
       9, QMetaType::QString, 0x00015103, uint(3), 0,
      11, QMetaType::Bool, 0x00015103, uint(4), 0,
      13, QMetaType::Bool, 0x00015103, uint(5), 0,
      15, QMetaType::Float, 0x00015103, uint(6), 0,
      17, QMetaType::Int, 0x00015103, uint(7), 0,
      19, QMetaType::QString, 0x00015103, uint(8), 0,
      21, QMetaType::Bool, 0x00015103, uint(9), 0,
      23, QMetaType::Bool, 0x00015103, uint(10), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject System::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN6SystemE.offsetsAndSizes,
    qt_meta_data_ZN6SystemE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN6SystemE_t,
        // property 'speed'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'speedColorWarning'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'batteryLevel'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'batteryColorWarning'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'rightBlinker'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'leftBlinker'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'speedometerAngle'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'stickState'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'stickStateString'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'lightsState'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'distanceWarning'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<System, std::true_type>,
        // method 'speedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'speedColorWarningChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'batteryLevelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'batteryColorWarningChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'rightBlinkerChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'leftBlinkerChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'speedometerAngleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'stickStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'stickStateStringChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'lightsStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'distanceWarningChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void System::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<System *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->speedChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->speedColorWarningChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->batteryLevelChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->batteryColorWarningChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->rightBlinkerChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->leftBlinkerChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->speedometerAngleChanged((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 7: _t->stickStateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->stickStateStringChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->lightsStateChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->distanceWarningChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (System::*)(int );
            if (_q_method_type _q_method = &System::speedChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (System::*)(QString );
            if (_q_method_type _q_method = &System::speedColorWarningChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (System::*)(int );
            if (_q_method_type _q_method = &System::batteryLevelChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (System::*)(QString );
            if (_q_method_type _q_method = &System::batteryColorWarningChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (System::*)(bool );
            if (_q_method_type _q_method = &System::rightBlinkerChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (System::*)(bool );
            if (_q_method_type _q_method = &System::leftBlinkerChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (System::*)(float );
            if (_q_method_type _q_method = &System::speedometerAngleChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (System::*)(int );
            if (_q_method_type _q_method = &System::stickStateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (System::*)(QString );
            if (_q_method_type _q_method = &System::stickStateStringChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (System::*)(bool );
            if (_q_method_type _q_method = &System::lightsStateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (System::*)(bool );
            if (_q_method_type _q_method = &System::distanceWarningChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->speed(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->speedColorWarning(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->batteryLevel(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->batteryColorWarning(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->rightBlinker(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->leftBlinker(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->speedometerAngle(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->stickState(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->stickStateString(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->lightsState(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->distanceWarning(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSpeed(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setSpeedColorWarning(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setBatteryLevel(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setBatteryColorWarning(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setRightBlinker(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setLeftBlinker(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setSpeedometerAngle(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setStickState(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setStickStateString(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setLightsState(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setDistanceWarning(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *System::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *System::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN6SystemE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int System::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void System::speedChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void System::speedColorWarningChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void System::batteryLevelChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void System::batteryColorWarningChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void System::rightBlinkerChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void System::leftBlinkerChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void System::speedometerAngleChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void System::stickStateChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void System::stickStateStringChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void System::lightsStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void System::distanceWarningChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
