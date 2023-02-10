#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main()
{
	system("chcp 1251");

	int x, y;
	cout << "Введите координаты точки:" << endl;
	cin >> x;
	cin >> y;

	if (x * x + y * y < 9 && y > 0)
		cout << "Точка лежит внутри полуокружности." << endl;
	else if (x * x + y * y > 9 || y < 0)
		cout << "Точка лежит вне полуокружности." << endl;
	else cout << "Точка лежит на границе полуокружности." << endl;

	return 0;
}