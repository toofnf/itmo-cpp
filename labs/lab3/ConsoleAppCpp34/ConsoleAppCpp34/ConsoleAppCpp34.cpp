#include <iostream>
#include<cmath>
#include <math.h>
#include <iomanip>
#include <ctime>
using namespace std;

int addNumders(int n)
{
	if (n == 1) return 1; // выход из рекурсии
	else return (n + addNumders(n - 1));
}

int addNumders(int n, int m)
{
	if (n >= m)
	{
		if (n == m) return m; // выход из рекурсии
		else return (n + addNumders(n - 1));
	}
	else
	{
		return (m + addNumders(m - 1));
	}
}

int gcd(int m, int n)
{
	if (n == 0) return m;
	return gcd(n, m % n);
}

int main()
{
	system("chcp 1251");

	int n;
	cout << "Введите число n: ";
	cin >> n;

	int m;
	cout << "Введите число m: ";
	cin >> m;

	cout << gcd(m, n);

	return 0;
}