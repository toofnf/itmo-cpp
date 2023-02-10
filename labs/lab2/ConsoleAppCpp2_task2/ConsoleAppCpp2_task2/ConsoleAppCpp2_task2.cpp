#include <iostream>
#include<cmath>
#include <math.h>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	system("chcp 1251");

	int a, b, c;
	cout << "Введите три числа: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	if ((a >= b) && (a >= c))
	{
		cout << "Наибольшим из этих чисел является " << a << endl;
	}
	else if ((b >= a) && (b >= c))
	{
		cout << "Наибольшим из этих чисел является " << b << endl;
	}
	else if ((c >= a) && (c >= b))
	{
		cout << "Наибольшим из этих чисел является " << c << endl;
	}

	return 0;
}