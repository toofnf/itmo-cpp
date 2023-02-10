#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <ctime>
#include <vector>

using namespace std;
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
    for (int i=0; i<n; i++)
    {
        cout << mas[i] << endl;
    }

    cout << "\nGood: " << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << endl;
    }

    cout << "\nBad: " << endl;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << endl;
    }

    cout << "\nCount error: " << k << endl;

    return 0;
}
