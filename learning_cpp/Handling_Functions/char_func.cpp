#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);

    int digits = 0;
    int letters = 0;
    int lowercase = 0;
    int uppercase = 0;
    int spaces = 0;
    int punctuation = 0;
    int alnum = 0;
    int hexCount = 0;

    for (int i = 0; i < input.length(); i++)
    {
        char c = input[i];

        if (isdigit(c))
            digits++;

        if (isalpha(c))
            letters++;

        if (isalnum(c))
            alnum++;

        if (islower(c))
            lowercase++;

        if (isupper(c))
            uppercase++;

        if (isspace(c))
            spaces++;

        if (ispunct(c))
            punctuation++;

        if (isxdigit(c))
            hexCount++;
    }

    cout << "\nAnalysis:\n";
    cout << "Digits: " << digits << endl;
    cout << "Letters: " << letters << endl;
    cout << "Alphanumeric: " << alnum << endl;
    cout << "Lowercase: " << lowercase << endl;
    cout << "Uppercase: " << uppercase << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Punctuation: " << punctuation << endl;
    cout << "Hex digits: " << hexCount << endl;

    // Demonstrating conversion
    cout << "\nUppercase version:\n";
    for (int i = 0; i < input.length(); i++)
        cout << (char)toupper(input[i]);

    cout << "\n\nLowercase version:\n";
    for (int i = 0; i < input.length(); i++)
        cout << (char)tolower(input[i]);

    return 0;
}
