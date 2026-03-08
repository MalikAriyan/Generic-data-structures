#pragma once
#include <iostream>
using namespace std;

class Matrix2D {
protected:
    int rows;
    int cols;
    int** arr;

public:

    // Parameterized Constructor 
    Matrix2D(int r = 0, int c = 0);

    // Copy Constructor (Deep Copy)
    Matrix2D(const Matrix2D& other);

    // Destructor
    virtual ~Matrix2D();

    bool empty();
    bool full();
    int getRows();
    int getCols();
    bool insertAt(int r, int c, int value);
    int getElement(int r, int c);
    void display();
};
