#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebView>
#include <QtWebKit>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_homebtn_clicked();

    void on_webView_loadStarted();

    void on_webView_loadFinished(bool arg1);

    void on_webView_loadProgress(int progress);

    void on_webView_statusBarMessage(const QString &text);

    void on_webView_linkClicked(const QUrl &arg1);

    void on_urledit_returnPressed();

    void on_gobtn_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
