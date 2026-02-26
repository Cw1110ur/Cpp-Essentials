/*
   Demonstrates find_last_of().
   Real problem: Find last vowel in a sentence.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    size_t pos = s.find_last_of("aeiouAEIOU");

    if (pos != string::npos)
        cout << "Last vowel at index: " << pos << endl;
    else
        cout << "No vowels found" << endl;

    return 0;
}

