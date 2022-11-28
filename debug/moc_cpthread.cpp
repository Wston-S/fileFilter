/****************************************************************************
** Meta object code from reading C++ file 'cpthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cpthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cpthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CpThread_t {
    QByteArrayData data[6];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CpThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CpThread_t qt_meta_stringdata_CpThread = {
    {
QT_MOC_LITERAL(0, 0, 8), // "CpThread"
QT_MOC_LITERAL(1, 9, 13), // "startCpSignal"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 17), // "startSearchSignal"
QT_MOC_LITERAL(4, 42, 10), // "waitCpOver"
QT_MOC_LITERAL(5, 53, 4) // "para"

    },
    "CpThread\0startCpSignal\0\0startSearchSignal\0"
    "waitCpOver\0para"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CpThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       3,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QStringList,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void CpThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CpThread *_t = static_cast<CpThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startCpSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->startSearchSignal((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->waitCpOver((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CpThread::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CpThread::startCpSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CpThread::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CpThread::startSearchSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject CpThread::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CpThread.data,
      qt_meta_data_CpThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CpThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CpThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CpThread.stringdata0))
        return static_cast<void*>(const_cast< CpThread*>(this));
    return QObject::qt_metacast(_clname);
}

int CpThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void CpThread::startCpSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CpThread::startSearchSignal(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
