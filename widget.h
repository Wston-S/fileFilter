#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include "cpthread.h"
#include "mywork.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButtonAddDir_clicked();

    void on_pushButtonDelDir_clicked();

    void on_pushButtonOpenSelFile_clicked();

    void on_pushButtonOpenDstDir_clicked();

    void on_pushButtonStopCP_clicked();

    void on_pushButtonStartCP_clicked();

    void on_pushButtonStartFind_clicked();

private:
    Ui::Widget *ui;

private:
    CpThread *myctl;
};

#endif // WIDGET_H
