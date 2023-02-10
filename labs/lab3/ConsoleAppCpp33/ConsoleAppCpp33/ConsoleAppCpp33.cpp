﻿#include <iostream>
#include<cmath>
#include <math.h>
#include <iomanip>
#include <ctime>
using namespace std;

long double firBinSearch(double a, int n)
{
	double L = 0;
	double R = a;
	while (R - L > 1e-10)
	{
		double M = (L + R) / 2;
		if (pow(M, n) < a)
		{
			L = M;
		}
		else
		{
			R = M;
		}
	}
	return R;
}

int main()
{
	system("chcp 1251");

	double a;
	cout << "Введите число a: ";
	cin >> a;

	int n;
	cout << "Введите число n: ";
	cin >> n;

	cout << firBinSearch(a, n);

	return 0;
}