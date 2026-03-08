#include "AdvancedMatrix.h"

// Constructor
AdvancedMatrix::AdvancedMatrix(int r, int c) : Matrix2D(r, c) {
}

// Prime Check
bool AdvancedMatrix::isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) {
            return false;
        }

    return true;
}

// Custom Square Root 
double AdvancedMatrix::mySqrt(double number) {
    if (number <= 0) {
        return 0;
    }

    double guess = number;
    for (int i = 0; i < 20; i++)
        guess = (guess + number / guess) / 2;

    return guess;
}

// Sum of Prime Numbers
int AdvancedMatrix::sumOfPrime() {
    int sum = 0;

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (isPrime(arr[i][j]))
                sum += arr[i][j];

    return sum;
}

// Determinant (2x2 and 3x3)
int AdvancedMatrix::determinant() {

    if (rows != cols)
        return 0;

    if (rows == 2) {
        return arr[0][0] * arr[1][1]
            - arr[0][1] * arr[1][0];
    }

    if (rows == 3) {
        return arr[0][0] * (arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1])
            - arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0])
            + arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]);
    }

    return 0;
}

// Spectral Norm
double AdvancedMatrix::spectralNorm() {
    double sum = 0;

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            sum += (double)arr[i][j] * arr[i][j];

    return mySqrt(sum);
}
