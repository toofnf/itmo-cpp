#include <iostream>
#include <string>

using namespace std;

class SNP
{
public:
    void set_name(string n)
    {
        name = n;
    }
    void set_surname(string s)
    {
        surname = s;
    }
    void set_patronymic(string p)
    {
        patronymic = p;
    }
    string get_name()
    {
        return name;
    }
    string get_surname()
    {
        return surname;
    }
    string get_patronymic()
    {
        return patronymic;
    }
    SNP(string name, string surname, string patronymic)
    {
        set_name(name);
        set_surname(surname);
        set_patronymic(patronymic);
    }
    void print_info()
    {
        cout << "The surname, name and patronymic of this person are " << get_surname() << " " << get_name() << " " << get_patronymic() << ".";
    }
private:
    string name;
    string surname;
    string patronymic;
};

SNP create_human()
{
    cout << "Please enter the name: " << endl;
    string name;
    cin >> name;
    cout << "Please enter the surname: " << endl;
    string surname;
    cin >> surname;
    cout << "Please enter the patronymic: " << endl;
    string patronymic;
    cin >> patronymic;
    return(SNP(name, surname, patronymic));
}

int main() {
    SNP toma = create_human();
    toma.print_info();
    return 0;
}
