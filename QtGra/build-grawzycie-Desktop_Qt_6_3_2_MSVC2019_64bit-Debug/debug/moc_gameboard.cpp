/****************************************************************************
** Meta object code from reading C++ file 'gameboard.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../grawzycie/gameboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gameboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameOfLifeBoard_t {
    uint offsetsAndSizes[28];
    char stringdata0[16];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[6];
    char stringdata5[7];
    char stringdata6[5];
    char stringdata7[5];
    char stringdata8[7];
    char stringdata9[12];
    char stringdata10[7];
    char stringdata11[12];
    char stringdata12[4];
    char stringdata13[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_GameOfLifeBoard_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_GameOfLifeBoard_t qt_meta_stringdata_GameOfLifeBoard = {
    {
        QT_MOC_LITERAL(0, 15),  // "GameOfLifeBoard"
        QT_MOC_LITERAL(16, 9),  // "gameSaved"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 15),  // "initializeBoard"
        QT_MOC_LITERAL(43, 5),  // "Width"
        QT_MOC_LITERAL(49, 6),  // "Height"
        QT_MOC_LITERAL(56, 4),  // "play"
        QT_MOC_LITERAL(61, 4),  // "stop"
        QT_MOC_LITERAL(66, 6),  // "faster"
        QT_MOC_LITERAL(73, 11),  // "updateBoard"
        QT_MOC_LITERAL(85, 6),  // "random"
        QT_MOC_LITERAL(92, 11),  // "cellClicked"
        QT_MOC_LITERAL(104, 3),  // "row"
        QT_MOC_LITERAL(108, 6)   // "column"
    },
    "GameOfLifeBoard",
    "gameSaved",
    "",
    "initializeBoard",
    "Width",
    "Height",
    "play",
    "stop",
    "faster",
    "updateBoard",
    "random",
    "cellClicked",
    "row",
    "column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameOfLifeBoard[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    2,   63,    2, 0x0a,    2 /* Public */,
       6,    0,   68,    2, 0x0a,    5 /* Public */,
       7,    0,   69,    2, 0x0a,    6 /* Public */,
       8,    0,   70,    2, 0x0a,    7 /* Public */,
       9,    0,   71,    2, 0x0a,    8 /* Public */,
      10,    0,   72,    2, 0x0a,    9 /* Public */,
      11,    2,   73,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,   13,

       0        // eod
};

void GameOfLifeBoard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameOfLifeBoard *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->gameSaved(); break;
        case 1: _t->initializeBoard((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->play(); break;
        case 3: _t->stop(); break;
        case 4: _t->faster(); break;
        case 5: _t->updateBoard(); break;
        case 6: _t->random(); break;
        case 7: _t->cellClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GameOfLifeBoard::*)();
            if (_t _q_method = &GameOfLifeBoard::gameSaved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject GameOfLifeBoard::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableWidget::staticMetaObject>(),
    qt_meta_stringdata_GameOfLifeBoard.offsetsAndSizes,
    qt_meta_data_GameOfLifeBoard,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_GameOfLifeBoard_t
, QtPrivate::TypeAndForceComplete<GameOfLifeBoard, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *GameOfLifeBoard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameOfLifeBoard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameOfLifeBoard.stringdata0))
        return static_cast<void*>(this);
    return QTableWidget::qt_metacast(_clname);
}

int GameOfLifeBoard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void GameOfLifeBoard::gameSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
