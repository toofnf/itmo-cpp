#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <ctime>
#include <vector>

using namespace std;

int transposition_search(int *arr, int n, int key)
{
    int temp;
    for (int i = 0; i<n; i++)
    {
        if (arr[i] == key)
        {
            if (i == 0)
                return i;
            temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
            return i;
        }
    }
    return -1;
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 2, 3, 4, 5, 3, 4, 5, 4, 5, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int searched_index;
    int key;

    for (int i = 0; i < n; i ++) {
        key = arr[i];
        searched_index = transposition_search(arr, n, key);

        cout << "Элемент " << key << " найден в массиве с индексом " << searched_index << '.' << endl;
        print_array(arr, n);
    }
    return 0;
}
