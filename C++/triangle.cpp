// Standard Libraries
#include <iostream>

// Namespace Declaration
using namespace std;

// Main Function
int main() {
    // Variable declarations
    int rows,cols;
    cout << "Enter no. of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
            cout  << "* ";
        cout  << endl;
    }
    
    // Exiting the program
    return 0;
}