#include <iostream>
using std::cout, std::endl;

int main() {
	int x = 42;
	int y = 1;
	int* p = &x;
	//p = &y; - this works too
	//*p = nullptr; - this sets address to null
	if (p = nullptr) {
		cout << "p points to nothing" << endl;
	}

	cout << "x = " << x << endl;
	cout << "p = " << p << endl;
	cout << "p* = " << *p << "\n" << endl;
	
	*p = 55;
	cout << "x = " << x << endl;
        cout << "p = " << p << endl;
        cout << "p* = " << *p << endl;

	return 0;
}
