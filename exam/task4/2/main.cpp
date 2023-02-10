#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double i = 0;
    do
    {
        cout << "The sin(" << i << ") is equal to " << sin(i) << "." << endl;
        i += M_PI / 2;
    } while (i <= M_PI * 2);
    return 0;
}
