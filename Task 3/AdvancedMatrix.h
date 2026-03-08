#pragma once
#include "Matrix2D.h"

class AdvancedMatrix : public Matrix2D {

private:
    bool isPrime(int num);
    double mySqrt(double number);

public:
    AdvancedMatrix(int r = 0, int c = 0);

    int sumOfPrime();
    int determinant();
    double spectralNorm();
};
