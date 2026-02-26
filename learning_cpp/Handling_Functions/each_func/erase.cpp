/*
   Demonstrates erase().
   Real problem: Remove dashes from phone number.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string phone = "860-555-1234";

    phone.erase(3, 1);
    phone.erase(6, 1);

    cout << "Digits only: " << phone << endl;
    return 0;
}

