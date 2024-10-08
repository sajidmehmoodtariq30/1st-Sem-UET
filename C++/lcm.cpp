#include <iostream>

using namespace std;

int main() {
    char choice;
    int n, result, count = 0;

    cout << "Do you want to enter a number? (Y/N): ";
    cin >> choice;

    while (choice == 'Y' || choice == 'y') {
        cout << "Enter a number: ";
        cin >> n;

        if (count == 0) {
            // First number becomes the initial result
            result = n;
        } else {
            // Calculate GCD in-line
            int a = result;
            int b = n;
            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
            }
            int gcd = a;

            // Calculate LCM using the formula: LCM(a, b) = (a * b) / GCD(a, b)
            result = (result * n) / gcd;
        }

        count++;  // Increment the count of numbers entered

        cout << "Do you want to enter another number? (Y/N): ";
        cin >> choice;
    }

    if (count > 1) {
        cout << "The LCM of the entered numbers is: " << result << endl;
    } else if (count == 1) {
        cout << "Only one number was entered. LCM is: " << result << endl;
    } else {
        cout << "No numbers were entered." << endl;
    }

    return 0;
}