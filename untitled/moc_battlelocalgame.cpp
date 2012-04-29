/****************************************************************************
** Meta object code from reading C++ file 'battlelocalgame.h'
**
** Created: Sun Apr 29 02:51:53 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "battlelocalgame.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'battlelocalgame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BattleLocalGame[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      37,   16,   16,   16, 0x08,
      57,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BattleLocalGame[] = {
    "BattleLocalGame\0\0createRandomBoard()\0"
    "createCustomBoard()\0fire()\0"
};

const QMetaObject BattleLocalGame::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BattleLocalGame,
      qt_meta_data_BattleLocalGame, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BattleLocalGame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BattleLocalGame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BattleLocalGame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BattleLocalGame))
        return static_cast<void*>(const_cast< BattleLocalGame*>(this));
    return QWidget::qt_metacast(_clname);
}

int BattleLocalGame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: createRandomBoard(); break;
        case 1: createCustomBoard(); break;
        case 2: fire(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
