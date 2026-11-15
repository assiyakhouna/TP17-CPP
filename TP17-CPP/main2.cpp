
#include <iostream>
#include "Point.h"
#include "Triangle.h"

using namespace std;

int main() {
    Point A(0, 0);
    Point B(3, 0);
    Point C(0, 4);

    Triangle T(A, B, C);

    cout << "Perimetre du triangle = "
         << T.perimetre() << endl;

    return 0;
}
