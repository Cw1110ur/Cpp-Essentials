#include <iostream>
#include "point.hpp"
#include "vector2d.hpp"
using std::cout, std::endl;

int main() {
    // create two points
    Point p1(1, 2);
    Point p2(3, 4);

    // create two vectors
    Vector2D v1(1, 1);
    Vector2D v2(2, 2);

    // test point ==
    if (p1 == p2) {
        cout << "points are equal" << endl;
    } else {
        cout << "points are not equal" << endl;
    }

    // test operator<< on point and vector
    cout << p1 << endl;
    cout << v1 << endl;

    // test operator+ — creates a new Vector2D
    Vector2D v3 = v1 + v2;
    cout << v3 << endl;

    // test apply — moves p1 by v1
    v1.apply(&p1);
    cout << p1 << endl;

    // test vector ==
    if (v1 == v2) {
        cout << "vectors are equal" << endl;
    } else {
        cout << "vectors are not equal" << endl;
    }
}
