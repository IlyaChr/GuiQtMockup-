#ifndef COMPANYSEARCHWINDOW_H
#define COMPANYSEARCHWINDOW_H

#include <QWidget>

namespace Ui {
class CompanySearchWindow;
}

class CompanySearchWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CompanySearchWindow(QWidget *parent = nullptr);
    ~CompanySearchWindow();

private:
    Ui::CompanySearchWindow *ui;
};

#endif // COMPANYSEARCHWINDOW_H
