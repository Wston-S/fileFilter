#include "cpthread.h"
#include "mywork.h"

CpThread::CpThread(QObject * parent) : QObject(parent)
{
    MyWoker * mywork = new MyWoker();

    mywork->moveToThread(&mycpThread);

    connect(mywork, SIGNAL(FinishworkSig(int)), this, SLOT(waitCpOver(int)));
    connect(&mycpThread, &QThread::finished, mywork, &QObject::deleteLater);
    connect(this, SIGNAL(startCpSignal(int)), mywork, SLOT(doMyWorker(int)));


    qDebug()<<"------QThread moveToThread Demo-----";

    mycpThread.start();
}

CpThread::~CpThread()
{
    mycpThread.quit();
    mycpThread.wait();
}

void CpThread::startCpWork()
{
    qDebug()<<"startCpWork"<<endl;
    emit startCpSignal(1);
}
