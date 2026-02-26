#include <iostream>
using std::cout, std::endl;

int main() {
	int arr[5] = {10, 20, 30, 40, 50};
	int* p = arr; // this points to arr[0]
	cout << "p = " << p << endl; // address of arr[0]
	cout << "*p = " << *p << endl; // arr[0]
	cout << "*(p+1) = " << *(p + 1) << endl; // arr[1]
	cout << "*(p+2) = " << *(p + 2) << endl; // arr[2]
	cout << "*(p+3) = " << *(p + 3) << endl; // arr[3]
	cout << "*(p+4) = " << *(p + 4) << endl; // arr[4]
	cout << "*(p+5) = " << *(p + 5) << "     // Array only goes to arr[4]" << endl; // arr[5] DNE 
	
	int* c = arr + 1;
	cout << "\n*p = arr + 1" << endl;
	cout << "*(p-1) = " << *(c - 1) << endl;
	return 0;
}
