#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <ctime>

using namespace std;

int MyRoot(double a, double b, double c, double* x1, double* x2)
{
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                return 2;
            }
            else
            {
                return -1;
            }
        }
        else
        {
            if (c != 0)
            {
                *x1 = -c / b;
            }
            return 0;
        }
    }
    else
    {
        double d = b * b - 4 * a * c;
        if (d > 0)
        {
            *x1 = (-b - sqrt(d)) / (2 * a);
            *x2 = (-b + sqrt(d)) / (2 * a);
            return 1;
        }
        else
        {
            return -1;
        }
    }
}

int main()
{
    double a, b, c;
    cout << "Please, enter the quadratic equation coefficients a, b and c: \n";
    cin >> a >> b >> c;

    double x_1 = 0.0, x_2 = 0.0;

    int res = MyRoot(a, b, c, &x_1, &x_2);

    if (res == 2)
    {
        cout << "The roots of this equation are the whole set of real numbers.";
    }
    else if (res == 1)
    {
        cout << "The roots of this equation are " << x_1 << " and " << x_2 << ".";
    }
    else if (res == 0)
    {
        cout << "The root of this equation is " << x_1 << ".";
    }
    else
    {
        cout << "There aren't any roots of this equation.";
    }
}