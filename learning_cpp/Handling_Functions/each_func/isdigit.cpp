/*
   Demonstrates isdigit().
   Real problem: Validate a 5-digit ZIP code.
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string zip;
    cout << "Enter ZIP code: ";
    cin >> zip;

    bool valid = (zip.length() == 5);
    for (char c : zip)
        if (!isdigit(c)) valid = false;

    cout << (valid ? "Valid ZIP" : "Invalid ZIP") << endl;
    return 0;
}

