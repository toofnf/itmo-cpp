#include <iostream>

using namespace std;

int reverse_int(int n)
{
    int r = 0;
    while (n > 0)
    {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}

int main() {
    cout << "Please enter the integer: " << endl;
    int n;
    cin >> n;
    cout << "The reversed " << n << " is equal to " << reverse_int(n) << ".";
    return 0;
}
