#include "line.cpp"

class Triangle
{
    public:
        void set_line1(Line*);
        Line get_line1();
        void set_line2(Line*);
        Line get_line2();
        void set_line3(Line*);
        Line get_line3();

        Dot get_dot1();
        void set_dot1(Dot*);
        Dot get_dot2();
        void set_dot2(Dot*);
        Dot get_dot3();
        void set_dot3(Dot*);

        double count_perimeter();
        double count_square();

        Triangle(Line*, Line*, Line*);

    private:
        Line* l1;
        Line* l2;
        Line* l3;
};