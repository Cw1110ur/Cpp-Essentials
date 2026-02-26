#include <iostream>

int main() {
	int* arr = new int[5];
	arr[0] = 10;
	arr[1] = 20;
	std::cout << arr[0] << std::endl;
	delete[] arr;
	return 0;
}
