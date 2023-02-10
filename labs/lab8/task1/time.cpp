/* time.cpp */
#include <string>
#include "time.h"
#include <fstream>

using namespace std;

Time::Time()
{
    Time::set_hours(0);
    Time::set_minutes(0);
    Time::set_seconds(0);
}
Time::Time(int hours, int minutes, int seconds)
{
    Time::set_hours(hours);
    Time::set_minutes(minutes);
    Time::set_seconds(seconds);
    if (Time::seconds >= 60) {
        int overflow_seconds = Time::seconds / 60;
        Time::seconds = Time::seconds % 60;
        Time::minutes += overflow_seconds;
    }
    if (Time::minutes >= 60) {
        int overflow_minutes = Time::minutes / 60;
        Time::minutes = Time::minutes % 60;
        Time::hours += overflow_minutes;
    }
}
// Установка часов
void Time::set_hours(int time_hours)
{
    Time::hours = time_hours;
}
// Получение часов
int Time::get_hours()
{
    return Time::hours;
}
// Установка минут
void Time::set_minutes(int time_minutes)
{
    Time::minutes = time_minutes;
}
// Получение минут
int Time::get_minutes()
{
    return Time::minutes;
}
// Установка секунд
void Time::set_seconds(int time_seconds)
{
    Time::seconds = time_seconds;
}
// Получение секунд
int Time::get_seconds()
{
    return Time::seconds;
}

// Деструктор Student
Time::~Time()
{
    Time::save();
}
// Запись данных о студенте в файл
void Time::save()
{
    ofstream fout("students.txt", ios::app);
    string hour = to_string(Time::get_hours());
    if (Time::get_hours() < 10) {
        hour = '0' + hour;
    }
    string min = to_string(Time::get_minutes());
    if (Time::get_minutes() < 10) {
        min = '0' + min;
    }
    string sec = to_string(Time::get_seconds());
    if (Time::get_seconds() < 10) {
        sec = '0' + sec;
    }

    string s_time = hour + ":" + min + ":" + sec;
    fout << s_time << endl;
    fout.close();
}

string Time::time_to_string()
{
    string hour = to_string(Time::get_hours());
    if (Time::get_hours() < 10) {
        hour = '0' + hour;
    }
    string min = to_string(Time::get_minutes());
    if (Time::get_minutes() < 10) {
        min = '0' + min;
    }
    string sec = to_string(Time::get_seconds());
    if (Time::get_seconds() < 10) {
        sec = '0' + sec;
    }

    string s_time = "The current time is: " + hour + ":" + min + ":" + sec;
    return s_time;
}

void Time::add_time(Time t1, Time t2) {
    Time::set_hours(t1.hours + t2.hours);
    Time::set_minutes(t1.minutes + t2.minutes);
    Time::set_seconds(t1.seconds + t2.seconds);
    if (Time::seconds >= 60) {
        Time::seconds -= 60;
        Time::minutes++;
    }
    if (Time::minutes >= 60) {
        Time::minutes -= 60;
        Time::hours++;
    }
}