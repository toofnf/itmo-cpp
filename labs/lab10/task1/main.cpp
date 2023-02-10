#include <iostream>
#include "triangle.cpp"

using namespace std;

int main() {

    Dot *d1 = new Dot(0, 4);
    Dot *d2 = new Dot(0, 0);
    Dot *d3 = new Dot(3, 0);

    Line *l1 = new Line(d1, d2);
    cout << "Line 1 length: " << l1->count_length() << endl;

    Line *l2 = new Line(d1, d3);
    cout << "Line 2 length: " << l2->count_length() << endl;

    Line *l3 = new Line(d2, d3);
    cout << "Line 3 length: " << l3->count_length() << endl;

    Triangle *t = new Triangle(l1, l2, l3);
    cout << "Perimeter of the triangle with sides "
         << t->get_line1().count_length() << ", "
         << t->get_line2().count_length() << " and "
         << t->get_line3().count_length() << " is "
         << t->count_perimeter() << endl;

    cout << "Square of the triangle with sides "
         << t->get_line1().count_length() << ", "
         << t->get_line2().count_length() << " and "
         << t->get_line3().count_length() << " is "
         << t->count_square() << endl;

    return 0;
}
