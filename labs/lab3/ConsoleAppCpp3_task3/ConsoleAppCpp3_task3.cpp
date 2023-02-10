#include <iostream>
#include<cmath>
#include <math.h>
#include <iomanip>
#include <ctime>
using namespace std;

double square(double a)
{
	return(a * a / 4 * sqrt(3));
}

double square(double a, double b, double c)
{
	return(sqrt((a + b + c) * (-a + b + c) * (a - b + c) * (a + b - c)) / 4);
}

int main()
{
	system("chcp 1251");

	int triangle;
	cout << "Введите количество равных сторон в треугольнике." << endl;
	cin >> triangle;

	if (triangle == 3)
	{
		double a;
		cin >> a;
		cout << "Площадь равностороннего треугольника со стороной " << a << " равна " << square(a);
	}
	else 
	{
		double a;
		cin >> a;
		double b;
		cin >> b;
		double c;
		cin >> c;
		cout << "Площадь треугольника со сторонами " << a << ", " << b << ", " << c << " равна " << square(a, b, c);
	}

	return 0;
}