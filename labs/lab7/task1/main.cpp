#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <ctime>
#include <fstream>

using namespace std;

struct Time
{
    int hours;
    int minutes;
    int seconds;
    int printSeconds()
    {
        int s = hours * 60 * 60 + minutes * 60 + seconds;
        cout << s << " seconds" << endl;
        return s;
    }
    void printTime() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

Time inputTime()
{
    Time t;
    cout << "Please enter the time in format `HH MM SS`: " << endl;
    cin >> t.hours >> t.minutes >> t.seconds;
    if (t.seconds >= 60) {
        int overflow_seconds = t.seconds / 60;
        t.seconds = t.seconds % 60;
        t.minutes += overflow_seconds;
    }
    if (t.minutes >= 60) {
        int overflow_minutes = t.minutes / 60;
        t.minutes = t.minutes % 60;
        t.hours += overflow_minutes;
    }
    return t;
}

Time addTime(Time t1, Time t2) {
    Time t = {t1.hours + t2.hours, t1.minutes + t2.minutes, t1.seconds + t2.seconds};
    if (t.seconds >= 60) {
        t.seconds -= 60;
        t.minutes++;
    }
    if (t.minutes >= 60) {
        t.minutes -= 60;
        t.hours++;
    }
    return t;
}

Time substructTime(Time t1, Time t2) {
    Time t = {t1.hours - t2.hours, t1.minutes - t2.minutes, t1.seconds - t2.seconds};
    if (t.seconds < 0) {
        t.seconds += 60;
        t.minutes--;
    }
    if (t.minutes < 0) {
        t.minutes += 60;
        t.hours--;
    }
    return t;
}

int main()
{
    Time t1 = inputTime();
    Time t2 = inputTime();

    t1.printTime();
    t2.printTime();

    t1.printSeconds();

    Time t3 = addTime(t1, t2);
    t3.printTime();
    Time t4 = substructTime(t1, t2);
    t4.printTime();
}