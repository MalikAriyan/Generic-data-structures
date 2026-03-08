//Malik Muhammad Ariyan
//L1F24BSCS0108
//DSA LAB 2  
//Section: D1

#include <iostream>
#include "Matrix2D.h"
using namespace std;

int main()
{
    // Create 3x3 Matrix
    Matrix2D m(3, 3);

    // Insert different values
    m.insertAt(0, 0, 11);
    m.insertAt(0, 1, 22);
    m.insertAt(0, 2, 33);
    m.insertAt(1, 0, 44);
    m.insertAt(1, 1, 55);
    m.insertAt(2, 2, 99);

    cout << "========== MATRIX INFORMATION ==========\n\n";

    cout << "Matrix Elements:\n";
    cout << "-----------------\n";
    m.display();

    cout << "\nMatrix Details:\n";
    cout << "Rows  : " << m.getRows() << endl;
    cout << "Cols  : " << m.getCols() << endl;

    cout << "\nStatus Check:\n";

    cout << "Is Matrix Empty?           -> "
        << (m.empty() ? "YES" : "NO") << endl;

    cout << "Is Matrix Fully Allocated? -> "
        << (m.full() ? "YES" : "NO") << endl;

    cout << "\n=========================================\n";

    return 0;
}