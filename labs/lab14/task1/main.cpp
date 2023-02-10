#include <iostream>

using namespace std;

template<class T>
T count_array_average (T arr[], int size)
{
    T s;
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
            s = arr[i];
        else
            s += arr[i];
    }
    s = s / size;
    return s;
}

int main()
{
    int arri[] = {9,3,17,6,5,4,31,2,12};
    long arrl[] = {9,3,17,6,5,4,31,2,12};
    double arrd[] = {2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2};
    char arrc[] = "Hello, word";

    int k1 = sizeof(arri)/sizeof(arri[0]);
    int k2 = sizeof(arrl)/sizeof(arrd[0]);
    int k3 = sizeof(arrd)/sizeof(arrd[0]);
    int k4 = sizeof(arrc)/sizeof(arrc[0]) - 1;

    cout << count_array_average(arri, k1) << ' '
    << count_array_average(arrl, k2) << ' '
    << count_array_average(arrd, k3) << ' '
    << count_array_average(arrc, k4);
    return 0;
}