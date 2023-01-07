#include "cpthread.h"
#include "mywork.h"
#include <QFileDialog>
#include <QFile>

CpThread::CpThread(QObject * parent) : QObject(parent)
{
    qRegisterMetaType<QList<QDir>>("QList<QDir>");

    MyWoker * mywork = new MyWoker();

    mywork->moveToThread(&mycpThread);

    connect(mywork, SIGNAL(hasCopyCnt(int)), this, SLOT(copyFilecount(int)));
    connect(mywork, SIGNAL(FinishSearchworkSig(int)), this, SLOT(waitSearchOver(int)));
    connect(mywork, SIGNAL(FinishcopyworkSig(int)), this, SLOT(waitCpOver(int)));
    connect(&mycpThread, &QThread::finished, mywork, &QObject::deleteLater);
    connect(this, SIGNAL(startCpSignal(QStringList, QString)), mywork, SLOT(doCopyWorker(QStringList, QString)));
    connect(this, SIGNAL(startSearchSignal(QList<QDir>, QStringList)), mywork, SLOT(doMySearchWorker(QList<QDir>, QStringList)));

    connect(mywork, SIGNAL(searchFile(QString)), this, SLOT(sendfindsig(QString)));

    mycpThread.start();
}

CpThread::~CpThread()
{
    mycpThread.quit();
    mycpThread.wait();
}

void CpThread::startCpWork(QStringList filelist, QString dirpath)
{
    emit startCpSignal(filelist, dirpath);
}

void CpThread::startSearchWork(QList<QDir> dirlist, QStringList list)
{
    emit startSearchSignal(dirlist, list);
}

void CpThread::sendfindsig(QString str)
{
    emit searchFileThread(str);
}


