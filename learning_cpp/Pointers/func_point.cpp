#include <iostream>
using std::cout, std::endl;

void set_to_zero_ptr(int* p) {
	*p = 0;
}

void set_to_zero_value(int x) {
	x = 0;
}

int main() {
	int x = 100;
	int* p = &x;
	set_to_zero_value(x);
	cout << x << endl;
	set_to_zero_ptr(p);
	cout << x << endl;
	return 0;
}
