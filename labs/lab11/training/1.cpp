#include <iostream>

using namespace std;

class Distance
{
    private:
        int feet;
        float inches;
        const float MTF;
    public:
        Distance ( ) : feet (0), inches (0.0), MTF (3.280833F) { }
        Distance (int ft, float in) : feet (ft), inches (in), MTF (3.280833F) { }
        Distance (float meters) : MTF (3.280833F)
        {
            float fltfeet = MTF * meters; // перевод в футы
            feet = int (fltfeet); // число полных футов
            inches = 12 * (fltfeet - feet); // остаток - это дюймы
        }

        void getdist()
        {
            cout <<"\nВведите число футов: ";
            cin >> feet;
            cout <<"\nВведите число дюймов: ";
            cin >> inches;
        }
        void showdist()
        {
            cout << feet << "\'-" << inches << "\"\n";
        }

        Distance operator+ (const Distance&) const;
        Distance operator- (const Distance&) const;

        Distance operator+ (double) const;
        Distance operator- (double) const;

        operator float( ) const
        {
            float fracfeet = inches / 12;
            fracfeet += static_cast<float>( feet );
            return fracfeet / MTF;
        }
        friend std::ostream& operator<< (std::ostream &out, const Distance &dist);
};

Distance Distance::operator+ (const Distance& d2) const
{
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    if (i>= 12.0)
    {
        i -= 12.0;
        f++;
    }
    return Distance(f, i);
}

Distance Distance::operator- (const Distance& d2) const
{
    int f = feet - d2.feet;
    float i = inches - d2.inches;
    if (i< 0)
    {
        i += 12.0;
        f--;
    }
    return Distance (f, i);
}

Distance Distance::operator+ (double m) const
{
    Distance d = Distance(m);
    int f = feet + d.feet;
    float i = inches + d.inches;
    if (i>= 12.0)
    {
        i -= 12.0;
        f++;
    }
    return Distance(f, i);
}

Distance Distance::operator- (double m) const
{
    Distance d = Distance(m);
    int f = feet - d.feet;
    float i = inches - d.inches;
    if (i < 0) {
        i += 12.0;
        f--;
    }
    return Distance(f, i);
}

std::ostream& operator<< (std::ostream &out, const Distance &dist)
{
    out << dist.feet << "\'-" << dist.inches << "\"\n";
    return out;
}

int main() {
    Distance dist1 = Distance(2.8);
    Distance dist2 = 2.8 + dist1;
    Distance dist3 = 2.8 - dist1 - 2 + dist2;
    cout << dist1 << dist2 << dist3;
    return 0;
}
