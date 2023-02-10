#include <iostream>
#include<cmath>
#include <math.h>
#include <iomanip>
#include <ctime>
using namespace std;

int fives(int n)
{
	if (n == 1)
	{
		return(5);
	}
	else
	{
		return(fives(n - 1) + 5 * n);
	}
}

int main()
{
	system("chcp 1251");

	int n;
	cin >> n;
	cout << fives(n);

	return 0;
}