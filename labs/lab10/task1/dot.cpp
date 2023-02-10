#include "dot.h"

void Dot::set_x(double xx)
{
    Dot::x = xx;
}
double Dot::get_x()
{
    return Dot::x;
}
void Dot::set_y(double yy)
{
    Dot::y = yy;
}
double Dot::get_y()
{
    return Dot::y;
}
Dot::Dot(double xx, double yy)
{
    Dot::set_x(xx);
    Dot::set_y(yy);
}