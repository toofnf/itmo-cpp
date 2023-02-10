#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <ctime>
#include <vector>

using namespace std;

void printArray(int n, int arr[])
{
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << endl;
    }
}

void printVector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

int main()
{
    srand(time(NULL));
    int a, b, c;

    int k = 0;

    const int n = 10;
    int mas[n];

    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < n; i++)
    {
        // инициализация операндов случайными числами от 1 до 101
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        cout << a << " * " << b << " = ";
        cin >> c;
        mas[i] = c;

        if (a * b != c)
        {
            v2.push_back(c);
            k++; // операция «инкремент», аналогично: k = k + 1
            cout << "Error! ";
            cout << a << " * " << b << " = " << a * b << endl;
        }
        else
        {
            v1.push_back(c);
        }
    }

    cout << "\nAll: " << endl;
    printArray(n, mas);

    cout << "\nGood: " << endl;
    printVector(v1);

    cout << "\nBad: " << endl;
    printVector(v2);

    cout << "\nCount error: " << k << endl;

    return 0;
}
