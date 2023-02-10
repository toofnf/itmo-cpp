#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Time
{
public:
    class ExScore //класс исключений
    {
    public:
        string wrong;
        int iValue; //для хранения ошибочного значения
        ExScore(string w)
        {
            wrong = w;
        }
    };
    // Запись данных о времени в файл
    void save()
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
    // Деструктор класса Time
    ~Time()
    {
        Time::save();
    }
    Time()
    {
        set_hours(0);
        set_minutes(0);
        set_seconds(0);
    }
    Time(int hours, int minutes, int seconds)
    {
        set_hours(hours);
        set_minutes(minutes);
        set_seconds(seconds);
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
        if (Time::hours < 0 || Time::minutes < 0 || Time::minutes >= 60 || Time::seconds < 0 || Time::seconds >= 60)
            throw ExScore("Что-то не так...");

    }
    void set_hours(int time_hours)
    {
        hours = time_hours;
    }
// Получение часов
    int get_hours() const
    {
        return hours;
    }
// Установка минут
    void set_minutes(int time_minutes)
    {
        minutes = time_minutes;
    }
// Получение минут
    int get_minutes() const
    {
        return minutes;
    }
// Установка секунд
    void set_seconds(int time_seconds)
    {
        seconds = time_seconds;
    }
// Получение секунд
    int get_seconds() const
    {
        return seconds;
    }
    // Вывод времени на экран
    string time_to_string() const
    {
        string hour = to_string(get_hours());
        if (get_hours() < 10) {
            hour = '0' + hour;
        }
        string min = to_string(get_minutes());
        if (get_minutes() < 10) {
            min = '0' + min;
        }
        string sec = to_string(get_seconds());
        if (get_seconds() < 10) {
            sec = '0' + sec;
        }

        string s_time = "The current time is: " + hour + ":" + min + ":" + sec;
        return s_time;
    }
    //Сложение времени
    void add_time(const Time& t1, const Time& t2) {
        set_hours(t1.hours + t2.hours);
        set_minutes(t1.minutes + t2.minutes);
        set_seconds(t1.seconds + t2.seconds);
        if (seconds >= 60) {
            seconds -= 60;
            minutes++;
        }
        if (minutes >= 60) {
            minutes -= 60;
            hours++;
        }
    }

    int hours{};
    int minutes{};
    int seconds{};
};

int main() {
    int hours;
    int minutes;
    int seconds;

    try {
        // Ввод времени с клавиатуры
        cout << "Enter the time in format `HH MM SS`: ";
        cin >> hours >> minutes >> seconds;
        // Передача параметров конструктору
        Time *time01 = new Time(hours, minutes, seconds);
        // Выводим данные по времени
        cout << time01->time_to_string() << endl;

        delete time01;
    }
    catch(Time::ExScore& ex) {
        cout << ex.wrong;
    }

    return 0;
}