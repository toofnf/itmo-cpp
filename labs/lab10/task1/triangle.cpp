#include "triangle.h"

void Triangle::set_line1(Line *line)
{
    Triangle::l1 = line;
}
Line Triangle::get_line1()
{
    return *Triangle::l1;
}
void Triangle::set_line2(Line *line)
{
    Triangle::l2 = line;
}
Line Triangle::get_line2()
{
    return *Triangle::l2;
}
void Triangle::set_line3(Line *line)
{
    Triangle::l3 = line;
}
Line Triangle::get_line3()
{
    return *Triangle::l3;
}

void Triangle::set_dot1(Dot *d)
{
    Triangle::l1->set_dot1(d);
}
Dot Triangle::get_dot1()
{
    return Triangle::l1->get_dot1();
}
void Triangle::set_dot2(Dot *d)
{
    Triangle::l2->set_dot1(d);
}
Dot Triangle::get_dot2()
{
    return Triangle::l2->get_dot1();
}
void Triangle::set_dot3(Dot *d)
{
    Triangle::l3->set_dot1(d);
}
Dot Triangle::get_dot3()
{
    return Triangle::l3->get_dot1();
}

double Triangle::count_perimeter()
{
    return(Triangle::l1->count_length() +
           Triangle::l2->count_length() +
           Triangle::l3->count_length());
}
double Triangle::count_square()
{
    double p = Triangle::count_perimeter() / 2;
    return(sqrt(p * (p - Triangle::l1->count_length()) *
                    (p - Triangle::l2->count_length()) *
                    (p - Triangle::l3->count_length())));
}

Triangle::Triangle(Line *l1, Line *l2, Line *l3)
{
    Triangle::set_line1(l1);
    Triangle::set_line2(l2);
    Triangle::set_line3(l3);
}