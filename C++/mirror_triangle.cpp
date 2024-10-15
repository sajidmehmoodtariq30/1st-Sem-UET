#include <iostream>

int main() {
    int rows = 4;

    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }
        // Print asterisks
        for (int j = 0; j < rows - i; j++) {
            std::cout << "*";
        }
        // Move to the next line after each row
        std::cout << std::endl;
    }

    return 0;
}