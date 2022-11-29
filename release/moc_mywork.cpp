/****************************************************************************
** Meta object code from reading C++ file 'mywork.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mywork.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mywork.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyWoker_t {
    QByteArrayData data[14];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyWoker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyWoker_t qt_meta_stringdata_MyWoker = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MyWoker"
QT_MOC_LITERAL(1, 8, 19), // "FinishSearchworkSig"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 17), // "FinishcopyworkSig"
QT_MOC_LITERAL(4, 47, 10), // "hasCopyCnt"
QT_MOC_LITERAL(5, 58, 10), // "searchFile"
QT_MOC_LITERAL(6, 69, 4), // "path"
QT_MOC_LITERAL(7, 74, 12), // "doCopyWorker"
QT_MOC_LITERAL(8, 87, 8), // "filelist"
QT_MOC_LITERAL(9, 96, 7), // "dirpath"
QT_MOC_LITERAL(10, 104, 16), // "doMySearchWorker"
QT_MOC_LITERAL(11, 121, 11), // "QList<QDir>"
QT_MOC_LITERAL(12, 133, 7), // "dirlist"
QT_MOC_LITERAL(13, 141, 4) // "list"

    },
    "MyWoker\0FinishSearchworkSig\0\0"
    "FinishcopyworkSig\0hasCopyCnt\0searchFile\0"
    "path\0doCopyWorker\0filelist\0dirpath\0"
    "doMySearchWorker\0QList<QDir>\0dirlist\0"
    "list"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyWoker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,
       4,    1,   50,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   56,    2, 0x0a /* Public */,
      10,    2,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList, QMetaType::QString,    8,    9,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QStringList,   12,   13,

       0        // eod
};

void MyWoker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyWoker *_t = static_cast<MyWoker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FinishSearchworkSig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->FinishcopyworkSig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->hasCopyCnt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->searchFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->doCopyWorker((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->doMySearchWorker((*reinterpret_cast< QList<QDir>(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyWoker::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyWoker::FinishSearchworkSig)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MyWoker::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyWoker::FinishcopyworkSig)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MyWoker::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyWoker::hasCopyCnt)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MyWoker::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyWoker::searchFile)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject MyWoker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyWoker.data,
      qt_meta_data_MyWoker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyWoker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyWoker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyWoker.stringdata0))
        return static_cast<void*>(const_cast< MyWoker*>(this));
    return QObject::qt_metacast(_clname);
}

int MyWoker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MyWoker::FinishSearchworkSig(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyWoker::FinishcopyworkSig(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyWoker::hasCopyCnt(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MyWoker::searchFile(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
