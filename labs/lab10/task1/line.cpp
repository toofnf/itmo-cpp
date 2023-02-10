#include "line.h"

void Line::set_dot1(Dot* dot1)
{
    Line::d1 = dot1;
}

void Line::set_dot2(Dot* dot2)
{
    Line::d2 = dot2;
}

Dot Line::get_dot1()
{
    return *d1;
}

Dot Line::get_dot2()
{
    return *d2;
}

double Line::count_length()
{
    return
    (sqrt((Line::d1->get_x() - Line::d2->get_x()) *
    (Line::d1->get_x() - Line::d2->get_x()) +
    (Line::d1->get_y() - Line::d2->get_y()) *
    (Line::d1->get_y() - Line::d2->get_y())));
}

Line::Line(Dot *dot1, Dot *dot2)
{
    Line::set_dot1(dot1);
    Line::set_dot2(dot2);
}