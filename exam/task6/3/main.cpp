#include <iostream>

using namespace std;

struct div_of_three
{
    double a, b, c;
    double divide()
    {
        return(a / b / c);
    }
};
int main() {
    div_of_three div1;
    cout << "Please enter the first real number: " << endl;
    cin >> div1.a;
    cout << "Please enter the second real number: " << endl;
    cin >> div1.b;
    cout << "Please enter the third real number: " << endl;
    cin >> div1.c;
    cout << "The quotient of three entered numbers is equal to " << div1.divide() << "." << endl;
    return 0;
}
