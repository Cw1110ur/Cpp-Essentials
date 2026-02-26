/*
   Demonstrates replace().
   Real problem: Censor a bad word.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string msg = "This is stupid!";
    cout << "Original: " << msg << endl;
    size_t pos = msg.find("stupid");

    if (pos != string::npos)
        msg.replace(pos, 6, "******");

    cout << "Censored: " << msg << endl;
    return 0;
}

