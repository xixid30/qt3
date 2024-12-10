#ifndef DEPARTMENTVIEW_H
#define DEPARTMENTVIEW_H

#include <QWidget>

namespace Ui {
class DepartmenView;
}

class DepartmenView : public QWidget
{
    Q_OBJECT

public:
    explicit DepartmenView(QWidget *parent = nullptr);
    ~DepartmenView();

private:
    Ui::DepartmenView *ui;
};

#endif // DEPARTMENTVIEW_H
