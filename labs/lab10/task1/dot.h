#pragma once

using namespace std;

class Dot
{
    public:
        Dot(double, double);
        void set_x(double);
        double get_x();
        void set_y(double);
        double get_y();
    private:
        double x;
        double y;
};