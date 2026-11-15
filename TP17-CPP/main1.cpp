
#include <iostream>
#include "Point3D.h"

using namespace std;

int main() {

    // Creation de deux points
    Point3D p1(2.5, 3.5, 4.5);
    Point3D p2(10, 20, 30);

    // Affichage du premier point
    cout << "===== POINT 1 =====" << endl;
    cout << "X = " << p1.getX() << endl;
    cout << "Y = " << p1.getY() << endl;
    cout << "Z = " << p1.getZ() << endl;

    // Affichage du deuxieme point
    cout << "\n===== POINT 2 =====" << endl;
    cout << "X = " << p2.getX() << endl;
    cout << "Y = " << p2.getY() << endl;
    cout << "Z = " << p2.getZ() << endl;

    return 0;
}
