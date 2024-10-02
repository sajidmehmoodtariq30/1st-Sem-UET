#include <iostream>
using namespace std;

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    // Input the number from the user
    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;  // Store the original number for later comparison

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;           // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Append it to the reversed number
        num /= 10;                      // Remove the last digit from the original number
    }

    // Check if the original number and the reversed number are the same
    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome." << endl;
    }
    else {
        cout << originalNum << " is not a palindrome." << endl;
    }

    return 0;
}