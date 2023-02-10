#include <iostream>

using namespace std;

void print_rainbow_color(int n)
{
    switch (n) {
        case 1:
            cout << "It's red!" << endl;
            break;
        case 2:
            cout << "It's orange!" << endl;
            break;
        case 3:
            cout << "It's yellow!" << endl;
            break;
        case 4:
            cout << "It's green!" << endl;
            break;
        case 5:
            cout << "It's light blue!" << endl;
            break;
        case 6:
            cout << "It's blue!" << endl;
            break;
        case 7:
            cout << "It's purple!" << endl;
            break;
        default:
            cout << "It's something wrong here... Can't tell anything about this rainbow and it's colors..." << endl;
    }
}

int main() {
    print_rainbow_color(0);
    print_rainbow_color(1);
    print_rainbow_color(2);
    print_rainbow_color(3);
    print_rainbow_color(4);
    print_rainbow_color(5);
    print_rainbow_color(6);
    print_rainbow_color(7);
    print_rainbow_color(8);
    return 0;
}