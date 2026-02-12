#include <iostream>
#include "integer_utils.hpp"
#include "string_utils.hpp"
#include "grade_utils.hpp"
using std::cout, std::cin, std::endl;

int main() {
	int choice;
	cout << "1) Integer operations\n2) Character arrays and C-style strings\n3) Grade evaluation\n4) While-loop counting\n5) Do-while and range-based for counting\n6) Quit" << endl;
	cin >> choice;
	switch(choice) {
		case 1:
			Integer_utils::runIntegerOption();
			break;

		case 2:
			if (String_utils::runStringOption() == false) {
			       	return 0;
			}
			break;
		case 3:
			if (Grade_utils::calculateGrade() == false) {
				return 0;
			}
			break;
	}
	
}
