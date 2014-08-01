#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setText("about:blank");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_git_clicked()
{
    QUrl adrs;
    adrs=ui->lineEdit->text();
    ui->webView->setUrl(QUrl(adrs));
}

void MainWindow::on_lineEdit_returnPressed()
{
    QUrl adrs;
    adrs=ui->lineEdit->text();
    ui->webView->setUrl(QUrl(adrs));
}

void MainWindow::on_webView_urlChanged(const QUrl &arg1)
{
    QUrl adres;
    QString stradres;
    adres=(ui->webView->url());
    stradres=adres.toEncoded();
    ui->lineEdit->setText(stradres);
}

void MainWindow::on_ileri_clicked()
{
    ui->webView->forward();
}

void MainWindow::on_geri_clicked()
{
    ui->webView->back();
}

void MainWindow::on_yenile_clicked()
{
    ui->webView->reload();
}

void MainWindow::on_durdur_clicked()
{
    ui->webView->stop();
}

void MainWindow::on_ara_clicked()
{
    ui->webView->setUrl(QUrl("http://www.google.com/search?hl=en&q=" + ui->lineEdit_2->text()+ "&aq=f&oq="));
}

void MainWindow::on_lineEdit_2_returnPressed()
{
    ui->webView->setUrl(QUrl("http://www.google.com/search?hl=en&q=" + ui->lineEdit_2->text()+ "&aq=f&oq="));
}

void MainWindow::on_webView_loadStarted()
{
    QUrl adr;
    QString stradr;
    adr=(ui->webView->url());
    stradr=adr.toEncoded();
    ui->statusbar->showMessage("Connecting to "+ stradr);

}

void MainWindow::on_webView_loadFinished(bool arg1)
{
    ui->statusbar->showMessage("Connected.");
}

void MainWindow::on_ev_clicked()
{
    ui->webView->setUrl(QUrl("http://www.google.com.tr/"));
}
