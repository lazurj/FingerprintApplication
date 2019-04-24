#include "scanner.h"

#define TEMPLATE_SIZE 1024
char m_strError[128];
Scanner::Scanner(QObject *parent) : QObject(parent) {
}


bool Scanner::init() {
    UFS_STATUS ufs_res;
    int nScannerNumber;

    ufs_res = UFS_Init();
    if (ufs_res == UFS_OK) {
    } else {
        UFS_GetErrorString(ufs_res, m_strError);
        printf("UFS_SetScannerCallback: %s\r\n", m_strError);
        return false;
    }

    ufs_res = UFS_GetScannerNumber(&nScannerNumber);
    if (ufs_res == UFS_OK) {
    } else {
        UFS_GetErrorString(ufs_res, m_strError);
        printf("UFS_SetScannerCallback: %s\r\n", m_strError);
        return false;
    }


    ufs_res = UFS_GetScannerNumber(&nScannerNumber);
    if (ufs_res == UFS_OK) {
        printf("UFS_SetScannerCallback: OK\r\n");
    } else {
        UFS_GetErrorString(ufs_res, m_strError);
        printf("UFS_SetScannerCallback: %s\r\n", m_strError);
        return false;
    }

    return true;
}

unsigned char* Scanner::scan() {
    UFS_STATUS ufs_res;
    int value = 500; // 5sec
    unsigned char* imageData;
    unsigned char atemp[TEMPLATE_SIZE];

    ufs_res = UFS_GetScannerHandle(0, &this->hScanner);
    if (ufs_res == UFS_OK) {
        printf("ScannerHandle: %s", this->hScanner);
    } else {
        UFS_GetErrorString(ufs_res, m_strError);
        printf("UFS_GetScannerNumber: %s\r\n", m_strError);
        return nullptr;
    }

    //ufs_res = UFS_SetParameter(hScanner, UFS_PARAM_TIMEOUT, &value);
    value = TEMPLATE_SIZE;
    ufs_res = UFS_SetParameter(this->hScanner, UFS_PARAM_TEMPLATE_SIZE, &value);
    value = 0;
    ufs_res = UFS_SetParameter(this->hScanner, UFS_PARAM_DETECT_CORE, &value);

    ufs_res = UFS_ClearCaptureImageBuffer(this->hScanner);
    if(ufs_res != UFS_OK) {
        return nullptr;
    }

    ufs_res = UFS_CaptureSingleImage(this->hScanner);
    if (ufs_res == UFS_OK) {
        printf("UFS_GETCaptureImageInfo: SUCCEEDED\r\n");
    } else {
        UFS_GetErrorString(ufs_res, m_strError);
        printf("UFS_GetScannerHandle: ERROR: %s\r\n", m_strError);
        return nullptr;
    }

    int resolution;
    ufs_res = UFS_GetCaptureImageBufferInfo(this->hScanner, &this->pic_width, &this->pic_height, &resolution);
    if (ufs_res == UFS_OK) {
        printf("UFS_GETCaptureImageInfo: SUCCEEDED\r\n");
    } else {
        UFS_GetErrorString(ufs_res, m_strError);
        printf("UFS_GetScannerHandle: ERROR: %s\r\n", m_strError);
        return nullptr;
    }
    imageData = (uchar*)malloc(this->pic_width * this->pic_height * sizeof (uchar));

    ufs_res = UFS_GetCaptureImageBuffer(this->hScanner, imageData);
    if (ufs_res == UFS_OK) {
        printf("UFS_GETCaptureImage: SUCCEEDED\r\n");
    } else {
        UFS_GetErrorString(ufs_res, m_strError);
        printf("UFS_GetScannerHandle: ERROR: %s\r\n", m_strError);
        return nullptr;
    }
    this->img = QImage(imageData, this->pic_width, this->pic_height, QImage::Format_Grayscale8);
    this->imgData = imageData;
    return imageData;

    /*unsigned char atemp[TEMPLATE_SIZE];
    int nTemplateSize, nEnrollQuality;
    ufs_res = UFS_ExtractEx(hScanner, TEMPLATE_SIZE, atemp, &nTemplateSize, &nEnrollQuality);*/

}
