#include "point.hpp"
#include "rectangle.hpp"
#include <iostream>
using std::endl, std::cout;

int main() {
    // create Rectangle on heap at (10,20) width=100 height=100
    Rectangle* p = new Rectangle(10, 20, 100, 100);

    // print before modifying corner
    cout << "Before: " << *p << endl;

    // create a new Point at (42, 42)
    Point p1(42, 42);

    // get pointer to corner and overwrite it with p1
    *(p->getCorner()) = p1;

    // print after modifying corner
    cout << "After: " << *p << endl;

    // manually free heap memory
    delete p;

    return 0;
}
