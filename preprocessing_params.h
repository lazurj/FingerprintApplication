#ifndef PREPROCESSING_PARAMS_H
#define PREPROCESSING_PARAMS_H

typedef struct preprocessing_params {
    int gaborBlockSize;
    float gaborSigma;
    float gaborLambda;
    float gaborGamma;
    float gaborPsi;
    int gaussBasicBlockSize;
    float gaussBasicSigma;
    int gaussAdvancedBlockSize;
    float gaussAdvancedSigma;
    int holeSize;
} PREPROCESSING_PARAMS;

#endif // PREPROCESSING_PARAMS_H
