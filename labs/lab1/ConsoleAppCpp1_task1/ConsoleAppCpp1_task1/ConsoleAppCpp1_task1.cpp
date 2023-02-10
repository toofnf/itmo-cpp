#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main()
{
    //system("chcp 1251");

	int x1, x2, x3, x4, x5, y1, y2, y3, y4, y5;
	cout << "Введите координаты вершин пятиугольника::" << endl;
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

	double s = abs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - x1 * y5 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4) / 2;

	cout << s << endl; //вывод результата на экран

	return 0;
}