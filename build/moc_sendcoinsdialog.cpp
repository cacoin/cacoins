/****************************************************************************
** Meta object code from reading C++ file 'sendcoinsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/sendcoinsdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendcoinsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SendCoinsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   16,   16,   16, 0x0a,
      56,   16,   16,   16, 0x0a,
      65,   16,   16,   16, 0x0a,
      90,   16,   74,   16, 0x0a,
     101,   16,   16,   16, 0x0a,
     172,  123,   16,   16, 0x0a,
     212,   16,   16,   16, 0x08,
     242,  236,   16,   16, 0x08,
     271,   16,   16,   16, 0x08,
     291,   16,   16,   16, 0x08,
     323,   16,   16,   16, 0x08,
     350,   16,   16,   16, 0x08,
     380,   16,   16,   16, 0x08,
     413,   16,   16,   16, 0x08,
     439,   16,   16,   16, 0x08,
     470,   16,   16,   16, 0x08,
     499,   16,   16,   16, 0x08,
     525,   16,   16,   16, 0x08,
     556,   16,   16,   16, 0x08,
     584,   16,   16,   16, 0x08,
     615,   16,   16,   16, 0x08,
     647,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SendCoinsDialog[] = {
    "SendCoinsDialog\0\0name\0sendCoinsClicked(QString)\0"
    "clear()\0reject()\0accept()\0SendCoinsEntry*\0"
    "addEntry()\0updateRemoveEnabled()\0"
    "balance,stake,unconfirmedBalance,immatureBalance\0"
    "setBalance(qint64,qint64,qint64,qint64)\0"
    "on_sendButton_clicked()\0entry\0"
    "removeEntry(SendCoinsEntry*)\0"
    "updateDisplayUnit()\0coinControlFeatureChanged(bool)\0"
    "coinControlButtonClicked()\0"
    "coinControlChangeChecked(int)\0"
    "coinControlChangeEdited(QString)\0"
    "coinControlUpdateLabels()\0"
    "coinControlClipboardQuantity()\0"
    "coinControlClipboardAmount()\0"
    "coinControlClipboardFee()\0"
    "coinControlClipboardAfterFee()\0"
    "coinControlClipboardBytes()\0"
    "coinControlClipboardPriority()\0"
    "coinControlClipboardLowOutput()\0"
    "coinControlClipboardChange()\0"
};

void SendCoinsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SendCoinsDialog *_t = static_cast<SendCoinsDialog *>(_o);
        switch (_id) {
        case 0: _t->sendCoinsClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->clear(); break;
        case 2: _t->reject(); break;
        case 3: _t->accept(); break;
        case 4: { SendCoinsEntry* _r = _t->addEntry();
            if (_a[0]) *reinterpret_cast< SendCoinsEntry**>(_a[0]) = _r; }  break;
        case 5: _t->updateRemoveEnabled(); break;
        case 6: _t->setBalance((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])),(*reinterpret_cast< qint64(*)>(_a[4]))); break;
        case 7: _t->on_sendButton_clicked(); break;
        case 8: _t->removeEntry((*reinterpret_cast< SendCoinsEntry*(*)>(_a[1]))); break;
        case 9: _t->updateDisplayUnit(); break;
        case 10: _t->coinControlFeatureChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->coinControlButtonClicked(); break;
        case 12: _t->coinControlChangeChecked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->coinControlChangeEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->coinControlUpdateLabels(); break;
        case 15: _t->coinControlClipboardQuantity(); break;
        case 16: _t->coinControlClipboardAmount(); break;
        case 17: _t->coinControlClipboardFee(); break;
        case 18: _t->coinControlClipboardAfterFee(); break;
        case 19: _t->coinControlClipboardBytes(); break;
        case 20: _t->coinControlClipboardPriority(); break;
        case 21: _t->coinControlClipboardLowOutput(); break;
        case 22: _t->coinControlClipboardChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SendCoinsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SendCoinsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SendCoinsDialog,
      qt_meta_data_SendCoinsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SendCoinsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SendCoinsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SendCoinsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SendCoinsDialog))
        return static_cast<void*>(const_cast< SendCoinsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SendCoinsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void SendCoinsDialog::sendCoinsClicked(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
