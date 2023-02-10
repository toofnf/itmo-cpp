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

Roots findRoots(double a, double b, double c)
{
    Roots r = {0, 0};
    if (a == 0)
    {
        if (b != 0)
        {
            if (c != 0)
            {
                r.x1 = -c / b;
                r.x2 = r.x1;
            }
        }
    }
    else
    {
        double d = b * b - 4 * a * c;
        if (d > 0)
        {
            r.x1 = (-b - sqrt(d)) / (2 * a);
            r.x2 = (-b + sqrt(d)) / (2 * a);
        }
    }
    return r;
}

int main() {

    Roots r = findRoots(0, 0, -1);

    cout << r.x1 << ' ' << r.x2;

    return 0;
}
