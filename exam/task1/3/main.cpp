#include <iostream>
#include <cmath>

using namespace std;

void print_area_right_triangle()
{
    cout << "Please enter the size of leg a of a right triangle: " << endl;
    double sizea;
    cin >> sizea;
    cout << "Please enter the size of leg b of a right triangle: " << endl;
    double sizeb;
    cin >> sizeb;
    double square = 0.5 * sizea * sizeb;
    double hypotenuse = sqrt(sizea * sizea + sizeb * sizeb);
    cout << "The area of a right triangle with legs " << sizea << " and " << sizeb << " and hypotenuse " << hypotenuse
         << " is equal to " << square << "." << endl;
}

int main() {
    print_area_right_triangle();
    return 0;
}
