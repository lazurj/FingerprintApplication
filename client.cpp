#include "client.h"
#include "ui_client.h"

Client::Client(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Client)
{
    ui->setupUi(this);
    ui->statusLB->setText("No connection.");
    QObject::connect(&(this->connection.socket), SIGNAL(disconnected()),this, SLOT(disconnectedFromServer()));
    QObject::connect(&(this->connection.socket), SIGNAL(readyRead()),this, SLOT(readResponse()));
}

Client::~Client()
{
    delete ui;
}

void Client::on_connectBT_clicked() {
    this->connection.initConnection();
    if (this->connection.status) {
        showMessage(MessageType::Info, "Server", "Currenty connected to "  + this->connection.getConnectionName());
        ui->statusLB->setText("Currenty connected to " + this->connection.getConnectionName());
    } else {
        showMessage(MessageType::Error, "Server", "No initialized connections");
    }
}

void Client::on_disconnectBT_clicked() {
    this->connection.socket.disconnectFromHost();
}


void Client::on_sendBT_clicked() {
    if(!this->connection.status) {
        showMessage(MessageType::Error, "Server", "Not connected to any server. Please connect to server.");
        return;
    }
    getGaborParamsFromScreen();
    this->connection.sendPreprocessingParams(this->preprocessing_params);
    this->connection.sendImg(this->scanner.imgData, this->scanner.pic_width, this->scanner.pic_height);

}

void Client::on_scannerInitBT_clicked() {
    if(!this->scanner.init()) {
        showMessage(MessageType::Error, "Scanner", "Scanner was not initilized");
    } else {
        showMessage(MessageType::Info, "Scanner", "Scanner was succesfully initilized");
    }
}

void Client::on_scanBT_clicked() {
    unsigned char* imgData = this->scanner.scan();
    if(this->scanner.img.size().width() == 0 && this->scanner.img.size().height() == 0) {
        showMessage(MessageType::Error, "Scanner", "Unable to scan fingerprint. Try initialize it first.");
    } else {
        QPixmap px = QPixmap::fromImage(this->scanner.img);
        ui->scanImg->setFixedHeight(this->scanner.img.height());
        ui->scanImg->setFixedWidth(this->scanner.img.width());
        ui->scanImg->setPixmap(px);
        //this->scanner.img.save("/home/jakub/pic.jpg");
    }
}

void Client::on_defaultParamsBT_clicked() {
    ui->gamma->setValue(3);
    ui->blockSize->setValue(13);
    ui->lambda->setValue(9);
    ui->sigma->setValue(1);
    ui->psi->setValue(0);
    ui->gaussBasicBlockSize->setValue(1);
    ui->gaussBasicSigma->setValue(1);
    ui->gaussAdvancedBlockSize->setValue(121);
    ui->gaussAdvancedSigma->setValue(10);
    ui->holeSize->setValue(20);
}

void Client::getGaborParamsFromScreen() {
    preprocessing_params.gaborGamma= ui->gamma->value();
    preprocessing_params.gaborBlockSize = ui->blockSize->value();
    preprocessing_params.gaborLambda = ui->lambda->value();
    preprocessing_params.gaborSigma = ui->sigma->value();
    preprocessing_params.gaborPsi = ui->psi->value();
    preprocessing_params.gaussBasicBlockSize = ui->gaussBasicBlockSize->value();
    preprocessing_params.gaussBasicSigma = ui->gaussBasicSigma->value();
    preprocessing_params.gaussAdvancedBlockSize = ui->gaussAdvancedBlockSize->value();
    preprocessing_params.gaussAdvancedSigma = ui->gaussAdvancedSigma->value();
    preprocessing_params.holeSize = ui->holeSize->value();
}

void Client::disconnectedFromServer() {
    this->connection.disconnected();
    showMessage(MessageType::Warning, "Server", "You have been disconected from server!");
    ui->statusLB->setText("No connection.");
}


void Client::readResponse() {
    QByteArray readData = qobject_cast<QTcpSocket*>(sender())->readAll();
    qDebug() << readData.size() << " B received.";
    readImgBA.append(readData);
    if(readImgBA.size() != SUPREMA_IMG_WIDTH*SUPREMA_IMG_HEIGHT) {
        return;
    }
    QBuffer *imgb = new QBuffer();
    imgb->open(QIODevice::ReadWrite);
    imgb->write(readImgBA);
    skeleton_img.loadFromData(imgb->buffer());
    if(!skeleton_img.isNull()) {
        QPixmap px = QPixmap::fromImage(this->skeleton_img);
        ui->skeletonImg->setFixedHeight(this->skeleton_img.height());
        ui->skeletonImg->setFixedWidth(this->skeleton_img.width());
        ui->skeletonImg->setPixmap(px);
    }
    readImgBA.clear();
}

void Client::showMessage(MessageType type, QString name, QString messageText) {
    switch (type) {
    case MessageType::Info :
        QMessageBox::information(
            this,
            tr(name.toLocal8Bit().data()),
            tr(messageText.toLocal8Bit().data()));
        break;
    case MessageType::Warning:
        QMessageBox::warning(
            this,
            tr(name.toLocal8Bit().data()),
            tr(messageText.toLocal8Bit().data()));
        break;
    case MessageType::Error :
        QMessageBox::critical(
            this,
            tr(name.toLocal8Bit().data()),
            tr(messageText.toLocal8Bit().data()));
        break;
    default:
        break;
    }
}


