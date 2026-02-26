#include <iostream>
#include <string>
#include <cctype>
#include "text_mode.h"
using std::string, std::endl, std::cout, std::cin;

namespace text_mode {
        void run(int argc, char* argv[]) {
                if (argc < 3) { 
			cout << "Usage" << endl; 
			return; 
		}
		
		string cstring(argv[2]);
		cout << "Original " << argv[2] << endl;
		//cout << "Converted " << cstring << endl;
		cout << "Length " << cstring.size() << endl;

		size_t letters = 0;
		size_t digits = 0;
		size_t spaces = 0;
		size_t puncts = 0;

		for (char c : cstring) {
			if (std::isalpha(c)) {
				letters++;
			}
			else if (std::isdigit(c)) {
				digits++;
			}
			else if (std::isspace(c)) {
				spaces++;
			}
			else if (std::ispunct(c)) {
				puncts++;
			}
		}
		
		cout << "Letters " << letters << endl;
		cout << "Digits " << digits << endl;
		cout << "Spaces " << spaces << endl;
		cout << "Punctuation " << puncts << endl;

		string upper = cstring;
		for (size_t i = 0; i < upper.size(); i++) { 
			if (std::isalpha(upper[i])) { 
				upper[i] = std::toupper(upper[i]); 
			} 
		} 
		cout << "Uppercase " << upper << endl;
		
		string lower = cstring; 
		for (size_t i = 0; i < lower.size(); i++) { 
			if (std::isalpha(lower[i])) { 
				lower[i] = std::tolower(lower[i]); 
			} 
		} 
		cout << "Lowercase " << lower << endl;

		if (lower.find("test") != string::npos) {
			cout << "Contains test Yes" << endl;
		}
		else {
			cout << "Contains test No" << endl;
		}

		size_t pos = cstring.find(" ");
		if (pos != string::npos) {
			cout << "First word " << cstring.substr(0, pos) << endl;
		}
	}
}

