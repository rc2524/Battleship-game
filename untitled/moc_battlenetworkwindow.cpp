/****************************************************************************
** Meta object code from reading C++ file 'battlenetworkwindow.h'
**
** Created: Mon Apr 30 09:58:30 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "battlenetworkwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'battlenetworkwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BattleNetworkWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      38,   20,   20,   20, 0x08,
      62,   57,   20,   20, 0x08,
      86,   57,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BattleNetworkWindow[] = {
    "BattleNetworkWindow\0\0returnToInital()\0"
    "startNetworkGame()\0nick\0newParticipant(QString)\0"
    "participantLeft(QString)\0"
};

const QMetaObject BattleNetworkWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BattleNetworkWindow,
      qt_meta_data_BattleNetworkWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BattleNetworkWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BattleNetworkWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BattleNetworkWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BattleNetworkWindow))
        return static_cast<void*>(const_cast< BattleNetworkWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int BattleNetworkWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: returnToInital(); break;
        case 1: startNetworkGame(); break;
        case 2: newParticipant((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: participantLeft((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
