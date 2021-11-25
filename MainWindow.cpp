#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
        QWidget(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_SaveBtn_clicked() {
    cout<<"Save"<<endl;

    QString qname = ui->nameEdit->toPlainText();
    string name = qname.toStdString();
    cout<<"Filename: "<<name<<endl;

    QString qcontent = ui->contentEdit->toPlainText();
    string content = qcontent.toStdString();
    cout<<"Content: "<<content<<endl;


}



