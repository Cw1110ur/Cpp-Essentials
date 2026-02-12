#include <iostream>
#include "string_utils.hpp"
using std::cin, std::cout, std::endl;

namespace String_utils {
	bool runStringOption() {
		int num;
		cout << "Enter string length: ";
		cin >> num;
		if (num >= 20) {
			cout << "Error, Integer too long... " << endl;
			return false;
		}
		cin.ignore();
		cout << "Enter string: ";
		std::string string1;
		std::getline(std::cin, string1);
		char A[20];
		for (int i = 0; i < 20; i++) {
			A[i] = string1[i];
		}
		A[num] = '\0';
		
		cout << "C-style string: " << A << endl;
		return true;
	}
}
