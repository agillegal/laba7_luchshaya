#ifndef PCA_H_INCLUDED
#define PCA_H_INCLUDED
#include "Matrix.h"
class PCA{
public:
    Matrix center(Matrix m);
    Matrix autoscale(Matrix m);
    Matrix* NIPALS(Matrix m, int PC);
    Matrix leverage(Matrix T);
    Matrix deviation(Matrix E);
    double TRV(Matrix E);
    double ERV(Matrix m, Matrix E);
};


#endif // PCA_H_INCLUDED
