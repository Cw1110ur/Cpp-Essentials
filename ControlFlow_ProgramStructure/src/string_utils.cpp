#include <iostream>
#include "string_utils.hpp"
using std::cin, std::cout, std::endl;

namespace String_utils {
    bool runStringOption() {
        int num;
        cout << "Enter string length: ";
        cin >> num;

        if (num > 19 || num < 1) {
            cout << "Error: 20" << endl;
            return 1;
        }

        cin.ignore();
        cout << "Enter string: ";
        std::string string1;
        std::getline(cin, string1);

        char A[21] = {0};
        for (int i = 0; i < num; i++) {
            A[i] = string1[i];
        }

        cout << "C-style string: " << A << endl;
        return 0;
    }
}
