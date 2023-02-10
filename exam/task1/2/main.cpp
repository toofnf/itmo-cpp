#include <iostream>

using namespace std;

void print_area_of_rectangle()
{
    cout << "Please enter the size of side a of a rectangle: " << endl;
    double sizea;
    cin >> sizea;
    cout << "Please enter the size of side b of a rectangle: " << endl;
    double sizeb;
    cin >> sizeb;
    double square = sizea * sizeb;
    cout << "The area of a rectangle with sides " << sizea << " and " << sizeb
         <<" is equal to " << square << "." << endl;
}

int main() {
    print_area_of_rectangle();
    return 0;
}
