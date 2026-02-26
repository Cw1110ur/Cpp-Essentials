/*
   Demonstrates toupper() and tolower().
   Real problem: Convert letter grade to lowercase and show numeric range.
*/

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char g;
    cout << "Enter letter grade (A–F): ";
    cin >> g;

    g = tolower(g);

    if (g == 'a') cout << "Range: 96–93\n";
    else if (g == 'b') cout << "Range: 92–85\n";
    else if (g == 'c') cout << "Range: 84–75\n";
    else if (g == 'd') cout << "Range: 74–65\n";
    else if (g == 'f') cout << "Range: 64–0\n";
    else cout << "Invalid grade\n";

    return 0;
}

