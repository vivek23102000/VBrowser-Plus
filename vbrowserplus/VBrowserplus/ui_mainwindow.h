/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWebView *webView;
    QFrame *frame;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *homebtn;
    QLineEdit *urledit;
    QPushButton *gobtn;
    QPushButton *pushButton_6;
    QWidget *widget;
    QLabel *showsts;
    QProgressBar *prog;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(753, 533);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        webView = new QWebView(centralWidget);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setUrl(QUrl(QStringLiteral("about:blank")));

        gridLayout->addWidget(webView, 1, 0, 1, 1);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 30));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 71, 31));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 0, 71, 31));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 0, 71, 31));
        homebtn = new QPushButton(frame);
        homebtn->setObjectName(QStringLiteral("homebtn"));
        homebtn->setGeometry(QRect(210, 0, 71, 31));
        urledit = new QLineEdit(frame);
        urledit->setObjectName(QStringLiteral("urledit"));
        urledit->setGeometry(QRect(280, 0, 281, 31));
        gobtn = new QPushButton(frame);
        gobtn->setObjectName(QStringLiteral("gobtn"));
        gobtn->setGeometry(QRect(560, 0, 85, 31));
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(640, 0, 95, 31));

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 20));
        showsts = new QLabel(widget);
        showsts->setObjectName(QStringLiteral("showsts"));
        showsts->setGeometry(QRect(10, 0, 461, 17));
        prog = new QProgressBar(widget);
        prog->setObjectName(QStringLiteral("prog"));
        prog->setGeometry(QRect(377, 0, 361, 20));
        prog->setValue(0);

        gridLayout->addWidget(widget, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), webView, SLOT(back()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), webView, SLOT(forward()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), webView, SLOT(reload()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), webView, SLOT(stop()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "VBrowser", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Go to the page back</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Go to the page forward</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QApplication::translate("MainWindow", "Forward", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Refresh</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_3->setText(QApplication::translate("MainWindow", "Refresh", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        homebtn->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Home page</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        homebtn->setText(QApplication::translate("MainWindow", "Home", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        urledit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Type the url to rule the web</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        gobtn->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>GO!</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        gobtn->setText(QApplication::translate("MainWindow", "GO", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        showsts->setText(QApplication::translate("MainWindow", "VBrowser by Vivek Tiwari", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
