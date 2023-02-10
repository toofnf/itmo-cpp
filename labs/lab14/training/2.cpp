#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <ctime>
#include <fstream>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

using Tuple = tuple<string, int, double>;
using miniTuple = tuple<int, double>;

template<class Tuple>
void printTupleOfThree(Tuple t)
{
    cout << "("
         << get<0>(t) << ", "
         << get<1>(t) << ", "
         << get<2>(t) << ")" << endl;
}

void printTupleOfTwo(miniTuple t)
{
    cout << "("
         << get<0>(t) << ", "
         << get<1>(t) << ")" << endl;
}

Tuple funtup(string s, int a, double d)
{
    s.append("!");
    return make_tuple(s, a, d*10);
}

Tuple increment(Tuple t)
{
    return make_tuple(get<0>(t), get<1>(t) + 1, get<2>(t) + 1);
}

miniTuple another_increment(Tuple t)
{
    return make_tuple(get<1>(t) + 1, get<2>(t) + 1);
}

int main()
{
    vector<string> v1{ "one", "two", "three", "four", "five", "six" };
    vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
    vector<double> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };

    auto t0 = make_tuple(v1[0], v2[0], v3[0]);
    printTupleOfThree(t0);

    auto t1 = funtup(v1[1], v2[1], v3[1]);
    printTupleOfThree(t1);

    auto t2 = increment(t1);
    printTupleOfThree(t2);

    auto t3 = another_increment(t2);
    printTupleOfTwo(t3);

    auto t4 = std::make_tuple(v1[0], v2[1], v3[2]);
    printTupleOfThree(t4);

    return 0;
}