#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;

    cout << "Enter a sentence: ";
    getline(cin, text);

    // Find first vowel
    size_t firstVowel = text.find_first_of("aeiouAEIOU");

    if (firstVowel != string::npos)
        cout << "First vowel at index: " << firstVowel << endl;
    else
        cout << "No vowels found\n";

    // Find last vowel
    size_t lastVowel = text.find_last_of("aeiouAEIOU");

    if (lastVowel != string::npos)
        cout << "Last vowel at index: " << lastVowel << endl;

    // Replace first occurrence of "cat" with "dog"
    size_t pos = text.find("cat");
    if (pos != string::npos)
        text.replace(pos, 3, "dog");

    cout << "After replacement: " << text << endl;

    // Trim leading spaces
    size_t start = text.find_first_not_of(" ");
    if (start != string::npos)
        text = text.substr(start);

    cout << "After trimming front spaces: " << text << endl;

    return 0;
}
