#ifndef SCANNER_H
#define SCANNER_H

#include <QObject>
#include <QImage>
#include "UFScanner.h"


class Scanner : public QObject
{
    Q_OBJECT public:
    explicit Scanner(QObject *parent = nullptr);
    signals:
private slots:

private:

public:
    HUFScanner hScanner;
    QImage img;
    int pic_width;
    int pic_height;
    unsigned char*  imgData;

public slots:
    bool init();
    unsigned char* scan();
};

#endif // SCANNER_H
