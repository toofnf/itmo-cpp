#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <ctime>

using namespace std;

bool Input(int &a, int &b)
{
    cout << "Please enter two positive integers: ";

    cin >> a;
    cin >> b;

    if ((a > 0) && (b > 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main() {
    int a = 0, b = 0;

    if (!Input(a, b)) {
        cerr << "error";
        return 1;
    }

    int s = a + b;
    cout << a << " + " << b << " = " << s;
    return 0;
}
