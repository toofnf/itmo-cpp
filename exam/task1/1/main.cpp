#include <iostream>

using namespace std;

void print_area_of_square()
{
    cout << "Please enter the size of side of a square: " << endl;
    double size;
    cin >> size;
    double square = size * size;
    cout << "The area of a square with side " << size << " is equal to " << square << "." << endl;
}
int main() {
    print_area_of_square();
    return 0;
}
