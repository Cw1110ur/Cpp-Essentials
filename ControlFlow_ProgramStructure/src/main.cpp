#include <iostream>
#include "integer_utils.hpp"
#include "string_utils.hpp"
#include "grade_utils.hpp"
#include "while_count_utils.hpp"
#include "do_while_count_utils.hpp"
using std::cout, std::cin, std::endl;

int main() {
    int choice;

    do {
        cout << "1. Integer operations\n2. Character arrays and C-style strings\n3. Grade evaluation\n4. While-loop counting\n5. Do-while and range-based for counting\n6. Quit" << endl;
        cin >> choice;

        switch(choice) {
            case 1:
                Integer_utils::runIntegerOption();
                break;

            case 2:
                if (String_utils::runStringOption() != 0) {
                    return 1;
                }
                break;

            case 3:
                if (Grade_utils::calculateGrade() != 0) {
                    return 1;
                }
                break;

            case 4:
                while_count_utils::runWhileCount();
                break;

            case 5:
                do_while_count_utils::runDoWhileCount();
                break;

            case 6:
                cout << "Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice, try again.\n" << endl;
                break;
        }
    } while (choice != 6);

    return 0;
}
