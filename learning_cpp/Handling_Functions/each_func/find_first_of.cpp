/*
   Demonstrates find_first_of().
   Real problem: Find first vowel in a sentence.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    size_t pos = s.find_first_of("aeiouAEIOU");

    if (pos != string::npos)
        cout << "First vowel at index: " << pos << endl;
    else
        cout << "No vowels found" << endl;

    return 0;
}

