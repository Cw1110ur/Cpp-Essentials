/*
   Demonstrates isalpha(), isspace(), ispunct().
   Real problem: Count letters, spaces, and punctuation in a sentence.
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    int letters = 0, spaces = 0, punct = 0;

    for (char c : s) {
        if (isalpha(c)) letters++;
        if (isspace(c)) spaces++;
        if (ispunct(c)) punct++;
    }

    cout << "Letters: " << letters << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Punctuation: " << punct << endl;
    return 0;
}

