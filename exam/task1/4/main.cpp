#include <iostream>
#include <cmath>

using namespace std;

void print_area_of_circle()
{
    cout << "Please enter the size of radius of a circle: " << endl;
    double radius;
    cin >> radius;
    double square = M_PI * radius * radius;
    cout << "The area of a circle with radius " << radius << " is equal to " << square << "." << endl;
}

int main() {
    print_area_of_circle();
    return 0;
}
