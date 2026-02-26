#include <iostream>
using std::cout, std::endl;

int main() {
	int* p = new int(42); // put p on heap NOT STACK
	cout << *p << endl;
	delete p; // Delete from stack
	return 0;
	// need "new" to specify its added to the heap
}	// Need to delete after, otherwise it will not get
	// removed from the heap
