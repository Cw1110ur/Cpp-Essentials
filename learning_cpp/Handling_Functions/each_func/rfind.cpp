/*
   Demonstrates rfind().
   Real problem: Find last occurrence of a word.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string text, word;
    cout << "Enter a sentence: ";
    getline(cin, text);

    cout << "Enter word to search: ";
    cin >> word;

    size_t pos = text.rfind(word);

    if (pos != string::npos)
        cout << "Last occurrence at index: " << pos << endl;
    else
        cout << "Not found" << endl;

    return 0;
}

