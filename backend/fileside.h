#ifndef FILESIDE_H
#define FILESIDE_H

#include <QObject>
#include <QFile>
#include <QDir>
#include <QDebug>

class FileSide : public QObject
{
    Q_OBJECT
public:
    explicit FileSide(QObject *parent = nullptr);

signals:

public slots:
};

#endif // FILESIDE_H