#ifndef MYWORK_H
#define MYWORK_H

#include <QDebug>
#include <QThread>
#include <QObject>
#include <QFileDialog>
#include <QFile>

class MyWoker : public QObject
{
    Q_OBJECT

public:
    MyWoker(){}

    bool IsRightSelFile(QString str, QStringList list)
    {
        for(int i = 0; i < list.count(); i++)
        {
            QString strname = list.at(i);

            if(str.contains(strname))
            {
                return true;
            }
        }

        return false;
    }

public slots:
    void doCopyWorker(QStringList filelist, QString dirpath)
    {
        int hascopycnt = 0;
        QFile file;
        QString copyfile;

        qDebug()<<"dirpath = "<<dirpath;
        qDebug()<<"dirpath = "<<dirpath;
        qDebug()<<"dirpath = "<<dirpath;

        for(int i = 0; i < filelist.count(); i++)
        {
            QString path = filelist.at(i);
            file.setFileName(path);

            if(file.exists())
            {
                QFileInfo fileinfo(file.fileName());
                copyfile = dirpath + "/" + fileinfo.fileName();
                //qDebug()<<"file  exist, copyfile = "<<copyfile;
                file.copy(copyfile);
                hascopycnt++;
                qDebug()<<"emit hasCopyCnt(hascopycnt);" <<endl;
                emit hasCopyCnt(hascopycnt);
                //QThread::sleep(1);
            }
            else
            {
                qDebug()<<"file ! exist"<<endl;
            }
        }

        emit FinishcopyworkSig(0);
    }

    void doMySearchWorker(QList<QDir> dirlist, QStringList list)
    {
        qDebug()<<"doMySearchWorker"<<endl;

        for(int i = 0; i < dirlist.count(); i++)
        {
            int j;

            QFileInfoList li = dirlist.at(i).entryInfoList(QDir::Files, QDir::Name);
            for(j = 0; j <li.count(); j++)
            {
                if(li[j].isFile())
                {
                    QString filestr = li[j].fileName();

                    if(IsRightSelFile(filestr, list))
                    {
                        QString filestrPath = li[j].filePath();
                        emit searchFile(filestrPath);
                    }
                }
            }
        }

        emit FinishSearchworkSig(0);
    }

signals:
    void FinishSearchworkSig(int);
    void FinishcopyworkSig(int);

    void hasCopyCnt(int);

    void searchFile(QString path);

};

#endif // MYWORK_H
