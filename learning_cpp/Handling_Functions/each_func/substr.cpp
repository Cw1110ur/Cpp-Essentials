/*
   Demonstrates substr().
   Real problem: Extract area code from phone number.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string phone = "860-555-1234";
    cout << "Phone Number: " << phone << endl;
    string area = phone.substr(0, 3);

    cout << "Area code: " << area << endl;
    return 0;
}

