/* time.h */
#pragma once /* Защита от двойного подключения заголовочного файла */
#include <string>
#include <fstream>
using namespace std;
class Time
{
public:
    // Запись данных о времени в файл
    void save();
    // Деструктор класса Time
    ~Time();
    Time();
    Time(int, int, int);
    // Установка часов
    void set_hours(int);
    // Получение часов
    int get_hours();
    // Установка минут
    void set_minutes(int);
    // Получение минут
    int get_minutes();
    // Установка секунд
    void set_seconds(int);
    // Получение секунд
    int get_seconds();
    // Вывод времени на экран
    string time_to_string();
    //Сложение времени
    void add_time(Time, Time);

    int hours;
    int minutes;
    int seconds;
};