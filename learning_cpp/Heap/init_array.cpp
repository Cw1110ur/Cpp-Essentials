#include <iostream>

int main() {
	int* arr = new int[5]{}; // initializes array with all 0's
	int* end = arr + 5;

	for (int* p = arr; p < end; ++p) {
		*p = *p + 1;
		std::cout << *p << std::endl;
	}
	delete[] arr;
	return 0;
}
