#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <ctime>

using namespace std;

int main() {
    const int n = 10;
    int* mas = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
        cout << endl;
    }

    int s = 0, s_neg = 0, s_pos = 0, s_even = 0, s_odd = 0;
    int min, max, min_index, max_index;
    for (int i=0; i<n; i++)
    {
        s += mas[i];

        if (mas[i] > 0)
        {
            s_pos += mas[i];
        }
        else
        {
            s_neg += mas[i];
        }

        if (i % 2 == 0)
        {
            s_even += mas[i];
        }
        else
        {
            s_odd += mas[i];
        }

        if (i == 0) {
            min = mas[i];
            min_index = i;
            max = mas[i];
            max_index = i;
        }
        else
        {
            if (mas[i] < min)
            {
                min = mas[i];
                min_index = i;
            }
            else if (mas[i] > max)
            {
                max = mas[i];
                max_index = i;
            }
        }
    }
    cout << "Сумма элементов массива равна " << s << endl;
    cout << "Сумма положительных элементов массива равна " << s_pos << endl;
    cout << "Сумма негативных элементов массива равна " << s_neg << endl;
    cout << "Сумма элементов массива c четными индексами равна " << s_even << endl;
    cout << "Сумма элементов массива c нечетными индексами равна " << s_odd << endl;

    double avr = double(s) / n;
    cout << "Среднее арифметическое элементов массива равно " << avr << endl;

    cout << "Минимальный элемент массива имеет значение " << min << ", а его индекс - " << min_index << endl;
    cout << "Максимальный элемент массива имеет значение " << max << ", а его индекс - " << max_index << endl;

    int p = 1;
    if (min_index <= max_index)
    {
        for (int i = min_index + 1; i < max_index; i++) {
            p *= mas[i];
        }
    }
    else
    {
        for (int i = max_index; i <= min_index; i++) {
            p *= mas[i];
        }
    }
    cout << "Произведение элементов массива между минимальным и максимальным равно " << p << endl;

    delete []mas;
}