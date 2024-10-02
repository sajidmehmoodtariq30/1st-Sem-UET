// question no 01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int i = 0, sum = 0, n;
	cout << "Enter the value:";
	cin >> n;
	while (i <= n)
	{
		sum += i;
		i++;
	}
	cout << sum;
}

