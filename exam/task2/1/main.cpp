#include <iostream>

using namespace std;

int count_factorial(int n)
{
    if (n >= 0)
    {
        int factorial = 1;
        while (n>1)
        {
            factorial *= n;
            n--;
        }
        return factorial;
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
    if (count_factorial(n) >= 1)
    {
        cout << "The factorial of " << n << " is equal to " << count_factorial(n) << ".";
    }
    else
    {
        cout << "The integer is negative, it is imposible to count a factorial.";
    }
    return 0;
}
