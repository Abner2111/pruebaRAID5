//
// Created by abner on 23/11/21.
//

#ifndef PRUEBARAID5_MAINWINDOW_H
#define PRUEBARAID5_MAINWINDOW_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;
private slots:
    void on_SaveBtn_clicked();

private:
    Ui::MainWindow *ui;
};





#endif //PRUEBARAID5_MAINWINDOW_H
