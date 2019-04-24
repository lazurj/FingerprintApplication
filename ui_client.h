/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QWidget *centralWidget;
    QLabel *statusLB;
    QFrame *scanerPanel;
    QPushButton *scannerInitBT;
    QPushButton *scanBT;
    QLabel *scanImg;
    QLabel *scannerOutput;
    QFrame *line;
    QLabel *skeletonImg;
    QLabel *label;
    QFrame *line_2;
    QLineEdit *ipTF;
    QLabel *ipLB;
    QLineEdit *portTF;
    QPushButton *connectBT;
    QLabel *portLB;
    QPushButton *sendBT;
    QPushButton *disconnectBT;
    QFrame *params;
    QFrame *gaborFilterParamsPanel;
    QLabel *blockSizeLB;
    QLabel *lambdaLB;
    QLabel *sigmaLB;
    QLabel *gammaLB;
    QLabel *psiLB;
    QDoubleSpinBox *lambda;
    QDoubleSpinBox *sigma;
    QDoubleSpinBox *gamma;
    QDoubleSpinBox *psi;
    QSpinBox *blockSize;
    QLabel *gaborFilterLB;
    QFrame *line_3;
    QFrame *gaborFilterParamsPanel_2;
    QLabel *blockSizeLB_2;
    QSpinBox *gaussBasicBlockSize;
    QLabel *gaussFilterLB_2;
    QFrame *line_4;
    QLabel *gaussBasicFilterLB;
    QLabel *sigmaLB_2;
    QDoubleSpinBox *gaussBasicSigma;
    QSpinBox *gaussAdvancedBlockSize;
    QLabel *blockSizeLB_3;
    QLabel *sigmaLB_3;
    QLabel *gaussBasicFilterLB_2;
    QDoubleSpinBox *gaussAdvancedSigma;
    QFrame *line_5;
    QFrame *line_6;
    QLabel *holeSizeLB;
    QSpinBox *holeSize;
    QCheckBox *returnSkeleton;
    QPushButton *defaultParamsBT;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName(QString::fromUtf8("Client"));
        Client->resize(1322, 721);
        centralWidget = new QWidget(Client);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        statusLB = new QLabel(centralWidget);
        statusLB->setObjectName(QString::fromUtf8("statusLB"));
        statusLB->setGeometry(QRect(30, 50, 411, 21));
        scanerPanel = new QFrame(centralWidget);
        scanerPanel->setObjectName(QString::fromUtf8("scanerPanel"));
        scanerPanel->setGeometry(QRect(20, 80, 761, 571));
        scanerPanel->setFrameShape(QFrame::StyledPanel);
        scanerPanel->setFrameShadow(QFrame::Raised);
        scannerInitBT = new QPushButton(scanerPanel);
        scannerInitBT->setObjectName(QString::fromUtf8("scannerInitBT"));
        scannerInitBT->setGeometry(QRect(30, 30, 101, 41));
        scanBT = new QPushButton(scanerPanel);
        scanBT->setObjectName(QString::fromUtf8("scanBT"));
        scanBT->setGeometry(QRect(150, 30, 111, 41));
        scanImg = new QLabel(scanerPanel);
        scanImg->setObjectName(QString::fromUtf8("scanImg"));
        scanImg->setGeometry(QRect(30, 90, 320, 420));
        scannerOutput = new QLabel(scanerPanel);
        scannerOutput->setObjectName(QString::fromUtf8("scannerOutput"));
        scannerOutput->setGeometry(QRect(30, 0, 61, 21));
        QFont font;
        font.setPointSize(12);
        scannerOutput->setFont(font);
        line = new QFrame(scanerPanel);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 66, 721, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        skeletonImg = new QLabel(scanerPanel);
        skeletonImg->setObjectName(QString::fromUtf8("skeletonImg"));
        skeletonImg->setGeometry(QRect(410, 90, 320, 420));
        label = new QLabel(scanerPanel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(390, 0, 181, 31));
        QFont font1;
        font1.setPointSize(13);
        label->setFont(font1);
        line_2 = new QFrame(scanerPanel);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(370, 60, 20, 491));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        ipTF = new QLineEdit(centralWidget);
        ipTF->setObjectName(QString::fromUtf8("ipTF"));
        ipTF->setGeometry(QRect(60, 10, 113, 28));
        ipLB = new QLabel(centralWidget);
        ipLB->setObjectName(QString::fromUtf8("ipLB"));
        ipLB->setGeometry(QRect(30, 20, 41, 16));
        portTF = new QLineEdit(centralWidget);
        portTF->setObjectName(QString::fromUtf8("portTF"));
        portTF->setGeometry(QRect(220, 10, 113, 28));
        connectBT = new QPushButton(centralWidget);
        connectBT->setObjectName(QString::fromUtf8("connectBT"));
        connectBT->setGeometry(QRect(350, 10, 101, 31));
        portLB = new QLabel(centralWidget);
        portLB->setObjectName(QString::fromUtf8("portLB"));
        portLB->setGeometry(QRect(190, 20, 41, 16));
        portLB->setToolTipDuration(-1);
        sendBT = new QPushButton(centralWidget);
        sendBT->setObjectName(QString::fromUtf8("sendBT"));
        sendBT->setGeometry(QRect(810, 600, 151, 51));
        sendBT->setFont(font);
        disconnectBT = new QPushButton(centralWidget);
        disconnectBT->setObjectName(QString::fromUtf8("disconnectBT"));
        disconnectBT->setGeometry(QRect(470, 10, 101, 31));
        params = new QFrame(centralWidget);
        params->setObjectName(QString::fromUtf8("params"));
        params->setGeometry(QRect(800, 80, 521, 501));
        params->setFrameShape(QFrame::StyledPanel);
        params->setFrameShadow(QFrame::Raised);
        gaborFilterParamsPanel = new QFrame(params);
        gaborFilterParamsPanel->setObjectName(QString::fromUtf8("gaborFilterParamsPanel"));
        gaborFilterParamsPanel->setGeometry(QRect(10, 10, 231, 251));
        gaborFilterParamsPanel->setFrameShape(QFrame::StyledPanel);
        gaborFilterParamsPanel->setFrameShadow(QFrame::Raised);
        blockSizeLB = new QLabel(gaborFilterParamsPanel);
        blockSizeLB->setObjectName(QString::fromUtf8("blockSizeLB"));
        blockSizeLB->setGeometry(QRect(30, 50, 81, 21));
        blockSizeLB->setFont(font);
        lambdaLB = new QLabel(gaborFilterParamsPanel);
        lambdaLB->setObjectName(QString::fromUtf8("lambdaLB"));
        lambdaLB->setGeometry(QRect(30, 90, 57, 16));
        lambdaLB->setFont(font);
        sigmaLB = new QLabel(gaborFilterParamsPanel);
        sigmaLB->setObjectName(QString::fromUtf8("sigmaLB"));
        sigmaLB->setGeometry(QRect(30, 130, 57, 16));
        sigmaLB->setFont(font);
        gammaLB = new QLabel(gaborFilterParamsPanel);
        gammaLB->setObjectName(QString::fromUtf8("gammaLB"));
        gammaLB->setGeometry(QRect(30, 170, 57, 16));
        gammaLB->setFont(font);
        psiLB = new QLabel(gaborFilterParamsPanel);
        psiLB->setObjectName(QString::fromUtf8("psiLB"));
        psiLB->setGeometry(QRect(30, 210, 57, 16));
        psiLB->setFont(font);
        lambda = new QDoubleSpinBox(gaborFilterParamsPanel);
        lambda->setObjectName(QString::fromUtf8("lambda"));
        lambda->setGeometry(QRect(120, 90, 65, 26));
        lambda->setValue(9.000000000000000);
        sigma = new QDoubleSpinBox(gaborFilterParamsPanel);
        sigma->setObjectName(QString::fromUtf8("sigma"));
        sigma->setGeometry(QRect(120, 130, 65, 26));
        sigma->setValue(3.000000000000000);
        gamma = new QDoubleSpinBox(gaborFilterParamsPanel);
        gamma->setObjectName(QString::fromUtf8("gamma"));
        gamma->setGeometry(QRect(120, 170, 65, 26));
        gamma->setValue(1.000000000000000);
        psi = new QDoubleSpinBox(gaborFilterParamsPanel);
        psi->setObjectName(QString::fromUtf8("psi"));
        psi->setGeometry(QRect(120, 210, 65, 26));
        blockSize = new QSpinBox(gaborFilterParamsPanel);
        blockSize->setObjectName(QString::fromUtf8("blockSize"));
        blockSize->setGeometry(QRect(120, 50, 46, 26));
        blockSize->setMinimum(1);
        blockSize->setMaximum(999);
        blockSize->setValue(13);
        gaborFilterLB = new QLabel(gaborFilterParamsPanel);
        gaborFilterLB->setObjectName(QString::fromUtf8("gaborFilterLB"));
        gaborFilterLB->setGeometry(QRect(40, 10, 171, 21));
        gaborFilterLB->setFont(font);
        line_3 = new QFrame(gaborFilterParamsPanel);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(20, 30, 191, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        gaborFilterParamsPanel_2 = new QFrame(params);
        gaborFilterParamsPanel_2->setObjectName(QString::fromUtf8("gaborFilterParamsPanel_2"));
        gaborFilterParamsPanel_2->setGeometry(QRect(250, 10, 261, 411));
        gaborFilterParamsPanel_2->setFrameShape(QFrame::StyledPanel);
        gaborFilterParamsPanel_2->setFrameShadow(QFrame::Raised);
        blockSizeLB_2 = new QLabel(gaborFilterParamsPanel_2);
        blockSizeLB_2->setObjectName(QString::fromUtf8("blockSizeLB_2"));
        blockSizeLB_2->setGeometry(QRect(30, 80, 81, 21));
        blockSizeLB_2->setFont(font);
        gaussBasicBlockSize = new QSpinBox(gaborFilterParamsPanel_2);
        gaussBasicBlockSize->setObjectName(QString::fromUtf8("gaussBasicBlockSize"));
        gaussBasicBlockSize->setGeometry(QRect(140, 80, 46, 26));
        gaussBasicBlockSize->setMinimum(1);
        gaussBasicBlockSize->setValue(1);
        gaussFilterLB_2 = new QLabel(gaborFilterParamsPanel_2);
        gaussFilterLB_2->setObjectName(QString::fromUtf8("gaussFilterLB_2"));
        gaussFilterLB_2->setGeometry(QRect(60, 10, 171, 21));
        gaussFilterLB_2->setFont(font);
        line_4 = new QFrame(gaborFilterParamsPanel_2);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(20, 30, 221, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        gaussBasicFilterLB = new QLabel(gaborFilterParamsPanel_2);
        gaussBasicFilterLB->setObjectName(QString::fromUtf8("gaussBasicFilterLB"));
        gaussBasicFilterLB->setGeometry(QRect(30, 50, 171, 21));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        gaussBasicFilterLB->setFont(font2);
        sigmaLB_2 = new QLabel(gaborFilterParamsPanel_2);
        sigmaLB_2->setObjectName(QString::fromUtf8("sigmaLB_2"));
        sigmaLB_2->setGeometry(QRect(30, 120, 81, 21));
        sigmaLB_2->setFont(font);
        gaussBasicSigma = new QDoubleSpinBox(gaborFilterParamsPanel_2);
        gaussBasicSigma->setObjectName(QString::fromUtf8("gaussBasicSigma"));
        gaussBasicSigma->setGeometry(QRect(140, 120, 65, 26));
        gaussBasicSigma->setValue(1.000000000000000);
        gaussAdvancedBlockSize = new QSpinBox(gaborFilterParamsPanel_2);
        gaussAdvancedBlockSize->setObjectName(QString::fromUtf8("gaussAdvancedBlockSize"));
        gaussAdvancedBlockSize->setGeometry(QRect(140, 210, 46, 26));
        gaussAdvancedBlockSize->setMinimum(1);
        gaussAdvancedBlockSize->setMaximum(999);
        gaussAdvancedBlockSize->setValue(121);
        blockSizeLB_3 = new QLabel(gaborFilterParamsPanel_2);
        blockSizeLB_3->setObjectName(QString::fromUtf8("blockSizeLB_3"));
        blockSizeLB_3->setGeometry(QRect(30, 210, 81, 21));
        blockSizeLB_3->setFont(font);
        sigmaLB_3 = new QLabel(gaborFilterParamsPanel_2);
        sigmaLB_3->setObjectName(QString::fromUtf8("sigmaLB_3"));
        sigmaLB_3->setGeometry(QRect(30, 250, 81, 21));
        sigmaLB_3->setFont(font);
        gaussBasicFilterLB_2 = new QLabel(gaborFilterParamsPanel_2);
        gaussBasicFilterLB_2->setObjectName(QString::fromUtf8("gaussBasicFilterLB_2"));
        gaussBasicFilterLB_2->setGeometry(QRect(30, 180, 171, 21));
        gaussBasicFilterLB_2->setFont(font2);
        gaussAdvancedSigma = new QDoubleSpinBox(gaborFilterParamsPanel_2);
        gaussAdvancedSigma->setObjectName(QString::fromUtf8("gaussAdvancedSigma"));
        gaussAdvancedSigma->setGeometry(QRect(140, 250, 65, 26));
        gaussAdvancedSigma->setValue(10.000000000000000);
        line_5 = new QFrame(gaborFilterParamsPanel_2);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setEnabled(true);
        line_5->setGeometry(QRect(20, 160, 221, 16));
        line_5->setFrameShadow(QFrame::Sunken);
        line_5->setFrameShape(QFrame::HLine);
        line_6 = new QFrame(gaborFilterParamsPanel_2);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setEnabled(true);
        line_6->setGeometry(QRect(20, 290, 221, 16));
        line_6->setFrameShadow(QFrame::Sunken);
        line_6->setFrameShape(QFrame::HLine);
        holeSizeLB = new QLabel(gaborFilterParamsPanel_2);
        holeSizeLB->setObjectName(QString::fromUtf8("holeSizeLB"));
        holeSizeLB->setGeometry(QRect(20, 320, 81, 21));
        holeSizeLB->setFont(font);
        holeSize = new QSpinBox(gaborFilterParamsPanel_2);
        holeSize->setObjectName(QString::fromUtf8("holeSize"));
        holeSize->setGeometry(QRect(140, 320, 46, 26));
        holeSize->setMinimum(1);
        holeSize->setMaximum(500);
        holeSize->setValue(20);
        returnSkeleton = new QCheckBox(params);
        returnSkeleton->setObjectName(QString::fromUtf8("returnSkeleton"));
        returnSkeleton->setGeometry(QRect(10, 270, 211, 21));
        defaultParamsBT = new QPushButton(params);
        defaultParamsBT->setObjectName(QString::fromUtf8("defaultParamsBT"));
        defaultParamsBT->setGeometry(QRect(408, 457, 91, 31));
        Client->setCentralWidget(centralWidget);
        params->raise();
        statusLB->raise();
        scanerPanel->raise();
        ipTF->raise();
        ipLB->raise();
        portTF->raise();
        connectBT->raise();
        portLB->raise();
        sendBT->raise();
        disconnectBT->raise();
        menuBar = new QMenuBar(Client);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1322, 22));
        Client->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Client);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Client->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Client);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Client->setStatusBar(statusBar);

        retranslateUi(Client);

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QMainWindow *Client)
    {
        Client->setWindowTitle(QApplication::translate("Client", "Client", nullptr));
        statusLB->setText(QString());
        scannerInitBT->setText(QApplication::translate("Client", "Init", nullptr));
        scanBT->setText(QApplication::translate("Client", "Scan", nullptr));
        scanImg->setText(QString());
        scannerOutput->setText(QApplication::translate("Client", "Scanner", nullptr));
        skeletonImg->setText(QString());
        label->setText(QApplication::translate("Client", "Response From Server", nullptr));
        ipLB->setText(QApplication::translate("Client", "Ip", nullptr));
        portTF->setText(QString());
        connectBT->setText(QApplication::translate("Client", "Connect", nullptr));
        portLB->setText(QApplication::translate("Client", "Port", nullptr));
        sendBT->setText(QApplication::translate("Client", "Send Data", nullptr));
        disconnectBT->setText(QApplication::translate("Client", "Disconnect", nullptr));
        blockSizeLB->setText(QApplication::translate("Client", "Block size", nullptr));
        lambdaLB->setText(QApplication::translate("Client", "Lambda", nullptr));
        sigmaLB->setText(QApplication::translate("Client", "Sigma", nullptr));
        gammaLB->setText(QApplication::translate("Client", "Gamma", nullptr));
        psiLB->setText(QApplication::translate("Client", "Psi", nullptr));
        gaborFilterLB->setText(QApplication::translate("Client", "Gabor filter params", nullptr));
        blockSizeLB_2->setText(QApplication::translate("Client", "Block size", nullptr));
        gaussFilterLB_2->setText(QApplication::translate("Client", "Gauss filter params", nullptr));
        gaussBasicFilterLB->setText(QApplication::translate("Client", "Basic", nullptr));
        sigmaLB_2->setText(QApplication::translate("Client", "Sigma", nullptr));
        blockSizeLB_3->setText(QApplication::translate("Client", "Block size", nullptr));
        sigmaLB_3->setText(QApplication::translate("Client", "Sigma", nullptr));
        gaussBasicFilterLB_2->setText(QApplication::translate("Client", "Advanced", nullptr));
        holeSizeLB->setText(QApplication::translate("Client", "Hole size", nullptr));
        returnSkeleton->setText(QApplication::translate("Client", "return skeleton fingerprint", nullptr));
        defaultParamsBT->setText(QApplication::translate("Client", "Default", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
