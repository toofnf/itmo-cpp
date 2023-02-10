#include <iostream>

using namespace std;

int teachers_mark(int n)
{
    if (n >= 90 && n <= 100)
    {
        return 4;
    }
    else if (n >= 80 && n <= 89)
    {
        return 3;
    }
    else if (n >= 70 && n <= 79)
    {
        return 2;
    }
    else if (n >= 60 && n <= 69)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main() {
    cout << "Please enter the arithmetic mean of student grades: " << endl;
    int avr;
    cin >> avr;
    cout << "The mean of student grades is equal to " <<  avr << "." << endl
         << "It means that the teacher's mark is equal to " << teachers_mark(avr) << "." << endl;
    return 0;
}
