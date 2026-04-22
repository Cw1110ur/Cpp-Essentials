#include <iostream>
#include <string>
using std::cout, std::endl;

class Box {
private:
    double* width;
    double* height;
    double* depth;

public:
    // fill in the constructor here
    // it should take three doubles w, h, d
    // and allocate them on the heap
    Box(double w, double h, double d) {
	width = new double(w);
	height = new double(h);
	depth = new double(d);
	cout << "Box created" << endl;
    }

    // fill in the destructor here
    // it should delete all three pointers
    ~Box() {
	delete width;
	delete height;
	delete depth;
	cout << "Box destroyed" << endl;
    }

    double getWidth() { return *width; }
    double getHeight() { return *height; }
    double getDepth() { return *depth; }
    double getVolume() { return *height * *width * *depth; }

    void resize(double w, double h, double d) {
	    cout << "Box resized to (" << w << ", "
	    	 << h << ", " << d << ")" << endl;
	    *width = w;
	    *height = h;
	    *depth = d;
    }

    void print() {
	    cout << "Box(" << *width << ", "
		    << *height << ", "
		    << *depth << ")" << endl;
    }

    bool isLargerThan(Box* other) {
	    return getVolume() > other -> getVolume();
    }

    bool isEqual(Box* other) {
	    if (getWidth() == other -> getWidth() &&
		getHeight() == other -> getHeight() &&
		getDepth() == other -> getDepth()) {
		    return true;
	    }
	    return false;
    }

    void reset() {
	    *height = *width = *depth = 1;
    }  
};
    
int main() {
    Box b(2, 3, 4);
    b.print();
    cout << "Volume: " << b.getVolume() << endl;
};
