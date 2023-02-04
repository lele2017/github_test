/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEditURL;
    QLineEdit *lineEditFileName;
    QPushButton *btnDownLoadFile;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnGet;
    QLineEdit *lineEditUrlResult;
    QPushButton *btnDownLoadFile_2;
    QLabel *label_4;
    QListWidget *listWidget;
    QLabel *labelNum;
    QLineEdit *lineEditUrlDownLoad;
    QLabel *label_3;
    QPushButton *btnOpenUrl;
    QLabel *labelNumLast;
    QPushButton *btnPiLiang;
    QLineEdit *lineEditZhengZe;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_6;
    QTextEdit *textEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1096, 585);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(15);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(20, 20, 20, 20);
        lineEditURL = new QLineEdit(Widget);
        lineEditURL->setObjectName(QString::fromUtf8("lineEditURL"));

        gridLayout->addWidget(lineEditURL, 0, 1, 1, 4);

        lineEditFileName = new QLineEdit(Widget);
        lineEditFileName->setObjectName(QString::fromUtf8("lineEditFileName"));

        gridLayout->addWidget(lineEditFileName, 1, 1, 1, 4);

        btnDownLoadFile = new QPushButton(Widget);
        btnDownLoadFile->setObjectName(QString::fromUtf8("btnDownLoadFile"));

        gridLayout->addWidget(btnDownLoadFile, 7, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(499, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 5, 2, 1, 1);

        btnGet = new QPushButton(Widget);
        btnGet->setObjectName(QString::fromUtf8("btnGet"));

        gridLayout->addWidget(btnGet, 5, 4, 1, 1);

        lineEditUrlResult = new QLineEdit(Widget);
        lineEditUrlResult->setObjectName(QString::fromUtf8("lineEditUrlResult"));

        gridLayout->addWidget(lineEditUrlResult, 3, 1, 1, 4);

        btnDownLoadFile_2 = new QPushButton(Widget);
        btnDownLoadFile_2->setObjectName(QString::fromUtf8("btnDownLoadFile_2"));

        gridLayout->addWidget(btnDownLoadFile_2, 7, 2, 1, 1);

        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 8, 0, 1, 5);

        labelNum = new QLabel(Widget);
        labelNum->setObjectName(QString::fromUtf8("labelNum"));

        gridLayout->addWidget(labelNum, 5, 1, 1, 1);

        lineEditUrlDownLoad = new QLineEdit(Widget);
        lineEditUrlDownLoad->setObjectName(QString::fromUtf8("lineEditUrlDownLoad"));

        gridLayout->addWidget(lineEditUrlDownLoad, 6, 1, 1, 4);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        btnOpenUrl = new QPushButton(Widget);
        btnOpenUrl->setObjectName(QString::fromUtf8("btnOpenUrl"));

        gridLayout->addWidget(btnOpenUrl, 2, 4, 1, 1);

        labelNumLast = new QLabel(Widget);
        labelNumLast->setObjectName(QString::fromUtf8("labelNumLast"));

        gridLayout->addWidget(labelNumLast, 7, 1, 1, 1);

        btnPiLiang = new QPushButton(Widget);
        btnPiLiang->setObjectName(QString::fromUtf8("btnPiLiang"));

        gridLayout->addWidget(btnPiLiang, 7, 4, 1, 1);

        lineEditZhengZe = new QLineEdit(Widget);
        lineEditZhengZe->setObjectName(QString::fromUtf8("lineEditZhengZe"));

        gridLayout->addWidget(lineEditZhengZe, 4, 1, 1, 4);

        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_6 = new QLabel(Widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMinimumSize(QSize(500, 0));

        gridLayout->addWidget(textEdit, 0, 5, 9, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        lineEditFileName->setText(QCoreApplication::translate("Widget", "code.txt", nullptr));
        btnDownLoadFile->setText(QCoreApplication::translate("Widget", "\347\202\271\345\207\273\344\270\213\350\275\275", nullptr));
        btnGet->setText(QCoreApplication::translate("Widget", "\347\202\271\345\207\273\350\216\267\345\217\226", nullptr));
        btnDownLoadFile_2->setText(QCoreApplication::translate("Widget", "\344\270\213\344\270\200\350\277\236\346\216\245", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217\357\274\232", nullptr));
        labelNum->setText(QCoreApplication::translate("Widget", "Number", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "URL\345\210\206\345\211\262\347\273\223\346\236\234\357\274\232", nullptr));
        btnOpenUrl->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\347\275\221\347\253\231", nullptr));
        labelNumLast->setText(QCoreApplication::translate("Widget", "Number", nullptr));
        btnPiLiang->setText(QCoreApplication::translate("Widget", "\346\211\271\351\207\217\344\270\213\350\275\275", nullptr));
        lineEditZhengZe->setText(QCoreApplication::translate("Widget", "..static.vmgirls.com.image.{20}", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\347\233\256\346\240\207URL\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\226\260\345\273\272\346\226\207\344\273\266\345\244\271\345\220\215\347\247\260\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\344\270\213\350\275\275URL\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
