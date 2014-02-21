/****************************************************************************
** Meta object code from reading C++ file 'tekcoinamountfield.h'
**
** Created: Sun Sep 8 19:27:12 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/tekcoinamountfield.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tekcoinamountfield.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tekcoinAmountField[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   24, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   34,   19,   19, 0x08,

 // properties: name, type, flags
      62,   55, 0x04595103,

 // properties: notify_signal_id
       0,

       0        // eod
};

static const char qt_meta_stringdata_tekcoinAmountField[] = {
    "tekcoinAmountField\0\0textChanged()\0idx\0"
    "unitChanged(int)\0qint64\0value\0"
};

void tekcoinAmountField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tekcoinAmountField *_t = static_cast<tekcoinAmountField *>(_o);
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->unitChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tekcoinAmountField::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tekcoinAmountField::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tekcoinAmountField,
      qt_meta_data_tekcoinAmountField, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tekcoinAmountField::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tekcoinAmountField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tekcoinAmountField::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tekcoinAmountField))
        return static_cast<void*>(const_cast< tekcoinAmountField*>(this));
    return QWidget::qt_metacast(_clname);
}

int tekcoinAmountField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint64*>(_v) = value(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setValue(*reinterpret_cast< qint64*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void tekcoinAmountField::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
