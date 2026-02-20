#include <iostream>
#include "do_while_count_utils.hpp"

namespace do_while_count_utils {

	void runDoWhileCount() {
	       	int value;
	
		do {
			std::cout << "Enter a number between 1 and 5: ";
			std::cin >> value;
		} while (value < 1 || value > 5);

		int numbers[5] = {1, 2, 3, 4, 5};
	
		for (int num : numbers) {
			std::cout << "Value: " << num << std::endl;
			if (num == value) {
	        		break;
			}
		}
	}
}
