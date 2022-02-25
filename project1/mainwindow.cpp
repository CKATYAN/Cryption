#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "config.hpp"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Запрет ввода в поле для вывода
    // Поле вывода имеет типичный для неактивного окна цвет
    ui->field_output->setReadOnly(true);
    ui->field_output->setStyleSheet("QTextEdit { background-color: rgb(232, 232, 232); }");
    // Поле ввода имеет текст-подсказку + выравнивание поверху
    ui->field_input->setPlaceholderText("Please enter message");
    ui->field_input->setAlignment(Qt::AlignTop);

    // Запрет ввода пробелов
    ui->field_input->setValidator(new QRegularExpressionValidator(QRegularExpression("\\S+")));
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::readfile(int num_line)
{

    QString str = "";
    // Программа использует готовые "магические квадаты" (далее "магкв")
    // где существуют квадраты для разных длин сообщений
    // в качестве "магкв" я использую строку из цифр, количество которых соответствует длине сообщения
    QFile file("magic_sqrs.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
       QMessageBox::warning(this, Config::applicationName, tr("Failed open"));
       return 0;
    }

    // Программа считывает длину сообщения и относительно его подбирает соответствующий "квадрат" в файле
    for (int i = 1; i <= num_line; i++) {
        if(!file.atEnd()) {
            if(i != num_line) file.readLine();
            else str = file.readLine();
        }
        else {
            // Я пока учел длину сообщения только до 16 символов
            QMessageBox::warning(this, Config::applicationName, tr("Extend magic_sqrs.txt"));
            return 0;
        }
    }
    file.close();

    return str;
}

QString MainWindow::encryption_alg(QString message)
{
    // Так как "магических квадратов" на 4 и менее символа не существует
    // Я использую "min_size" как защиту от маленьких сообщений
    int num_of_letter = 0, min_size = 9;
    QString encrypted_msg = "", buffer = "";

    // Если сообщение слишком мало, то программа дополняет его до количества символов в "магкв"
    if(qPow(qCeil(qSqrt(message.size())),2) >= 9) min_size = qPow(qCeil(qSqrt(message.size())),2);
    while(!(message.size() == min_size))
        message.append("_");

    // Получаем "магкв"
    QString key = readfile(qCeil(qSqrt(message.size())));

    // Реализуем зашифровку сообщений с помощью "магкв"
    for (int i = 1; i <= message.size(); i++) {
        // Странное предупреждение: midRef...
        num_of_letter = key.mid(0, (key.indexOf(" "))).toInt();

        buffer = key.mid(buffer.size(), key.indexOf(" ")+1);
        key.remove(0,buffer.size());

        encrypted_msg = encrypted_msg.append(message[num_of_letter-1]);
    }

    return encrypted_msg;
}

QString MainWindow::decryption_alg(QString encrypted_msg)
{
    int num_of_letter = 0;
    QString message, buffer = "";

    // Для начала инициализируем строку, подходящего размера
    message.fill(' ', encrypted_msg.size());

    QString key = readfile(qCeil(qSqrt(encrypted_msg.size())));

    // Реализуем дешшифровку сообщений
    for (int i = 1; i <= encrypted_msg.size(); i++) {
        num_of_letter = key.mid(0, (key.indexOf(" "))).toInt();

        buffer = key.mid(buffer.size(), key.indexOf(" ")+1);
        key.remove(0,buffer.size());

        message[num_of_letter-1] = encrypted_msg[i-1];
    }

    return message;
}

//Метод-ивент реагирующий на "Enter"
void MainWindow::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_Enter:
        cryption();
        break;
    case Qt::Key_Return:
        cryption();
        break;
    }
}

//Метод-ивент реагирующий на кнопку "cryption" в программе
void MainWindow::cryption()
{
    QString message, encrypted_msg;

    if (ui->rb_encryption->isChecked() == true) {

        message = ui->field_input->text();
        encrypted_msg = encryption_alg(message.toStdString().c_str());
        ui->field_output->setText(encrypted_msg);
    }

    if (ui->rb_decryption->isChecked() == true) {

        encrypted_msg = ui->field_input->text();
        message = decryption_alg(encrypted_msg.toStdString().c_str());
        ui->field_output->setText(message);
    }
}



