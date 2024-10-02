#include <iostream>
using namespace std;

int main()
{
    int n,limit,i=1;
    cout << "Enter the number whose table is expected: ";
    cin >> n;
    cout << "Enter limit: ";
    cin >> limit;
    while (i <= limit)
    {
        cout << n << "*" << i << "=" << n * i << endl;
        i++;
    }
}
