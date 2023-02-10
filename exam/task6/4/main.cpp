#include <iostream>

using namespace std;

struct pow_of_three
{
    double a, b, c;
    double power()
    {
        return(pow(a, b + c));
    }
};
int main() {
    pow_of_three pow1;
    cout << "Please enter the first real number: " << endl;
    cin >> pow1.a;
    cout << "Please enter the second real number: " << endl;
    cin >> pow1.b;
    cout << "Please enter the third real number: " << endl;
    cin >> pow1.c;
    cout << "The quotient of three entered numbers is equal to " << pow1.power() << "." << endl;
    return 0;
}
