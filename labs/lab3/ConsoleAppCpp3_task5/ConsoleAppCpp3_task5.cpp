#include <iostream>
#include<cmath>
#include <math.h>
#include <iomanip>
#include <ctime>
using namespace std;

string dec2bin(int n)
{
	if (n == 1)
	{
		return("1");
	}
	else
	{
		if (n % 2 == 0)
		{
			return(dec2bin(n / 2) + "0");
		}
		else
		{
			return(dec2bin(n / 2) + "1");
		}
	}
}

int main()
{
	system("chcp 1251");

	int n;
	cin >> n;
	cout << dec2bin(n);

	return 0;
}