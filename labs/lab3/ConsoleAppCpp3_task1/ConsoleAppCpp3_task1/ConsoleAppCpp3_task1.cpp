#include <iostream>
#include<cmath>
#include <math.h>
#include <iomanip>
#include <ctime>
using namespace std;

double length(double x1, double y1, double x2, double y2)
{
	return(sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
}

double square(double l1, double l2, double l3)
{
	double p = (l1 + l2 + l3) / 2;
	return(sqrt(p * (p - l1) * (p - l2) * (p - l3)));
}

int main()
{
	system("chcp 1251");

	double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5;
	cout << "Введите координаты пятиугольника (в порядке обхода фигуры): ";
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;
	cin >> x3;
	cin >> y3;
	cin >> x4;
	cin >> y4;
	cin >> x5;
	cin >> y5;

	double triangle1 = square(length(x1, y1, x2, y2), length(x1, y1, x3, y3), length(x2, y2, x3, y3));
	double triangle2 = square(length(x1, y1, x3, y3), length(x1, y1, x4, y4), length(x4, y4, x3, y3));
	double triangle3 = square(length(x1, y1, x4, y4), length(x1, y1, x5, y5), length(x4, y4, x5, y5));

	double pentagon = triangle1 + triangle2 + triangle3;

	cout << pentagon;
	return 0;
}