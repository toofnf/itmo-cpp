#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <ctime>

using namespace std;

void show_array(const int Arr[],const int N)
{
    for (int i = 0; i < N; i++)
        cout << Arr[i] <<" ";
    cout << "\n";
}

bool from_min(const int a, const int b)
{
    return a>b;
}

bool from_max(const int a, const int b)
{
    return a<b;
}

void bubble_sort(int Arr[],const int N, bool (*compare)(int a,int b))
{
    for (int i=1;i<N;i++)
    {
        for (int j=0;j<N-1;j++)
        {
            if ((*compare)(Arr[j],Arr[j+1])) swap(Arr[j],Arr[j+1]);
        }
    }
}



int main() {
    bool (*from_f[2])(int, int) = { from_min,from_max };

    const int N = 10;
    int my_choose = 0;

    int* A = new int[N];
    for (int i = 0; i < N; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> A[i];
        cout << endl;
    }

    cout << "1. Сортировать по возрастанию\n";
    cout << "2. Сортировать по убыванию\n";
    cin >> my_choose;

    cout << "Исходные данные: ";

    show_array(A,N);

    bubble_sort(A,N,(*from_f[my_choose - 1]));

    cout << "Обработанные данные: ";
    show_array(A,N);

    delete []A;

    return 0;
}