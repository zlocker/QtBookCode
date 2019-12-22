#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    webview = new QWebEngineView(ui->centralWidget);
    webview->load(QUrl("http://www.baidu.com"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
