/****************************************************************************
** Meta object code from reading C++ file 'battlenetworkgame.h'
**
** Created: Wed May 2 14:35:21 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "battlenetworkgame.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'battlenetworkgame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_battlenetworkgame[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      39,   18,   18,   18, 0x08,
      65,   59,   18,   18, 0x08,
      91,   87,   18,   18, 0x08,
     122,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_battlenetworkgame[] = {
    "battlenetworkgame\0\0createRandomBoard()\0"
    "createCustomBoard()\0oName\0"
    "opponentLeft(QString)\0x,y\0"
    "appendMessage(QString,QString)\0fire()\0"
};

const QMetaObject battlenetworkgame::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_battlenetworkgame,
      qt_meta_data_battlenetworkgame, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &battlenetworkgame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *battlenetworkgame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *battlenetworkgame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_battlenetworkgame))
        return static_cast<void*>(const_cast< battlenetworkgame*>(this));
    return QWidget::qt_metacast(_clname);
}

int battlenetworkgame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: createRandomBoard(); break;
        case 1: createCustomBoard(); break;
        case 2: opponentLeft((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: appendMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: fire(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
