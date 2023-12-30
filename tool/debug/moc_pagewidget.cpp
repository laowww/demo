/****************************************************************************
** Meta object code from reading C++ file 'pagewidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../window/pagewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pagewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PageWidget[] = {

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
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   11,   11,   11, 0x08,
      66,   11,   11,   11, 0x08,
      94,   11,   11,   11, 0x08,
     123,   11,   11,   11, 0x08,
     151,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PageWidget[] = {
    "PageWidget\0\0sign_pageChanged(int)\0"
    "slot_btn_clicked_perviousPage()\0"
    "slot_btn_clicked_nextPage()\0"
    "slot_btn_clicked_firstPage()\0"
    "slot_btn_clicked_lastPage()\0"
    "slot_btn_clicked_skipPage()\0"
};

void PageWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PageWidget *_t = static_cast<PageWidget *>(_o);
        switch (_id) {
        case 0: _t->sign_pageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slot_btn_clicked_perviousPage(); break;
        case 2: _t->slot_btn_clicked_nextPage(); break;
        case 3: _t->slot_btn_clicked_firstPage(); break;
        case 4: _t->slot_btn_clicked_lastPage(); break;
        case 5: _t->slot_btn_clicked_skipPage(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PageWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PageWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PageWidget,
      qt_meta_data_PageWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageWidget))
        return static_cast<void*>(const_cast< PageWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int PageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void PageWidget::sign_pageChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
