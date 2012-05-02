/****************************************************************************
** Meta object code from reading C++ file 'InitialWindow.h'
**
** Created: Wed May 2 16:18:33 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "InitialWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InitialWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InitialWindow[] = {

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
      15,   14,   14,   14, 0x08,
      24,   14,   14,   14, 0x08,
      36,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InitialWindow[] = {
    "InitialWindow\0\0AIPlay()\0LocalPlay()\0"
    "NetworkPlay()\0"
};

const QMetaObject InitialWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_InitialWindow,
      qt_meta_data_InitialWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InitialWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InitialWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InitialWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InitialWindow))
        return static_cast<void*>(const_cast< InitialWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int InitialWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: AIPlay(); break;
        case 1: LocalPlay(); break;
        case 2: NetworkPlay(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
