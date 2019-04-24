#include "connection.h"

Connection::Connection(QObject *parent) : QObject(parent) {
    this->port = 9999;
    this->status = false;
}

void Connection::initConnection() {
    this->socket.connectToHost(QHostAddress::LocalHost, this->port);
    if(this->socket.waitForConnected(-1)) {
        qDebug() << "connected: " << this->socket.localAddress().toString() << " " << this->socket.localPort();
    } else {
        qDebug() << "cannot connect";
        this->status = false;
        return;
    }
    this->status = true;

    //TODO QSSLSocket -> ignoreSSLError ignorovat samopodpisany certifikat
}

void Connection::disconnected() {
    qDebug() << "Disconnected from server";
    this->status = false;
}

QString Connection::getConnectionName() {
    QString ret;
    if(status) {
        ret.append("connected: " + this->socket.localAddress().toString() + " " + this->socket.localPort());
    }
    return ret;
}

bool Connection::sendImg(unsigned char* img_data, int width, int height) {
    this->socket.write((const char*)img_data,sizeof(unsigned char)*width*height);
    this->socket.flush();
    return true;
}

bool Connection::sendPreprocessingParams(PREPROCESSING_PARAMS preprocessing_params) {
    QByteArray blockSizeBA, sigmaBA, lambdaBA, gammaBA, psiBA, gaussBasicBlockSizeBA,  gaussBasicSigmaBA,  gaussAdvancedBlockSizeBA, gaussAdvancedSigmaBA, holeSizeBA;

    QDataStream dataStream1(&blockSizeBA, QIODevice::WriteOnly);
    QDataStream dataStream2(&sigmaBA, QIODevice::WriteOnly);
    QDataStream dataStream3(&lambdaBA, QIODevice::WriteOnly);
    QDataStream dataStream4(&gammaBA, QIODevice::WriteOnly);
    QDataStream dataStream5(&psiBA, QIODevice::WriteOnly);
    QDataStream dataStream6(&gaussBasicBlockSizeBA, QIODevice::WriteOnly);
    QDataStream dataStream7(&gaussBasicSigmaBA, QIODevice::WriteOnly);
    QDataStream dataStream8(&gaussAdvancedBlockSizeBA, QIODevice::WriteOnly);
    QDataStream dataStream9(&gaussAdvancedSigmaBA, QIODevice::WriteOnly);
    QDataStream dataStream10(&holeSizeBA, QIODevice::WriteOnly);

    quint32 blockSize = preprocessing_params.gaborBlockSize;
    double sigma = preprocessing_params.gaborSigma;
    double lambda = preprocessing_params.gaborLambda;
    double gamma = preprocessing_params.gaborGamma;
    double psi = preprocessing_params.gaborPsi;
    int gaussBasicBlockSize = preprocessing_params.gaussBasicBlockSize;
    double gaussBasicSigma = preprocessing_params.gaussBasicSigma;
    int gaussAdvancedBlockSize = preprocessing_params.gaussAdvancedBlockSize;
    double gaussAdvancedSigma = preprocessing_params.gaussAdvancedSigma;
    int holeSize = preprocessing_params.holeSize;

    dataStream1 << blockSize;
    dataStream2 << sigma;
    dataStream3 << lambda;
    dataStream4 << gamma;
    dataStream5 << psi;
    dataStream6 << gaussBasicBlockSize;
    dataStream7 << gaussBasicSigma;
    dataStream8 << gaussAdvancedBlockSize;
    dataStream9 << gaussAdvancedSigma;
    dataStream10 << holeSize;

    this->socket.write(blockSizeBA);
    this->socket.write(sigmaBA);
    this->socket.write(lambdaBA);
    this->socket.write(gammaBA);
    this->socket.write(psiBA);
    this->socket.write(gaussBasicBlockSizeBA);
    this->socket.write(gaussBasicSigmaBA);
    this->socket.write(gaussAdvancedBlockSizeBA);
    this->socket.write(gaussAdvancedSigmaBA);
    this->socket.write(holeSizeBA);
    this->socket.flush();
    qDebug() << "Sended params : " << blockSizeBA.size() + sigmaBA.size() + lambdaBA.size() + gammaBA.size() + psiBA.size()
             << gaussBasicBlockSizeBA.size() + gaussBasicSigmaBA.size() + gaussAdvancedBlockSizeBA.size() + gaussAdvancedSigmaBA.size() + holeSizeBA.size() << " bytes";
}

