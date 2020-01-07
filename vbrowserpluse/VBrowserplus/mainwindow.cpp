#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QWebView>
#include <QtWebKit>
#include <QNetworkProxyFactory>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QNetworkProxyFactory::setUseSystemConfiguration(true);
    QWebSettings::globalSettings()->setAttribute(QWebSettings::PluginsEnabled, true);
    QWebSettings::globalSettings()->setAttribute(QWebSettings::AutoLoadImages, true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_homebtn_clicked()
{
    QString gurl = "https://www.google.com";
    ui->webView->load(gurl);

}

void MainWindow::on_webView_loadStarted()
{
    QString curl = ui->webView->url().toString();
    ui->urledit->setText(curl);
    ui->showsts->setText("Loading requested url...");
}

void MainWindow::on_webView_loadFinished(bool arg1)
{
    if(arg1){
        QString curl = ui->webView->url().toString();
        ui->urledit->setText(curl);
        ui->showsts->setText("Loaded");
    }
    else{
        QString curl = ui->webView->url().toString();
        ui->urledit->setText(curl);
        ui->showsts->setText("Error loading page...");
    }
}

void MainWindow::on_webView_loadProgress(int progress)
{
    ui->prog->setValue(progress);
}

void MainWindow::on_webView_statusBarMessage(const QString &textl)
{
    ui->showsts->setText(textl);
}

void MainWindow::on_webView_linkClicked(const QUrl &arg1)
{
    QString link = arg1.toString();
    ui->showsts->setText(link);
}

void MainWindow::on_urledit_returnPressed()
{
    ui->webView->load("http://" + ui->urledit->text());
}

void MainWindow::on_gobtn_clicked()
{
    ui->webView->load("http://" + ui->urledit->text());
}
