#include <iostream>
#include "while_count_utils.hpp"

namespace while_count_utils {
	void runWhileCount() {
		int target;
		std::cout << "Enter a number to count to: ";
		std::cin >> target;

		while (target > 10) {
			std::cout << "I'm programmed to only count up to 10!" << std::endl;
			std::cout << "Enter a number to count to: ";
			std::cin >> target;
		}
		int count = 1;
		while (count <= target) {
        		if (count != 5) {
            		std::cout << count << std::endl;
        	}
        	count++;
    		}
	}
}
