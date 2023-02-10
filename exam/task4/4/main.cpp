#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double i = 10;
    do
    {
        cout << "The cube of the number " << i << " is equal to " << pow(i, 3) << "." << endl;
        i += 0.5;
    } while (i <= 12);
    return 0;
}
