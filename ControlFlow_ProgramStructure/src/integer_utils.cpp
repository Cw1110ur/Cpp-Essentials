#include <iostream>
#include "integer_utils.hpp"

namespace Integer_utils {
	void runIntegerOption() {
		int first;
		int second;
		std::cout << "Enter first integer: ";
		std::cin >> first;
		std::cout << "Enter second integer: ";
		std::cin >> second;
		if (second == 0) {
			std::cout << "Error: division by zero" << std::endl;
			return;	
		}
		int quotient = first / second;
		std::cout << "Result: " << quotient << "\n"  << std::endl;

		// Below are the increments post and pre
		int post = first;
		int pre = first;
		std::cout << "After post-increment: " << post++ << std::endl;
		std::cout << "After pre-increment: " << ++pre << std::endl;
		return;
		
	}
}
