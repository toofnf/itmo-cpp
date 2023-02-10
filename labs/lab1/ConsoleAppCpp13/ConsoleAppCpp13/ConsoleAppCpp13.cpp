#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main()
{
	system("chcp 1251");
	cout.precision(2);


	double p;
	string name;
	cout << "Введите значение периметра P:" << endl;
	cin >> p; // ввод с клавиатуры значения P
	double a = p / 3;

	double s = a * a / 4 * sqrt(3); // вычисление значения s

	cout << setw(10) << "Сторона" << ends;
	cout << setw(10) << "Площадь" << endl; //вывод таблички на экран
	cout << setw(10) << a << ends;
	cout << setw(10) << s << endl; //вывод результата на экран

	return 0;
}