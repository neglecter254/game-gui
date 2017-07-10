#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui -> auto_resize, &QAction::triggered,
            ui ->openGLWidget, &GLWidget::toggleAspectRatio);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_log_rec_triggered(bool checked)
{
    ui->log_rec->setChecked( checked );
}

void MainWindow::on_log_play_triggered(bool checked)
{
    //close();
}
