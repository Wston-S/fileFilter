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

    void getsearchFile(QString str);

    void hascopyFilecount(int n);

private:
    Ui::Widget *ui;

private:
    CpThread *myctl;

    QList<QDir> srcdirList;  //原文件搜索目录
    QStringList dstFilePathList; //目标文件list(完整路径)
    QStringList selFileList; //筛选文件中提取出来的每行数据的list
    QString copyDirPath;        //复制到哪个目录

    bool IsRightSelFile(QString str); //是否符合筛选文件的文件
};

#endif // WIDGET_H
