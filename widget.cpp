#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->resize(800, 600);
    ui->progressBar->hide();
    ui->listWidgetSrcDir->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->pushButtonStartCP->setEnabled(false);
    ui->pushButtonStopCP->setEnabled(false);

    myctl = new CpThread();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonAddDir_clicked()
{
    QString dirStr = QFileDialog::getExistingDirectory(this,
                                                    tr("选择原文件目录"),
                                                    NULL,
                                                    QFileDialog::ShowDirsOnly
                                                    | QFileDialog::DontResolveSymlinks);

   if( dirStr.isEmpty() )
   {
       return;
   }

   //去掉重复的路径
   int i;
   int cntItem = ui->listWidgetSrcDir->count();

   for(i = 0; i < cntItem; i++)
   {
       QString dirName = ui->listWidgetSrcDir->item(i)->text();

        if(0 == dirName.compare(dirStr)) break;
   }

   if(i == cntItem)
   {
       ui->listWidgetSrcDir->addItem(dirStr);
   }

}

void Widget::on_pushButtonDelDir_clicked()
{
    int nCurRow = ui->listWidgetSrcDir->currentRow();

    if( nCurRow < 0)
    {
        return;
    }

    ui->listWidgetSrcDir->takeItem( nCurRow );
}

void Widget::on_pushButtonOpenSelFile_clicked()
{
    QString strSelName = QFileDialog::getOpenFileName(
                this,
                tr("打开筛选文件"),
                tr("."),
                tr("Text files(*.txt);;All files(*)")
                );
    if( strSelName.isEmpty() )
    {
        return;
    }
    else
    {
        ui->lineEditSelFile->setText(strSelName);
    }
}

void Widget::on_pushButtonOpenDstDir_clicked()
{
    QString dstDirStr = QFileDialog::getExistingDirectory(this,
                                                    tr("选择复制目标目录"),
                                                    NULL,
                                                    QFileDialog::ShowDirsOnly
                                                    | QFileDialog::DontResolveSymlinks);

   if( dstDirStr.isEmpty() )
   {
       return;
   }

   ui->lineEditDstCPDir->setText(dstDirStr);
}

void Widget::on_pushButtonStartFind_clicked()
{
    int dircnt = ui->listWidgetSrcDir->count();

    for(int i = 0; i < dircnt; i++)
    {
        QString strSrcPath = ui->listWidgetSrcDir->item(i)->text();
        if(strSrcPath.isEmpty()) continue;

        QDir dir(strSrcPath);
        if( dir.exists())
        {

        }
    }

    myctl->startCpWork();
}

void Widget::on_pushButtonStartCP_clicked()
{

}


void Widget::on_pushButtonStopCP_clicked()
{

}



