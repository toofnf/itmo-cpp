#include <iostream>
#include<cmath>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	system("chcp 1251");

	int a, b, temp; 
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	while (a != b)
	{
		if (a > b)
			a -= b; // аналогично выражению a = a - b
		else
			b -= a;
	}

	cout << "НОД = " << a << endl;

	return 0;
}