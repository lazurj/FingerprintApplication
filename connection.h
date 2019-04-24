#ifndef CONNECTION_H
#define CONNECTION_H

#include <QObject>
#include <QTcpSocket>
#include <QHostAddress>
#include <QLineEdit>
#include <QBuffer>
#include "preprocessing_params.h"

#define SUPREMA_IMG_WIDTH 320
#define SUPREMA_IMG_HEIGHT 480
#define SUPREMA_IMG_SIZE 153600
// control data size in bytes
#define CONTROL_DATA_SIZE 16

class Connection : public QObject
{
    Q_OBJECT public:
    explicit Connection(QObject *parent = nullptr);
    signals:

private slots:

public:
    QTcpSocket socket;
    quint16 port;
    bool status;

public slots:
    QString getConnectionName();
    void disconnected();
    void initConnection();
    bool sendImg(unsigned char* img_data, int width, int height);
    bool sendPreprocessingParams(PREPROCESSING_PARAMS preprocessing_params);

};

#endif // CONNECTION_H
