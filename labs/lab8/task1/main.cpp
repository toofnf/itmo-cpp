#include <iostream>
#include <string>
#include "time.h"
#include "time.cpp"
#include <fstream>

using namespace std;

int main() {
    int hours;
    int minutes;
    int seconds;
    // Ввод времени с клавиатуры
    cout << "Enter the time in format `HH MM SS`: ";
    cin >> hours >> minutes >> seconds;
    // Передача параметров конструктору
    Time *time01 = new Time(hours, minutes, seconds);
    // Выводим данные по времени
    cout << time01->time_to_string() << endl;

    // Ввод времени с клавиатуры
    cout << "Enter the time in format `HH MM SS`: ";
    cin >> hours >> minutes >> seconds;
    // Передача параметров конструктору
    Time *time02 = new Time(hours, minutes, seconds);
    // Выводим данные по времени
    cout << time02->time_to_string() << endl;

    // Передача параметров конструктору
    Time *time03 = new Time();
    time03->add_time(*time01, *time02);
    cout << time03->time_to_string() << endl;

    // Удаление объекта student из памяти
    delete time01;
    delete time02;
    delete time03;
    return 0;
}
