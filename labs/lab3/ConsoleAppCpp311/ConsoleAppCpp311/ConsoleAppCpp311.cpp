#include <iostream>
#include<cmath>
#include <math.h>
#include <iomanip>
#include <ctime>
using namespace std;

void privet(string);

int main()
{
	system("chcp 1251");

	string name;
	cout << "What is your name?" << endl;
	cin >> name;
	privet(name);

	return 0;
}

void privet(string name)
{
	cout << name << ", " << "hello!" << endl;
}