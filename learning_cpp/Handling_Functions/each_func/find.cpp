/*
   Demonstrates find().
   Real problem: Search for a word in a sentence.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string text, word;
    cout << "Enter a sentence: ";
    getline(cin, text);

    cout << "Enter word to find: ";
    cin >> word;

    size_t pos = text.find(word);

    if (pos != string::npos)
        cout << "Found at index: " << pos << endl;
    else
        cout << "Not found" << endl;

    return 0;
}

