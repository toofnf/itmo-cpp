#include <iostream>
#include<cmath>
#include <math.h>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	system("chcp 1251");

	int score = 0;
	double x, y;
	int shots = 0;

	while (score < 50)
	{
		shots++;
		cout << "Выстрел!!!";
		cin >> x;
		cin >> y;

		if (x * x + y * y <= 1) 
		{
			score += 10; 
			cout << "Снайперская меткость! У вас " << score << " очков." << endl;
		}
		else if (x * x + y * y <= 4)
		{
			score += 5; 
			cout << "Выстрел настоящего стрелка! У вас " << score << " очков." << endl;
		}
		else if (x * x + y * y <= 9)
		{
			score += 1; 
			cout << "Неплохо для новичка! У вас " << score << " очков." << endl;
		}
		else
		{
			cout << "Мимо! У вас " << score << " очков." << endl;
		}
	}

	cout << "Игра закончена! ";
	if (shots <= 5)
	{
		cout << "Получено достижение: снайпер.\nВыстрелов: " << shots << ".\nОчков: " << score << "." << endl;
	}
	else if (shots <= 10)
	{
		cout << "Получено достижение: стрелок.\nВыстрелов: " << shots << ".\nОчков: " << score << "." << endl;
	}
	else if (shots <= 50)
	{
		cout << "Получено достижение: новичок.\nВыстрелов: " << shots << ".\nОчков: " << score << "." << endl;
	}
	else
	{
		cout << "Выстрелов: " << shots << ".\nОчков: " << score << "." << endl;
	}

	return 0;
}