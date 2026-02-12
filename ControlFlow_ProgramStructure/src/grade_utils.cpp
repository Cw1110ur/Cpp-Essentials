#include <iostream>
#include "grade_utils.hpp"
using std::cin, std::cout, std::endl;

namespace Grade_utils {
	double calculateGrade() {
		char letter;
		double grade;
		cout << "Enter student type (U for undergrad, G for grad): "; 
		cin >> letter;
		cout << "Enter numeric grade: ";
		cin >> grade;
		if (grade < 0 || grade > 100) {
			cout << "Invalid Grade\n";
			return false;
		}
		
		if (letter == 'U') {
			if (grade >= 60) {
				cout << "Pass" << endl;
			}
			else {
				cout << "Fail" << endl;
			}
		}
		else if (letter == 'G') {
			if (grade >= 70) {
				cout << "Pass" << endl;
			}
			else {
				cout << "Fail" << endl;
			}
		}
		return grade;
	}
}
	

