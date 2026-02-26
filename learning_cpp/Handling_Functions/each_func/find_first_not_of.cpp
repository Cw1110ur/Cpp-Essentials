/*
   Demonstrates find_first_not_of().
   Real problem: Trim leading spaces.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "     hello world";

    cout << "Original: [" << s << "]" << endl;
    size_t start = s.find_first_not_of(" ");
    if (start != string::npos)
        s = s.substr(start);

    cout << "Trimmed: [" << s << "]" << endl;
    return 0;
}

