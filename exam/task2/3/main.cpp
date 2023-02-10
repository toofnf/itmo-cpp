#include <iostream>
#include <cmath>

using namespace std;

double count_square_root(int n)
{
    if (n >= 0)
    {
        return(sqrt(n));
    }
    else
    {
        return(-1);
    }
}

int main() {
    cout << "Please enter an integer: " << endl;
    int n;
    cin >> n;
    if (n >= 0)
    {
        cout << "The square root of " << n << " is equal to " << count_square_root(n) << ".";
    }
    else
    {
        cout << "The integer is negative, it is impossible to count a square root.";
    }
    return 0;
}
