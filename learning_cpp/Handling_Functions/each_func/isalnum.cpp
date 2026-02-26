/*
   Demonstrates isalnum().
   Real problem: Validate a username (letters + digits only).
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string user;
    cout << "Enter username: ";
    cin >> user;

    bool valid = true;
    for (char c : user)
        if (!isalnum(c)) valid = false;

    cout << (valid ? "Valid username" : "Invalid username") << endl;
    return 0;
}

