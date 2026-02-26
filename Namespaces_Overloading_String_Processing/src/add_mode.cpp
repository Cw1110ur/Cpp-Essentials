#include <iostream>
#include <string>
#include <cctype>
#include "add_mode.h"
using std::cout, std::string, std::endl, std::cin;

namespace add_mode {

	int add(int a, int b) {
      		return a + b;
    	}

    	double add(double a, double b) {
        	return a + b;
    	}

    	string add(string a, string b) {
        	return a + b;
    	}

	void run(int argc, char* argv[]) {
		if (argc < 4) {
            		return;
		}

		string a = argv[2];
		string b = argv[3];

		bool a_all_dig = true;
		for (char c : a) {
			if (!std::isdigit(c)) {
				a_all_dig = false;
				break;
			}
		}

		bool b_all_dig = true;
		for (char c : b) {
			if (!std::isdigit(c)) {
				b_all_dig = false;	
				break;
			}
       		}

	        if (a_all_dig && b_all_dig) {
			int x = std::stoi(a);
			int y = std::stoi(b);
			std::cout << "Result: " << add(x, y) << "\n";
			return;
		}

		if (a.find('.') != string::npos || b.find('.') != string::npos) {
			double x = std::stod(a);
			double y = std::stod(b);
			cout << "Result: " << std::to_string(add(x, y)) << endl;
			return;
        	}

		cout << "Result: " << add(a, b) << endl;
	}
}

