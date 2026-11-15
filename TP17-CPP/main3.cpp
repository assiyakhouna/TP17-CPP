
#include <iostream>
#include "Matrix.h"

using namespace std;

int main() {

    // Matrices 2x2 de type int
    Matrix<int, 2, 2> A;
    Matrix<int, 2, 2> B;

    A.at(0, 0) = 1;
    A.at(0, 1) = 2;
    A.at(1, 0) = 3;
    A.at(1, 1) = 4;

    B.at(0, 0) = 5;
    B.at(0, 1) = 6;
    B.at(1, 0) = 7;
    B.at(1, 1) = 8;

    cout << "Matrice A :" << endl << A;
    cout << "Matrice B :" << endl << B;

    cout << "A + B :" << endl << A + B;
    cout << "A * B :" << endl << A * B;

    // Matrices 3x3 de type double
    Matrix<double, 3, 3> C;
    Matrix<double, 3, 3> D;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C.at(i, j) = i + j + 1;
            D.at(i, j) = i + j + 2;
        }
    }

    cout << "Matrice C :" << endl << C;
    cout << "C + D :" << endl << C + D;
    cout << "C * D :" << endl << C * D;

    return 0;
}
