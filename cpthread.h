#ifndef CPTHREAD_H
#define CPTHREAD_H

#include <QObject>
#include <QThread>
#include <QDebug>
#include <QFileDialog>
#include <QFile>

class CpThread : public QObject
{
    Q_OBJECT

public:
    CpThread(QObject * parent = 0);
    ~CpThread();

    QThread mycpThread;

    void startSearchWork(QList<QDir> dirlist, QStringList list);
    void startCpWork(QStringList filelist, QString dirpath);

signals:
    void startCpSignal(QStringList filelist, QString dirpath);
    void startSearchSignal(QList<QDir> dirlist, QStringList list);
    void searchFileThread(QString path);
    void hascopyfileCountSig(int n);

public slots:
    void waitSearchOver(int para)
    {
        qDebug()<<"检索完成";
    }

    void waitCpOver(int para)
    {
        qDebug()<<"复制完成";
    }

    void copyFilecount(int n)
    {
        qDebug()<<"emit hascopyfileCountSig(hascopycnt);" <<endl;
        emit hascopyfileCountSig(n);
    }

    void sendfindsig(QString str);

};

#endif // CPTHREAD_H
