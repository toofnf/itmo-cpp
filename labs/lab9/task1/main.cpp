#include <iostream>
#include<cmath>
#include <math.h>
#include <string>

using namespace std;

class Triangle
{
public:
    void set_a(double tr_a)
    {
        a = tr_a;
    }
    double get_a()
    {
        return a;
    }
    void set_b(double tr_b)
    {
        b = tr_b;
    }
    double get_b()
    {
        return b;
    }
    void set_c(double tr_c)
    {
        c = tr_c;
    }
    double get_c()
    {
        return c;
    }
    double square()
    {
        if (a <= 0 || b <= 0 || c <= 0 || a >= b + c || b >= a + c || c >= a + b)
        {
            throw ExScore("Что-то не так с длинами сторон.");
        }
        double s = sqrt((a + b + c) * (-a + b + c) * (a - b + c) * (a + b - c)) / 4;
        return s;
    }
    class ExScore //класс исключений
    {
    public:
        string origin; //для имени функции
        int iValue; //для хранения ошибочного значения
        ExScore(string orig)
        {
            origin = orig; //строка с именем виновника ошибки
        }
    };
private:
    double a;
    double b;
    double c;
};
int main() {
    Triangle t;
    int a, b, c;
    cout << "Please enter the a, b, c values: " << endl;
    cin >> a >> b >> c;

    try {
        t.set_a(a);
        t.set_b(b);
        t.set_c(c);
        double s = t.square();
        cout << "The square of this triangle is " << s;
    }
    catch(Triangle::ExScore& ex) {
        cout << ex.origin;
    }

    return 0;
}
