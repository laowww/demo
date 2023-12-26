#include <QDebug>
#include <QComboBox>

#include "tableview.h"
#include "ui_tableview.h"

TableView::TableView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TableView)
{
    ui->setupUi(this);

    init();
    connect(ui->btn_insert, SIGNAL(clicked()), this, SLOT(slot_btn_clicked_insert()));
}

TableView::~TableView()
{
    delete ui;
}

void TableView::init()
{
    ui->cb_dept->addItems(QStringList()<< "C++"<< "JAVA"<< "PYTHON");
    ui->sb_age->setRange(0, 100);
}

void TableView::slot_btn_clicked_insert()
{

}
