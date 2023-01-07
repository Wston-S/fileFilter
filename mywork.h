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

    /* 帅选条件，文件名字为str的文件是否再列表list中 */
    bool IsRightSelFile(QString str, QStringList list)
    {
        QString fileName;
        QStringList ll = str.split(".");
        if(ll.count()>=1)
        {
            fileName =ll[0];
        }

        for(int i = 0; i < list.count(); i++)
        {
            QString strname = list.at(i);

            if(!fileName.compare(strname))
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

        for(int i = 0; i < filelist.count(); i++)
        {
            QString path = filelist.at(i);
            file.setFileName(path);

            if(file.exists())
            {
                QFileInfo fileinfo(file.fileName());
                copyfile = dirpath + "/" + fileinfo.fileName();
                file.copy(copyfile);
                hascopycnt++;
                emit hasCopyCnt(hascopycnt);
            }
        }

        emit FinishcopyworkSig(0);
    }

    void doMySearchWorker(QList<QDir> dirlist, QStringList list)
    {
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
