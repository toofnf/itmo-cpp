#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double i = 0;
    while (i <= M_PI)
    {
        cout << "The sin(" << i << ") is equal to " << sin(i) << "." << endl;
        i += M_PI / 4;
    }
    return 0;
}
