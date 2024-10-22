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
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= i; j--)
            cout  << "* ";
        cout  << endl;
    }
    
    
    // Exiting the program
    return 0;
}