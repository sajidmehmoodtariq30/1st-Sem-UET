
// power 

#include <iostream>
using namespace std;

int main()
{
    int i =1, base, power, r=1;
    cout << "Enter base" << endl;
    cin >> base;
    cout << "Enter power" << endl;
    cin >> power;
    while (i <= power)
    {
        r *= base;
        i++;
    }
    cout << r << endl;
    return 0;
}

