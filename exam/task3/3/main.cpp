#include <iostream>

using namespace std;

int main() {
    double a[10];
    double mul = 1;
    for(int i = 0; i < 10; i++)
    {
        cout << "Please enter the value of the array's element №" << (i+1) << ": " << endl;
        cin >> a[i];
        mul *= a[i];
    }
    cout << "The product of the elements of the array is equal " << mul << "." << endl;
    return 0;
}

