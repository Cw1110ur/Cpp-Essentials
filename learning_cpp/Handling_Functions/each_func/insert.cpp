/*
   Demonstrates insert().
   Real problem: Insert comma into a large number.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string num = "1000000";
    num.insert(1, ",");

    cout << "Formatted number: " << num << endl;
    return 0;
}

