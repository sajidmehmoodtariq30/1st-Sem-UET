#include <iostream>

using namespace std;

int main() {
    char choice;
    int n, previous, count = 0;
    bool isAscending = true;

    cout << "Do you want to enter a number? (Y/N): ";
    cin >> choice;

    while (choice == 'Y' || choice == 'y') {
        cout << "Enter a number: ";
        cin >> n;

        if (count > 0 && n < previous) {
            isAscending = false;
        }

        previous = n;  // Update the previous number
        count++;  // Increment count to track how many numbers have been entered

        cout << "Do you want to enter another number? (Y/N): ";
        cin >> choice;
    }

    if (count > 1) {
        if (isAscending) {
            cout << "The numbers are in ascending order." << endl;
        } else {
            cout << "The numbers are not in ascending order." << endl;
        }
    } else if (count == 1) {
        cout << "Only one number was entered." << endl;
    } else {
        cout << "No numbers were entered." << endl;
    }

    return 0;
}