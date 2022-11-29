#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>
#include "mywork.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //this->setWindowIcon(QIcon(":/fileDeal.png"));

    this->resize(800, 600);
    //ui->progressBar->hide();
    ui->listWidgetSrcDir->setSelectionMode(QAbstractItemView::SingleSelection);
    //ui->pushButtonStartCP->setEnabled(false);
    //ui->pushButtonStopCP->setEnabled(false);

    myctl = new CpThread();

    connect(myctl, SIGNAL(searchFileThread(QString)), this, SLOT(getsearchFile(QString)));
    connect(myctl, SIGNAL(hascopyfileCountSig(int)), this, SLOT(hascopyFilecount(int)));
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
    int i;
    QString res;
    int dircnt = ui->listWidgetSrcDir->count();
    QString selFilePath = ui->lineEditSelFile->text();

    srcdirList.clear();
    selFileList.clear();
    dstFilePathList.clear();

    if(dircnt < 1)
    {
        QMessageBox::information(this, tr("目录未选择"),tr("请先选择原文件目录"));
        return;
    }

    if(selFilePath.isEmpty())
    {
        QMessageBox::information(this, tr("筛选文件未选择"),tr("请先选择筛选文件"));
        return;
    }

    for(i = 0; i < dircnt; i++)
    {
        QDir dir(ui->listWidgetSrcDir->item(i)->text());
        if(dir.exists())
        {
            srcdirList.append(dir);
        }
        else
        {
            res = tr("目录[%1]不存在").arg(ui->listWidgetSrcDir->item(i)->text());
            QMessageBox::information(this, tr("目录不存在"), res);
            return;
        }
    }

    QFile fileSel(selFilePath);
    if(!fileSel.exists())
    {
        res = tr("筛选文件[%1]不存在").arg(selFilePath);
        QMessageBox::information(this, tr("文件不存在"), res);
        return;
    }
    else
    {
        if(!fileSel.open(QIODevice::ReadOnly) )
        {
            QMessageBox::warning(this, tr("打开文件"),
                                 tr("打开筛选文件失败：") + fileSel.errorString());
            return;
        }
        QTextStream tsIn(&fileSel);

        while(!tsIn.atEnd())
        {
            static int i = 0;
            QString str = tsIn.readLine().trimmed();
            selFileList.append(str);
        }
    }

    myctl->startSearchWork(srcdirList, selFileList);
}

void Widget::on_pushButtonStartCP_clicked()
{
    copyDirPath = ui->lineEditDstCPDir->text();

    if(copyDirPath.isEmpty())
    {
        QMessageBox::information(this, tr("目录未选择"), "请选择复制到哪个目录");
        return;
    }

    if(ui->listWidgetRes->count() < 1)
    {
        QMessageBox::information(this, tr("没有复制文件"), "可能还没进行文件检索");
        return;
    }

    QDir dir(copyDirPath);
    if(dir.exists())
    {
        qDebug()<<"copyDirPath = "<<copyDirPath;        
        myctl->startCpWork(dstFilePathList, copyDirPath);
        ui->pushButtonStartCP->setText("正在复制...");
    }
    else
    {
        QString res = tr("复制目录[%1]不存在").arg(copyDirPath);
        QMessageBox::information(this, tr("目录不存在"), res);
        return;
    }
}

void Widget::on_pushButtonStopCP_clicked()
{

}


void Widget::getsearchFile(QString str)
{
    ui->listWidgetRes->addItem(str);
    dstFilePathList.append(str);
}

void Widget::hascopyFilecount(int n)
{
    qDebug()<<"n = "<<n;
    int pro = 100*((float)n/ui->listWidgetRes->count());
    ui->progressBar->setValue(pro);
}



