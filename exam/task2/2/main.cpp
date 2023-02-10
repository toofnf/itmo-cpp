#include <iostream>

using namespace std;

bool is_even(int n)
{
    return(n % 2 == 0);
}

int main() {
    cout << "Please enter an integer: " << endl;
    int n;
    cin >> n;
    if (is_even(n))
    {
        cout << "The number " << n << " is even.";
    }
    else
    {
        cout << "The number " << n << " is odd.";
    }
    return 0;
}
