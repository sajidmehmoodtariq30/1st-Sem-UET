#include <iostream>
using namespace std;
int main() {
    int rows = 4;

    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Print asterisks
        for (int j = 0; j < rows - i; j++) {
            cout << "*";
        }
        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}