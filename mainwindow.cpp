#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDesktopWidget"
#include "QDebug"
#include "QMdiSubWindow"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    companySearchWindow = new CompanySearchWindow(this);

    loadSubWindow(companySearchWindow);

    setCentralWidget(ui->mdiArea);


}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::loadSubWindow(QWidget *widget)
{

    QMdiSubWindow* window = ui->mdiArea->addSubWindow(widget);

    window->setWindowState(Qt::WindowMaximized);



    window->setWindowIcon(QIcon(":/resource/images/icons8-company-48.png"));

    window->show();



}



void MainWindow::on_actionCompany_selection_triggered()
{
    loadSubWindow(new CompanySearchWindow(this));
}
