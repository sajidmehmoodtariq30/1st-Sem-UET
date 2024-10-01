#include <iostream>
using namespace std;

int main()
{
    int n, counter = 0, largest = 0, smallest = 0,sum = 0,pcount = 0, ncount = 0;
    char choice;
    
    cout << "Press y if you want to continue:\n";
    cin >> choice;
    while (choice == 'y' || choice == 'Y')
    {

        // geting input form user
        cout << "Enter the number:\n";
        cin >> n;

        cout << "Press y if you want to continue:\n";
        cin >> choice;

        // counting no of values
        counter++;

        // changing smallest value
        if (counter == 1)
            smallest = n;
        

        //finding largest value
        if (largest < n)
            largest = n;

        // finding smallest value
        if (smallest > n)
            smallest = n;

        // finding number of positive values
        if (n > 0)
            pcount++;

        // finding number of negative values
        if (n < 0)
            ncount++;

        // finding sum of all the entered numbers
        sum += n;
    }
    cout << counter << " values are entered\n";
    cout << largest << " is the largest value\n";
    cout << smallest << " is the smallest value\n";
    cout << sum << " is the sum of all values\n";
    cout << pcount << " are the number of positive values\n";
    cout << ncount << " are the number of negative value\n";
}

