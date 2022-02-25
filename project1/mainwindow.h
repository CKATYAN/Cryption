#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include <QString>
#include <QFile>
#include <qmath.h>
#include <QMessageBox>
#include <QValidator>
#include <QRegularExpressionValidator>
#include <QKeyEvent>

#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void keyPressEvent(QKeyEvent *event);

    void cryption();

private:
    QString readfile(int num_line);

    QString encryption_alg(QString message);

    QString decryption_alg(QString encrypted_msg);

    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
