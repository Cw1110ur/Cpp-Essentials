#include <iostream>
#include <string>

#include "text_mode.hpp"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: ./analyzer <mode> [arguments]" << std::endl;
        return 1;
    }

    std::string mode = argv[1];
    int mode_num = 0;

    if (mode == "text") {
        mode_num = 1;
    } else if (mode == "add") {
        mode_num = 2;
    } else if (mode == "stats") {
        mode_num = 3;
    }

    switch (mode_num) {
        case 1:
            text_mode::run(argc, argv);
            break;
        case 2:
            text_mode::run(argc, argv);
            break;
        case 3:
            text_mode::run(argc, argv);
            break;
        default:
            std::cout << "Invalid mode" << std::endl;
            return 1;
    }

    return 0;
}
