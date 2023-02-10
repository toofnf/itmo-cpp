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

	do
	{
		if (a > b)
			a -= b; // аналогично выражению a = a - b
		else if (a < b)
			b -= a;
	} while (a != b);

	cout << "НОД = " << a << endl;

	return 0;
}