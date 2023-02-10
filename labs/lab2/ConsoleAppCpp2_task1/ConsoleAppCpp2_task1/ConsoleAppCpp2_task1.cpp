#include <iostream>
#include<cmath>
#include <math.h>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	system("chcp 1251");

	int x;
	cout << "Введите проверяемое число: ";
	cin >> x;

	int c = 0;

	//Проверим, простое ли x
	int flag_x = 0;

	if ((x == 1) || (x == 0))
	{
		flag_x++;
	}
	else
	{
		for (int i = 2; i <= x; i++)
		{
			if ((i <= x / 2) && (x % i == 0))
			{
				flag_x++;
			}

			// Проверим, простое ли i
			int flag_i = 0;

			for (int j = 2; j <= i / 2; j++)
			{
				if (i % j == 0)
				{
					flag_i++;
				}
			}

			if (flag_i == 0)
			{
				c++;
			}
		}
	}

	//Проверим, простое ли c
	int flag_c = 0;

	if ((c == 1) || (c == 0))
	{
		flag_c++;
	}
	else
	{
		for (int k = 2; k <= c / 2; k++)
		{
			if (c % k == 0)
			{
				flag_c++;
			}
		}
	}

	//Итог
	if ((flag_x == 0) && (flag_c == 0))
	{
		cout << "Число " << x << " - суперпростое." << endl;
	}
	else if (flag_x == 0)
	{
		cout << "Число " << x << " - простое." << endl;
	}
	else
	{
		cout << "Число " << x << " - не простое." << endl;
	}

	return 0;
}
