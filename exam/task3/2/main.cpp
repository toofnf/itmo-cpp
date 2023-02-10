#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Please enter the size of the array: ";
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Please enter the value of the array's element №" << (i+1) << ": " << endl;
        cin >> a[i];
    }
    cout << "The negative elements of the array: " << endl;
    for(int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}

