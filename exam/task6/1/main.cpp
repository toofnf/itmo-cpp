#include <iostream>

using namespace std;

struct sum_of_three
{
    double a, b, c;
    double sum()
    {
        return(a + b + c);
    }
};
int main() {
    sum_of_three sum1;
    cout << "Please enter the first real number: " << endl;
    cin >> sum1.a;
    cout << "Please enter the second real number: " << endl;
    cin >> sum1.b;
    cout << "Please enter the third real number: " << endl;
    cin >> sum1.c;
    cout << "The sum of three entered numbers is equal to " << sum1.sum() << "." << endl;
    return 0;
}
