#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double i = 0;
    while (i <= 10)
    {
        cout << "The cube of the number " << i << " is equal to " << pow(i, 3) << "." << endl;
        i += 2;
    }
    return 0;
}
