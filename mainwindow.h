#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <companysearchwindow.h>
#include <QWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_actionCompany_selection_triggered();

private:
    Ui::MainWindow *ui;

    void loadSubWindow(QWidget* dialog);

    QWidget* companySearchWindow;

};

#endif // MAINWINDOW_H
