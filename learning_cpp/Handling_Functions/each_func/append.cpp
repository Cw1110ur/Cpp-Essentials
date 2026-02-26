/*
   Demonstrates append().
   Real problem: Build a file path.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string path = "/home/user";
    path.append("/documents");

    cout << "Path: " << path << endl;
    return 0;
}

