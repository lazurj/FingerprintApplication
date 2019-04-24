#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>
#include <QBuffer>
#include <QMessageBox>
#include "connection.h"
#include "scanner.h"
#include "preprocessing_params.h"

enum class MessageType  {
     Info,
     Warning,
     Error
};
#define SUPREMA_IMG_WIDTH 320
#define SUPREMA_IMG_HEIGHT 480

// control data size in bytes
#define GABOR_PARAMS_SIZE 36

namespace Ui {
class Client;
}

class Client : public QMainWindow
{
    Q_OBJECT

public:
    explicit Client(QWidget *parent = nullptr);
    ~Client();

private slots:
    void on_connectBT_clicked();
    void on_disconnectBT_clicked();
    void on_sendBT_clicked();
    void on_scannerInitBT_clicked();
    void on_scanBT_clicked();
    void on_defaultParamsBT_clicked();
    void getGaborParamsFromScreen();
    void showMessage(MessageType type, QString name, QString messageText);
    void disconnectedFromServer();
    void readResponse();

private:
    Ui::Client *ui;
    Connection connection;
    Scanner scanner;
    QImage img;
    QImage skeleton_img;
    QByteArray readImgBA;
    unsigned char* lastImageData;
    PREPROCESSING_PARAMS preprocessing_params;
};

#endif // CLIENT_H
