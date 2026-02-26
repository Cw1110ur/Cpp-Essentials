#include <iostream>
using std::cout, std::endl;

int main() {
	int arr[5] = {10, 20, 30, 40, 50};
	int* end = arr + 5;
	for(int* p = arr; p < end; p++) {
		cout << *p << endl;
	}
	return 0;
}
