#include <iostream>

using namespace std;

int gsd(int a, int b)
{
    while (a > 1 && b > 1)
    {
        if (a == b)
        {
            return a;
        }
        else if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    if (a >= b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int main() {
    cout << "Please enter the first integer: " << endl;
    int a;
    cin >> a;
    cout << "Please enter the second integer: " << endl;
    int b;
    cin >> b;
    cout << "The GCD of " << a << " and " << b << " is equal to " << gsd(a, b) << ".";
    return 0;
}
