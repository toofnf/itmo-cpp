#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Please enter the size of the array: " << endl;
    cin >> n;
    int a[n];
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        cout << "Please enter the value of the array's element №" << (i+1) << ": " << endl;
        cin >> a[i];
        if (a[i] < 0)
        {
            sum += a[i];
        }
    }
    cout << "The sum of the negative elements of the array is equal to " << sum << "." << endl;
    return 0;
}