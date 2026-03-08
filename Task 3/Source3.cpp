//Malik Muhammad Ariyan
//L1F24BSCS0108
//DSA LAB 2  
//Section: D1

#include <iostream>
#include "AdvancedMatrix.h"
using namespace std;

int main() {

    int r, c;

    cout << "=====================================\n";
    cout << "        ADVANCED MATRIX SYSTEM       \n";
    cout << "=====================================\n\n";

    cout << "Enter number of rows    : ";
    cin >> r;

    cout << "Enter number of columns : ";
    cin >> c;

    AdvancedMatrix matrix(r, c);

    int choice;

    do {
        cout << "\n=====================================\n";
        cout << "                MENU                 \n";
        cout << "=====================================\n";
        cout << " 1  -> Insert Element\n";
        cout << " 2  -> Display Matrix\n";
        cout << " 3  -> Sum of Prime Numbers\n";
        cout << " 4  -> Determinant\n";
        cout << " 5  -> Spectral Norm\n";
        cout << " 0  -> Exit Program\n";
        cout << "-------------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1: {
            int row, col, value;

            cout << "\n--- Insert Element ---\n";
            cout << "Row index    : ";
            cin >> row;

            cout << "Column index : ";
            cin >> col;

            cout << "Value        : ";
            cin >> value;

            if (matrix.insertAt(row, col, value))
                cout << ">> Element inserted successfully!\n";
            else
                cout << ">> Error: Invalid index!\n";

            break;
        }

        case 2:
            cout << "\n--- Matrix Elements ---\n";
            matrix.display();
            break;

        case 3:
            cout << "\n>> Sum of Prime Numbers = "
                << matrix.sumOfPrime() << endl;
            break;

        case 4: {
            cout << "\n--- Determinant Calculation ---\n";

            if (matrix.getRows() != matrix.getCols()) {
                cout << ">> Matrix is NOT square.\n";
                cout << ">> Determinant cannot be calculated.\n";
            }
            else {
                cout << ">> Determinant = "
                    << matrix.determinant() << endl;
            }
            break;
        }

        case 5:
            cout << "\n>> Spectral Norm = "
                << matrix.spectralNorm() << endl;
            break;

        case 0:
            cout << "\n=====================================\n";
            cout << "        Program Terminated           \n";
            cout << "=====================================\n";
            break;

        default:
            cout << "\n>> Invalid choice! Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}