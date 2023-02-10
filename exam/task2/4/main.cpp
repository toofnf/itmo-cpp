#include <iostream>

using namespace std;

int count_row_sum(int n)
{
    int sum = 0;
    if (n >= 0)
    {
        for(int i=0; i <= n; i++)
        {
            sum += i;
        }
    }
    else
    {
        for(int i=0; i >= n; i--)
        {
            sum += i;
        }
    }
    return(sum);
}

int main() {
    cout << "Please enter an integer: " << endl;
    int n;
    cin >> n;
    cout << "The sum of integers from 0 to " << n << " is equal to " << count_row_sum(n) << ".";
    return 0;
}
