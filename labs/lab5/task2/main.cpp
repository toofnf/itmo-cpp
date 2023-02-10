#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <ctime>
#include <vector>

using namespace std;

int *max_vect(int n, int arr_1[], int arr_2[]) {
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        if (arr_1[i] >= arr_2[i]) {
            arr[i] = arr_1[i];
        }
        else
        {
            arr[i] = arr_2[i];
        }
    }
    return arr;
}

int main()
{
    int a[]={1,2,3,4,5,6,7,2};
    int b[]={7,6,5,4,3,2,1,3};

    int kc = sizeof(a)/sizeof(a[0]); //Количество элементов массива
    int* c; //Указатель на результирующий массив
    c = max_vect(kc,a,b); //вызов функции для создания массива

    for (int i = 0; i < kc; i++) {
        cout << c[i] << endl;
    }//Вывод результата.
    delete []c; //Возврат памяти.

    return 0;
}
