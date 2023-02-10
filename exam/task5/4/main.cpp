#include <iostream>

using namespace std;

void print_students_surname(int n)
{
    switch (n) {
        case 1:
            cout << "It's Aksenova!" << endl;
            break;
        case 2:
            cout << "It's Alushin!" << endl;
            break;
        case 3:
            cout << "It's Balashov!" << endl;
            break;
        case 4:
            cout << "It's Bevz!" << endl;
            break;
        case 5:
            cout << "It's Blokhina!" << endl;
            break;
        default:
            cout << "It's something wrong here... Can't tell anything about this student..." << endl;
    }
}

int main() {
    print_students_surname(0);
    print_students_surname(1);
    print_students_surname(2);
    print_students_surname(3);
    print_students_surname(4);
    print_students_surname(5);
    print_students_surname(6);
    return 0;
}