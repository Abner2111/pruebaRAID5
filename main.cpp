#include <QApplication>
#include <QPushButton>
#include "MainWindow.h"
#include <iostream>
#include <bitset>

using namespace std;
int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    char b = 'b';

    cout<<bitset<8>(b)<<endl;

    return QApplication::exec();
}
