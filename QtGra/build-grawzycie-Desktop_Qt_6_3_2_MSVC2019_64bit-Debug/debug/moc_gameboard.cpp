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
    uint offsetsAndSizes[32];
    char stringdata0[16];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[22];
    char stringdata5[16];
    char stringdata6[6];
    char stringdata7[7];
    char stringdata8[5];
    char stringdata9[5];
    char stringdata10[7];
    char stringdata11[12];
    char stringdata12[7];
    char stringdata13[12];
    char stringdata14[4];
    char stringdata15[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_GameOfLifeBoard_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_GameOfLifeBoard_t qt_meta_stringdata_GameOfLifeBoard = {
    {
        QT_MOC_LITERAL(0, 15),  // "GameOfLifeBoard"
        QT_MOC_LITERAL(16, 9),  // "gameSaved"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 11),  // "dateUpdated"
        QT_MOC_LITERAL(39, 21),  // "populationSizeChanged"
        QT_MOC_LITERAL(61, 15),  // "initializeBoard"
        QT_MOC_LITERAL(77, 5),  // "width"
        QT_MOC_LITERAL(83, 6),  // "height"
        QT_MOC_LITERAL(90, 4),  // "play"
        QT_MOC_LITERAL(95, 4),  // "stop"
        QT_MOC_LITERAL(100, 6),  // "faster"
        QT_MOC_LITERAL(107, 11),  // "updateBoard"
        QT_MOC_LITERAL(119, 6),  // "random"
        QT_MOC_LITERAL(126, 11),  // "cellClicked"
        QT_MOC_LITERAL(138, 3),  // "row"
        QT_MOC_LITERAL(142, 6)   // "column"
    },
    "GameOfLifeBoard",
    "gameSaved",
    "",
    "dateUpdated",
    "populationSizeChanged",
    "initializeBoard",
    "width",
    "height",
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
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,
       3,    0,   75,    2, 0x06,    2 /* Public */,
       4,    0,   76,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    2,   77,    2, 0x0a,    4 /* Public */,
       8,    0,   82,    2, 0x0a,    7 /* Public */,
       9,    0,   83,    2, 0x0a,    8 /* Public */,
      10,    0,   84,    2, 0x0a,    9 /* Public */,
      11,    0,   85,    2, 0x0a,   10 /* Public */,
      12,    0,   86,    2, 0x0a,   11 /* Public */,
      13,    2,   87,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,

       0        // eod
};

void GameOfLifeBoard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameOfLifeBoard *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->gameSaved(); break;
        case 1: _t->dateUpdated(); break;
        case 2: _t->populationSizeChanged(); break;
        case 3: _t->initializeBoard((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->play(); break;
        case 5: _t->stop(); break;
        case 6: _t->faster(); break;
        case 7: _t->updateBoard(); break;
        case 8: _t->random(); break;
        case 9: _t->cellClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
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
        {
            using _t = void (GameOfLifeBoard::*)();
            if (_t _q_method = &GameOfLifeBoard::dateUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GameOfLifeBoard::*)();
            if (_t _q_method = &GameOfLifeBoard::populationSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
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
, QtPrivate::TypeAndForceComplete<GameOfLifeBoard, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void GameOfLifeBoard::gameSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GameOfLifeBoard::dateUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GameOfLifeBoard::populationSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
