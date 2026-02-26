/*
   Demonstrates isxdigit().
   Real problem: Validate a 6-digit hex color code (RRGGBB).
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string hex;
    cout << "Enter hex color (6 digits): ";
    cin >> hex;

    bool valid = (hex.length() == 6);
    for (char c : hex)
        if (!isxdigit(c)) valid = false;

    cout << (valid ? "Valid hex color" : "Invalid hex color") << endl;
    return 0;
}

