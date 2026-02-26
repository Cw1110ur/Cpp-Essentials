#include <iostream>
#include <string>
#include <cctype>
#include "stats_mode.h"
using std::cout, std::string, std::endl;

namespace stats_mode {

	void run(int argc, char* argv[]) {
		if (argc < 3) {
			return;
		}
		
	string estring = argv[2];

	cout << "Length " << estring.size() << endl;

	size_t uchar_count = 0;

	for (size_t i = 0; i < estring.size(); i++) {
		bool first_time = true;
	
		for (size_t j = 0; j < i; j++) {
			if (estring[j] == estring[i]) {
				first_time = false;
				break;
			}
		}
		
		if (first_time) {
        		uchar_count++;
        	}
	}
	cout << "Unique " << uchar_count << endl;

	bool alnum_only = true;
	for (char c : estring) {
		if (!std::isalnum(c)) {
			alnum_only = false;
			break;
		}
	}
	if (alnum_only == true) {
		cout << "Alphanumeric Yes" << endl;
	}
	else {
		cout << "Alphanumeric No" << endl;
	}

	string reverse;
	for (size_t i = 0; i < estring.size(); i++) {
		reverse = estring[i] + reverse;
	}
	cout << "Reversed " << reverse << endl;

	string no_spaces;
	for (char c : estring) {
		if (!std::isspace(c)) {
			no_spaces += c;
		}
	}
	cout << "Without spaces " << no_spaces << endl;

	string lower = no_spaces;
	for (char &c : lower) {
		c = std::tolower(c);
	}

	string lower_rev;
	for (size_t i = 0; i < lower.size(); i++) {
		lower_rev = lower[i] + lower_rev;
	}

	bool palindrome = (lower == lower_rev);
	if (palindrome == true) {
		cout << "Palindrome Yes" << endl;
	}
	else {
		cout << "Palindrome No" << endl;
	}
    }
}
	
