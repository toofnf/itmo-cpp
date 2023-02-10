#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <ctime>
#include <vector>
#include <fstream>

using namespace std;

int main() {

    string text;
    cin >> text;

    ofstream out;          // поток для записи
    out.open("Users\\imac\\CLionProjects\\lab6\\task1\\text.txt", ios::app); // открываем файл для записи
    if (out.is_open())
    {
        out << text << endl;
    }

    out.close();
    cout  << text << endl << "text" << endl;

    string line;

    ifstream in("Users\\imac\\CLionProjects\\lab6\\task1\\text.txt", ios::in); // открываем файл для чтения
    if (in.is_open())
    {
        while (getline(in, line)) {
            cout << line << endl;
        }

    }
    in.close();     // закрываем файл

    cout  << line << endl << "line" << endl;

    ofstream clear;          // поток для очистки
    clear.open("Users\\imac\\CLionProjects\\lab6\\task1\\text.txt", ios::trunc);
    clear.close();

    return 0;
}
