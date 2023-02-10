#include "dot.cpp"
#include<cmath>

class Line
{
    public:
        void set_dot1(Dot*);
        Dot get_dot1();
        void set_dot2(Dot*);
        Dot get_dot2();
        double count_length();
        Line(Dot*, Dot*);
    private:
        Dot* d1;
        Dot* d2;
};