#include <iostream>

using namespace std;

struct mul_of_three
{
    double a, b, c;
    double multiply()
    {
        return(a * b * c);
    }
};
int main() {
    mul_of_three mul1;
    cout << "Please enter the first real number: " << endl;
    cin >> mul1.a;
    cout << "Please enter the second real number: " << endl;
    cin >> mul1.b;
    cout << "Please enter the third real number: " << endl;
    cin >> mul1.c;
    cout << "The product of three entered numbers is equal to " << mul1.multiply() << "." << endl;
    return 0;
}
