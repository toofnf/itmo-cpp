#include <iostream>
#include<cmath>
#include <math.h>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	system("chcp 1251");
	int k, m, s;

	cin >> k;
	cin >> m;
	s = 0;

	for (int i = 1; i <= 100; i++)
	{
		if ((i > k) && (i < m))
			continue;
		s += i;
	}

	cout << "Сумма чисел от 1 до " << k << " и от " << m << " до 100 равна " << s << endl;

	return 0;
}