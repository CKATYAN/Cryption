/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCryption;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rb_encryption;
    QRadioButton *rb_decryption;
    QGridLayout *mainfield;
    QLabel *label_OUT;
    QLabel *label_IN;
    QTextEdit *field_output;
    QLineEdit *field_input;
    QPushButton *pb_cryption;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(533, 320);
        MainWindow->setMinimumSize(QSize(0, 320));
        MainWindow->setMaximumSize(QSize(16777215, 320));
        actionCryption = new QAction(MainWindow);
        actionCryption->setObjectName(QString::fromUtf8("actionCryption"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalWidget = new QWidget(centralwidget);
        horizontalWidget->setObjectName(QString::fromUtf8("horizontalWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(horizontalWidget->sizePolicy().hasHeightForWidth());
        horizontalWidget->setSizePolicy(sizePolicy);
        horizontalWidget->setMinimumSize(QSize(0, 40));
        horizontalWidget->setMaximumSize(QSize(16777215, 40));
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout->setContentsMargins(1, -1, -1, -1);
        rb_encryption = new QRadioButton(horizontalWidget);
        rb_encryption->setObjectName(QString::fromUtf8("rb_encryption"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(rb_encryption->sizePolicy().hasHeightForWidth());
        rb_encryption->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Open Sans")});
        font.setPointSize(12);
        rb_encryption->setFont(font);
        rb_encryption->setChecked(true);

        horizontalLayout->addWidget(rb_encryption, 0, Qt::AlignTop);

        rb_decryption = new QRadioButton(horizontalWidget);
        rb_decryption->setObjectName(QString::fromUtf8("rb_decryption"));
        rb_decryption->setFont(font);
        rb_decryption->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout->addWidget(rb_decryption, 0, Qt::AlignTop);


        verticalLayout->addWidget(horizontalWidget);

        mainfield = new QGridLayout();
        mainfield->setSpacing(7);
        mainfield->setObjectName(QString::fromUtf8("mainfield"));
        mainfield->setContentsMargins(2, -1, 2, 0);
        label_OUT = new QLabel(centralwidget);
        label_OUT->setObjectName(QString::fromUtf8("label_OUT"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Open Sans")});
        font1.setPointSize(14);
        label_OUT->setFont(font1);
        label_OUT->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        mainfield->addWidget(label_OUT, 0, 1, 1, 1);

        label_IN = new QLabel(centralwidget);
        label_IN->setObjectName(QString::fromUtf8("label_IN"));
        label_IN->setFont(font1);
        label_IN->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        mainfield->addWidget(label_IN, 0, 0, 1, 1);

        field_output = new QTextEdit(centralwidget);
        field_output->setObjectName(QString::fromUtf8("field_output"));
        field_output->setMinimumSize(QSize(250, 180));
        field_output->setMaximumSize(QSize(16777215, 180));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Open Sans Light")});
        font2.setPointSize(16);
        font2.setBold(false);
        field_output->setFont(font2);
        field_output->setFocusPolicy(Qt::ClickFocus);
        field_output->setReadOnly(true);

        mainfield->addWidget(field_output, 1, 1, 1, 1);

        field_input = new QLineEdit(centralwidget);
        field_input->setObjectName(QString::fromUtf8("field_input"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(field_input->sizePolicy().hasHeightForWidth());
        field_input->setSizePolicy(sizePolicy2);
        field_input->setMinimumSize(QSize(250, 180));
        field_input->setMaximumSize(QSize(16777215, 180));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Open Sans Light")});
        font3.setPointSize(16);
        field_input->setFont(font3);
        field_input->setCursor(QCursor(Qt::ArrowCursor));

        mainfield->addWidget(field_input, 1, 0, 1, 1);


        verticalLayout->addLayout(mainfield);

        pb_cryption = new QPushButton(centralwidget);
        pb_cryption->setObjectName(QString::fromUtf8("pb_cryption"));
        pb_cryption->setMinimumSize(QSize(100, 0));
        pb_cryption->setMaximumSize(QSize(100, 16777215));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Open Sans")});
        pb_cryption->setFont(font4);

        verticalLayout->addWidget(pb_cryption, 0, Qt::AlignHCenter);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(actionCryption, SIGNAL(triggered()), MainWindow, SLOT(cryption()));
        QObject::connect(pb_cryption, &QPushButton::clicked, actionCryption, qOverload<>(&QAction::trigger));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCryption->setText(QCoreApplication::translate("MainWindow", "Cryption", nullptr));
        rb_encryption->setText(QCoreApplication::translate("MainWindow", "Encryption", nullptr));
        rb_decryption->setText(QCoreApplication::translate("MainWindow", "Decryption", nullptr));
        label_OUT->setText(QCoreApplication::translate("MainWindow", "Output", nullptr));
        label_IN->setText(QCoreApplication::translate("MainWindow", "Input", nullptr));
        pb_cryption->setText(QCoreApplication::translate("MainWindow", "Cryption", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
