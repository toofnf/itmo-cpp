#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // для алгоритма сортировки

using namespace std;

class Point
{
    public:
        void set_x(double xx)
        {
            x = xx;
        }
        double get_x()
        {
            return x;
        }
        void set_y(double yy)
        {
            y = yy;
        }
        double get_y()
        {
            return y;
        }
        Point(double xx, double yy)
        {
            set_x(xx);
            set_y(yy);
            set_length(xx, yy);
        }
        void set_length(double xx, double yy)
        {
            length = sqrt(xx * xx + yy * yy);
        }

        double get_length()
        {
            return length;
        }

    friend std::ostream& operator<< (std::ostream &out, const Point &p);

    private:
        double x;
        double y;
        double length;
};

std::ostream &operator<<(ostream &out, const Point &p) {
    out << "(" << p.x << "; " << p.y << ")\n";
    return out;
}

bool operator> (Point p1, Point p2)
{
    if (p1.get_length() > p2.get_length())
    {
        return true;
    }
    return false;
}
bool operator< (Point p1, Point p2)
{
    if (p1.get_length() < p2.get_length())
    {
        return true;
    }
    return false;
}
bool operator== (Point p1, Point p2)
{
    if (p1.get_length() == p2.get_length())
    {
        return true;
    }
    return false;
}

int main()
{
    vector<Point> v;
    v.push_back(Point(1,2));
    v.push_back(Point(10,12));
    v.push_back(Point(21,7));
    v.push_back(Point(4,8));
    sort(v.begin(), v.end()); // требуется перегрузка оператора < для класса Point

    for (auto point : v)
        cout << point; // требуется перегрузка оператора << для класса Point

    return 0;
}