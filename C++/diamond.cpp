// Standard Libraries
#include <iostream>

// Namespace Declaration
using namespace std;

// Main Function
int main() {
    // Variable declarations
    int rows;
    cout << "Enter no. of rows: ";
    cin >> rows;

  
    for (int i = 1; i <= rows; i++) {
        for (int j = i; j < rows; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = rows - 1; i >= 1; i--) {
        for (int j = i; j < rows; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Exiting the program
    return 0;
}