/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidgetSrcDir;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonAddDir;
    QPushButton *pushButtonDelDir;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEditSelFile;
    QPushButton *pushButtonOpenSelFile;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditDstCPDir;
    QPushButton *pushButtonOpenDstDir;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonStartFind;
    QPushButton *pushButtonStopCP;
    QPushButton *pushButtonStartCP;
    QListWidget *listWidgetRes;
    QProgressBar *progressBar;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(440, 328);
        verticalLayout_3 = new QVBoxLayout(Widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        listWidgetSrcDir = new QListWidget(Widget);
        listWidgetSrcDir->setObjectName(QStringLiteral("listWidgetSrcDir"));

        horizontalLayout->addWidget(listWidgetSrcDir);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButtonAddDir = new QPushButton(Widget);
        pushButtonAddDir->setObjectName(QStringLiteral("pushButtonAddDir"));

        verticalLayout->addWidget(pushButtonAddDir);

        pushButtonDelDir = new QPushButton(Widget);
        pushButtonDelDir->setObjectName(QStringLiteral("pushButtonDelDir"));

        verticalLayout->addWidget(pushButtonDelDir);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(100, 0));

        horizontalLayout_4->addWidget(label_3);

        lineEditSelFile = new QLineEdit(Widget);
        lineEditSelFile->setObjectName(QStringLiteral("lineEditSelFile"));

        horizontalLayout_4->addWidget(lineEditSelFile);

        pushButtonOpenSelFile = new QPushButton(Widget);
        pushButtonOpenSelFile->setObjectName(QStringLiteral("pushButtonOpenSelFile"));

        horizontalLayout_4->addWidget(pushButtonOpenSelFile);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(8);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(label_2);

        lineEditDstCPDir = new QLineEdit(Widget);
        lineEditDstCPDir->setObjectName(QStringLiteral("lineEditDstCPDir"));

        horizontalLayout_2->addWidget(lineEditDstCPDir);

        pushButtonOpenDstDir = new QPushButton(Widget);
        pushButtonOpenDstDir->setObjectName(QStringLiteral("pushButtonOpenDstDir"));

        horizontalLayout_2->addWidget(pushButtonOpenDstDir);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(8);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButtonStartFind = new QPushButton(Widget);
        pushButtonStartFind->setObjectName(QStringLiteral("pushButtonStartFind"));

        horizontalLayout_3->addWidget(pushButtonStartFind);

        pushButtonStopCP = new QPushButton(Widget);
        pushButtonStopCP->setObjectName(QStringLiteral("pushButtonStopCP"));

        horizontalLayout_3->addWidget(pushButtonStopCP);

        pushButtonStartCP = new QPushButton(Widget);
        pushButtonStartCP->setObjectName(QStringLiteral("pushButtonStartCP"));

        horizontalLayout_3->addWidget(pushButtonStartCP);


        verticalLayout_3->addLayout(horizontalLayout_3);

        listWidgetRes = new QListWidget(Widget);
        listWidgetRes->setObjectName(QStringLiteral("listWidgetRes"));

        verticalLayout_3->addWidget(listWidgetRes);

        progressBar = new QProgressBar(Widget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        verticalLayout_3->addWidget(progressBar);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\346\237\245\346\211\276\347\233\256\345\275\225", Q_NULLPTR));
        pushButtonAddDir->setText(QApplication::translate("Widget", "\346\267\273\345\212\240\347\233\256\345\275\225", Q_NULLPTR));
        pushButtonDelDir->setText(QApplication::translate("Widget", "\345\210\240\351\231\244\347\233\256\345\275\225", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\347\255\233\351\200\211\346\226\207\344\273\266\357\274\232", Q_NULLPTR));
        pushButtonOpenSelFile->setText(QApplication::translate("Widget", "\346\265\217\350\247\210", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\345\244\215\345\210\266\345\210\260\347\233\256\346\240\207\347\233\256\345\275\225:", Q_NULLPTR));
        pushButtonOpenDstDir->setText(QApplication::translate("Widget", "\346\265\217\350\247\210", Q_NULLPTR));
        pushButtonStartFind->setText(QApplication::translate("Widget", "\345\274\200\345\247\213\346\243\200\347\264\242", Q_NULLPTR));
        pushButtonStopCP->setText(QApplication::translate("Widget", "\345\201\234\346\255\242\345\244\215\345\210\266", Q_NULLPTR));
        pushButtonStartCP->setText(QApplication::translate("Widget", "\345\274\200\345\247\213\345\244\215\345\210\266", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
