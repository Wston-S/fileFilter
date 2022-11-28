#ifndef CPTHREAD_H
#define CPTHREAD_H

#include <QObject>
#include <QThread>
#include <QDebug>

class CpThread : public QObject
{
    Q_OBJECT

public:
    CpThread(QObject * parent = 0);
    ~CpThread();

   QThread mycpThread;

   void startSearchWork(QStringList list);
   void startCpWork();

signals:
   void startCpSignal(int);
   void startSearchSignal(QStringList);

public slots:
    void waitCpOver(int para)
    {
        qDebug()<<"para = "<<para<<" this is wait copy work over, and threadID:"<<QThread::currentThreadId();
    }

};

#endif // CPTHREAD_H
