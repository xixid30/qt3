#include "departmentview.h"
#include "ui_departmentview.h"

DepartmenView::DepartmenView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DepartmenView)
{
    ui->setupUi(this);
}

DepartmenView::~DepartmenView()
{
    delete ui;
}
