#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251");
	cout.precision(3);

	double a, b;
	string name;
	cout << "Введите a и b:\n";
	cin >> a; // ввод с клавиатуры значения a
	cin >> name;
	cin >> b; // ввод с клавиатуры значения b

	double x = a / b; // вычисление значения x
	cout << "\nx = " << x << endl; //вывод результата на экран
	cout << "Привет, " << name << "!\n";

	cout << sizeof(a / b) << ends << sizeof(x) << endl;
	return 0;
}