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
			cout << "Invalid grade" << endl;
			return 1;
		}
		
		if (letter == 'U' || letter == 'u') {
			if (grade >= 60) {
				cout << "Status: Pass" << endl;
			}
			else {
				cout << "Status: Fail" << endl;
			}
		}
		else if (letter == 'G' || letter == 'g') {
			if (grade >= 70) {
				cout << "Status: Pass" << endl;
			}
			else {
				cout << "Status: Fail" << endl;
			}
		}
		return 0;
	}
}
	

