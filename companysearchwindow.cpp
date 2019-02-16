#include "companysearchwindow.h"
#include <QDoubleValidator>
#include "ui_companysearchwindow.h"

CompanySearchWindow::CompanySearchWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CompanySearchWindow)
{
    ui->setupUi(this);


    QDoubleValidator* validatorforStockPriceOne =  new QDoubleValidator( 0.0, 9999.0, 4 );

    QDoubleValidator* validatorforStockPriceTwo =  new QDoubleValidator( 0.0, 999999.0, 4 );

    QIntValidator* validatorforMinAvgAmount =  new QIntValidator( 0, 99999 );


    validatorforStockPriceOne->setNotation( QDoubleValidator::StandardNotation );

    validatorforStockPriceTwo->setNotation( QDoubleValidator::StandardNotation );


    ui->minAvgAmount->setValidator(validatorforMinAvgAmount);

    ui->stockPriceOne->setValidator(validatorforStockPriceOne);

    ui->stockPriceTwo->setValidator(validatorforStockPriceTwo);


}

CompanySearchWindow::~CompanySearchWindow()
{
    delete ui;
}
