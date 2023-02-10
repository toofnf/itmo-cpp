#include <iostream>

using namespace std;

void print_month(int n)
{
    switch (n) {
        case 1:
            cout << "It's January!" << endl;
            break;
        case 2:
            cout << "It's February!" << endl;
            break;
        case 3:
            cout << "It's March!" << endl;
            break;
        case 4:
            cout << "It's April!" << endl;
            break;
        case 5:
            cout << "It's May!" << endl;
            break;
        case 6:
            cout << "It's June!" << endl;
            break;
        case 7:
            cout << "It's July!" << endl;
            break;
        case 8:
            cout << "It's August!" << endl;
            break;
        case 9:
            cout << "It's September!" << endl;
            break;
        case 10:
            cout << "It's October!" << endl;
            break;
        case 11:
            cout << "It's November!" << endl;
            break;
        case 12:
            cout << "It's December!" << endl;
            break;
        default:
            cout << "It's something wrong here... Can't tell anything about the month..." << endl;
    }
}

int main() {
    print_month(0);
    print_month(1);
    print_month(2);
    print_month(3);
    print_month(4);
    print_month(5);
    print_month(6);
    print_month(7);
    print_month(8);
    print_month(9);
    print_month(10);
    print_month(11);
    print_month(12);
    print_month(13);
    return 0;
}