#ifndef SYMMATRIX_H_INCLUDED
#define SYMMATRIX_H_INCLUDED
#include "Matrix.h"
class SymMatrix:public Matrix {
public:
    SymMatrix(int N);
    void random_fill(double min, double max);
};


#endif // SYMMATRIX_H_INCLUDED
