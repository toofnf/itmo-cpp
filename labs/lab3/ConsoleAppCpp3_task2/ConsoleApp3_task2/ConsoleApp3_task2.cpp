#include <iostream>
#include<cmath>
#include <math.h>
#include <iomanip>
#include <ctime>
using namespace std;

double power_basic(double a)
{
	return(pow(a, 1.0 / 3.0));
}

double power(double a)
{
	if (a == 1)
	{
		return(1.0);
	}
	else
	{
		double p = power(a - 1);
		return((a / (p * p) + 2 * p) / 3);
	}
}

int main()
{
	system("chcp 1251");

	double a;
	cout << "Введите число a: ";
	cin >> a;

	cout << "Вычисление с помощью встроенной функции: " << power_basic(a) << endl;
	cout << "Вычисление с помощью итерационной формулы: " << power(a) << endl;
	return 0;
}