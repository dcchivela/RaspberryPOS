/****************************************************************************
** Meta object code from reading C++ file 'mibitlineedit.h'
**
** Created: Mon Apr 20 14:08:44 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mibitWidgets/mibitlineedit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mibitlineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MibitLineEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   31,   31,   31, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,   54,   31,   31, 0x08,
      59,   31,   31,   31, 0x08,
      72,   31,   31,   31, 0x08,
      85,   31,   31,   31, 0x08,
      95,   31,   31,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MibitLineEdit[] = {
    "MibitLineEdit\0plusKeyPressed()\0\0"
    "onTextChange(QString)\0text\0clearError()\0"
    "stepColors()\0shakeIt()\0shake()\0"
};

void MibitLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MibitLineEdit *_t = static_cast<MibitLineEdit *>(_o);
        switch (_id) {
        case 0: _t->plusKeyPressed(); break;
        case 1: _t->onTextChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->clearError(); break;
        case 3: _t->stepColors(); break;
        case 4: _t->shakeIt(); break;
        case 5: _t->shake(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MibitLineEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MibitLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_MibitLineEdit,
      qt_meta_data_MibitLineEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MibitLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MibitLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MibitLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MibitLineEdit))
        return static_cast<void*>(const_cast< MibitLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int MibitLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MibitLineEdit::plusKeyPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
