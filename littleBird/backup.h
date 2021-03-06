#ifndef BACKUP_H
#define BACKUP_H

#include <QObject>
#include <QUrl>

class backup : public QObject

{
    Q_OBJECT

public:
    explicit backup(QObject *parent = 0);
signals:
    void  backupfileCompleted();
    void  configuredHadSaved();
    void  readConfiguredMess(QString fromFile,QString taregetFile);
public slots:
    void  backupfile(QList<QUrl> taregetFile,QString targetDir,QString applicationDirPath);
    void  saveConfigured(QString taregetFile,QString applicationDirPath);
};

#endif // BACKUP_H
