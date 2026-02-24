#include <iostream>
#include <string>
#include <cctype>
using std::string, std::endl, std::cout, std::cin;

namespace text_mode {
        void run(int argc, char* argv[]) {
                string cstring(argv[2]);
		cout << "Converted: " << cstring << endl;
		cout << "Original: " << argv[2] << endl;
		cout << cstring.size() << endl;

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
		
		cout << "Letters: " << letters << endl;
		cout << "Digits: " << digits << endl;
		cout << "Spaces: " << spaces << endl;
		cout << "Punctuations: " << puncts << endl;

		string upper = cstring;
		for (char& c : upper) {
			if (std::isalpha(c)) {
				c = std::toupper(c);
			}
		}
		cout << upper << endl;
		
		string lower = cstring;
		for (char& c : lower) {
			if (std::isalpha(c)) {
				c = std::tolower(c);
			}
		}
		cout << lower << endl;

		if (cstring.find("test") != string::npos) {
			cout << "Found test" << endl;
		}
		else {
			cout << "Did not find test" << endl;
		}

		size_t pos = cstring.find(" ");
		if (pos != string::npos) {
			cout << cstring.substr(0, pos) << endl;
		}
	}
}

