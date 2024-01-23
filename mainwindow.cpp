#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QListWidgetItem *listItem = new QListWidgetItem;
    listItem->setText("My First Item");
    listItem->setData(100, 1000);
    ui->listWidget->addItem(listItem);

    QTreeWidgetItem *treeItem = new QTreeWidgetItem;
    treeItem->setText(0, "Its Tree Item");
    ui->treeWidget->addTopLevelItem(treeItem);

    QTreeWidgetItem *treeItem2 = new QTreeWidgetItem;
    treeItem2->setText(0, "Its Tree Item");
    treeItem->addChild(treeItem2);

    QTableWidgetItem *tableItem = new QTableWidgetItem;
    tableItem->setText("TestTable1");
    ui->tableWidget->setItem(0, 0, tableItem);

    QTableWidgetItem *tableItem2 = new QTableWidgetItem;
    tableItem2->setText("TestTable2");
    ui->tableWidget->setItem(1, 2, tableItem2);

    //QMessageBox::information(this, "Alarm", "Всё в каловых массах");
    //QMessageBox::question(this, "Alarm", "Всё в каловых массах");
    //QMessageBox::warning(this, "Alarm", "Всё в каловых массах");
    //QMessageBox::critical(this, "Alarm", "Всё в каловых массах");

    QString fileName = QFileDialog::getOpenFileName(this, "Моё название окна");
    qDebug() << fileName;




    qDebug() << listItem->data(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}
