#include <iostream>
#include<cmath>
#include <math.h>
#include <iomanip>
#include <ctime>
using namespace std;

string privet(string name)
{
	string str = name + ", " + "hello!\n";
	return str;
}

int main()
{
	system("chcp 1251");

	string name;
	cout << "What is your name?" << endl;
	cin >> name;
	string nameOut = privet(name);
	cout << nameOut << endl;

	return 0;
}