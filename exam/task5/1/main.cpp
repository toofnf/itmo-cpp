#include <iostream>

using namespace std;

void print_day(int n)
{
    switch (n) {
        case 1:
            cout << "It's Monday!" << endl;
            break;
        case 2:
            cout << "It's Tuesday!" << endl;
            break;
        case 3:
            cout << "It's Wednesday!" << endl;
            break;
        case 4:
            cout << "It's Thursday!" << endl;
            break;
        case 5:
            cout << "It's Friday!" << endl;
            break;
        case 6:
            cout << "It's Saturday!" << endl;
            break;
        case 7:
            cout << "It's Sunday!" << endl;
            break;
        default:
            cout << "It's something wrong here... Can't tell anything about the day..." << endl;
    }    
}

int main() {
    print_day(0);
    print_day(1);
    print_day(2);
    print_day(3);
    print_day(4);
    print_day(5);
    print_day(6);
    print_day(7);
    print_day(8);
    return 0;
}