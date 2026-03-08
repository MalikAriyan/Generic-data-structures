#include "Matrix2D.h"

// Constructor
Matrix2D::Matrix2D(int r, int c) {
    rows = r;
    cols = c;

    if (rows > 0 && cols > 0) {
        arr = new int* [rows];
        for (int i = 0; i < rows; i++) {
            arr[i] = new int[cols];
            for (int j = 0; j < cols; j++)
                arr[i][j] = 0;
        }
    }
    else {
        arr = NULL;
    }
}

// Copy Constructor (Deep Copy)
Matrix2D::Matrix2D(const Matrix2D& other) {
    rows = other.rows;
    cols = other.cols;

    if (rows > 0 && cols > 0) {
        arr = new int* [rows];
        for (int i = 0; i < rows; i++) {
            arr[i] = new int[cols];
            for (int j = 0; j < cols; j++)
                arr[i][j] = other.arr[i][j];
        }
    }
    else {
        arr = NULL;
    }
}

// Destructor
Matrix2D::~Matrix2D() {
    if (arr != NULL) {
        for (int i = 0; i < rows; i++)
            delete[] arr[i];
        delete[] arr;
    }
}

bool Matrix2D::empty() {
    return (rows == 0 || cols == 0);
}

bool Matrix2D::full() {
    if (arr == NULL) return false;

    for (int i = 0; i < rows; i++)
        if (arr[i] == NULL)
            return false;

    return true;
}

int Matrix2D::getRows() { return rows; }
int Matrix2D::getCols() { return cols; }

bool Matrix2D::insertAt(int r, int c, int value) {
    if (r < 0 || r >= rows || c < 0 || c >= cols)
        return false;

    arr[r][c] = value;
    return true;
}

int Matrix2D::getElement(int r, int c) {
    if (r < 0 || r >= rows || c < 0 || c >= cols)
        return -1;

    return arr[r][c];
}

void Matrix2D::display() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}
