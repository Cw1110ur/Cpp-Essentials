#include <iostream>
using std::cout, std::endl;

int main() {
	int x = 42;
	int* p = nullptr;
	if (p == nullptr) {
		cout << "Points to nada" << endl;
	}
	return 0;
}
