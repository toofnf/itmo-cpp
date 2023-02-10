#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <ctime>
#include <fstream>

using namespace std;

struct Roots
{
    double x1;
    double x2;
};

using Tuple = tuple<Roots, int>;

Tuple findRoots(double a, double b, double c)
{
    Roots r = {0, 0};
    int flag;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                flag = 2;
            }
            else
            {
                flag = -1;
            }
        }
        else
        {
            if (c != 0)
            {
                r.x1 = -c / b;
            }
            flag = 0;
        }
    }
    else
    {
        double d = b * b - 4 * a * c;
        if (d > 0)
        {
            r.x1 = (-b - sqrt(d)) / (2 * a);
            r.x2 = (-b + sqrt(d)) / (2 * a);
            flag = 1;
        }
        else if (d == 0)
        {
            r.x1 = -c / b;
            flag = 0;
        }
        else
        {
            flag = -1;
        }
    }
    return make_tuple(r, flag);
}

int main() {
    int a, b, c;
    cout << "Please enter the coefficients a, b, c: " << endl;
    cin >> a >> b >> c;
    Tuple solution = findRoots(a, b, c);

    int flag = get<1>(solution);

    if (flag == -1) {
        cout << "NO ROOTS";
    }
    else if (flag == 0)
    {
        cout << "THE ROOT IS " << get<0>(solution).x1;
    }
    else
    {
        cout << "THE ROOTS ARE " << get<0>(solution).x1 << ' ' << get<0>(solution).x2;
    }

    return 0;
}
