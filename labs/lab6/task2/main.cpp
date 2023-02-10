#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <ctime>
#include <fstream>

using namespace std;

int main() {
    const int N = 10;
    int* a = new int[N];
    for (int i = 0; i < N; i++)
    {
        cout << "a[" << i << "]=";
        cin >> a[i];
        cout << endl;
    }

    ofstream out1;          // поток для записи
    out1.open("Users\\imac\\CLionProjects\\lab6\\task2\\arrays.txt", ios::app); // открываем файл для записи
    if (out1.is_open())
    {
        for (int i = 0; i < N; i++) {
            out1 << a[i] << ' ';
        }
        out1 << endl;
    }
    out1.close();

    int min = 0; // для записи минимального значения
    int buf = 0; // для обмена значениями

    for (int i = 0; i < N; i++)
    {
        min = i; // номер текущей ячейки, как ячейки с минимальным значением
        // в цикле найдем реальный номер ячейки с минимальным значением
        for (int j = i + 1; j < N; j++)
            min = ( a[j] < a[min] ) ? j : min;
        // перестановка этого элемента, поменяв его местами с текущим
        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }

    ofstream out2;          // поток для записи
    out2.open("Users\\imac\\CLionProjects\\lab6\\task2\\arrays.txt", ios::app); // открываем файл для записи
    if (out2.is_open())
    {
        for (int i = 0; i < N; i++) {
            out2 << a[i] << ' ';
        }
        out2 << endl;
    }
    out2.close();

    string line;

    ifstream in("Users\\imac\\CLionProjects\\lab6\\task2\\arrays.txt", ios::in); // открываем файл для чтения
    if (in.is_open())
    {
        while (getline(in, line)) {
            cout << line << endl;
        }

    }
    in.close();     // закрываем файл

    cout  << line << endl;

    ofstream clear;          // поток для записи
    clear.open("Users\\imac\\CLionProjects\\lab6\\task2\\arrays.txt", ios::trunc);
    clear.close();

    delete []a;
}
