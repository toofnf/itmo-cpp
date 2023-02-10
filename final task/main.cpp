#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Person{
public:
    virtual void set_name(string n)
    {
        name = n;
    }
    virtual void set_surname(string s)
    {
        surname = s;
    }
    virtual void set_phoneNumber(string p)
    {
        phoneNumber = p;
    }
    virtual void set_date(string d)
    {
        date = d;
    }
    virtual void set_address(string a)
    {
        address = a;
    }
    virtual string get_name()
    {
        return name;
    }
    virtual string get_surname()
    {
        return surname;
    }
    virtual string get_phoneNumber()
    {
        return phoneNumber;
    }
    virtual string get_date()
    {
        return date;
    }
    virtual string get_address()
    {
        return address;
    }
    virtual string show_person() = 0;
    Person(string na, string su, string ph, string da, string ad)
    {
        set_name(na);
        set_surname(su);
        set_phoneNumber(ph);
        set_date(da);
        set_address(ad);
    }
private:
    string name;
    string surname;
    string phoneNumber;
    string date;
    string address;
};

class Student: public Person
{
public:
    void set_grade(int grade)
    {
        this->grades.push_back(grade);
    }
    vector<int> get_grades()
    {
        return this->grades;
    }
    void set_fails(int f)
    {
        this->fails = f;
    }
    int get_fails()
    {
        return this->fails;
    }
    string show_person()
    {
        string s = Person::show_person() + "Job: student\n" + "Grades: ";
        int k = 1;
        for (auto &grade : this->grades)
        {
            s = s + to_string(grade) + " ";
        }
        return s;
    }
    Student(string na, string su, string ph, string da, string ad) : Person(na, su, ph, da, ad)
    {
        fails = 0;
    }
private:
    vector<int> grades;
    int fails;
};

class Teacher: public Person
{
public:
    void add_student(Student s)
    {
        this->listOfStudents.push_back(s);
    }
    void set_grade(int g, Student s)
    {
        s.set_grade(g);
    }
    void check_homework(Student s)
    {
        cout << "What grade does the teacher give for this homework (from 1 to 5)?" << endl;
        int g;
        g = 0;
        do {
            cin >> g;
        } while (g >= 1 and g <= 5);
        this->set_grade(g, s);
        if (g == 1)
        {
            s.set_fails(s.get_fails() + 1);
        }
    }
    vector<Student> get_listOfStudents()
    {
        return this->listOfStudents;
    }
    string show_person()
    {
        string s = "Name: " + get_name() + "\n" +
                   "Surname: " + get_surname() + "\n" +
                   "Phone number: " + get_phoneNumber() + "\n" +
                   "Date of birth: " + get_date() + "\n" +
                   "Address: " + get_address() + "\n" +
                   "Job: teacher\n" +
                   "List of students: ";
        int k = 1;
        for (auto &student : this->listOfStudents)
        {
            s = s + "\n" + to_string(k) + ") " + student.get_name() + " " + student.get_surname();
        }
        return s;
    }
    void expel_students()
    {
        int k = 0;
        for (auto &student : this->listOfStudents)
        {
            if (student.get_fails() >= 3)
            {
                this->listOfStudents.erase(listOfStudents.begin() + k);
                k -= 1;
            }
            k += 1;
        }
    }
    Teacher(string na, string su, string ph, string da, string ad) :
    Person(na, su, ph, da, ad){}
private:
    vector<Student> listOfStudents;
};

Teacher create_user_teacher()
{
    cout << "Enter teacher's name: " << endl;
    string name;
    cin >> name;

    cout << "Enter teacher's surname: " << endl;
    string surname;
    cin >> surname;

    cout << "Enter teacher's phone number: " << endl;
    string phone;
    cin >> phone;

    cout << "Enter teacher's date of birth: " << endl;
    string date;
    cin >> date;

    cout << "Enter teacher's adress: " << endl;
    string address;
    cin >> address;

    return Teacher(name, surname, phone, date, address);
}

Student create_user_student()
{
    cout << "Enter student's name: " << endl;
    string name;
    cin >> name;

    cout << "Enter student's surname: " << endl;
    string surname;
    cin >> surname;

    cout << "Enter student's phone number: " << endl;
    string phone;
    cin >> phone;

    cout << "Enter student's date of birth: " << endl;
    string date;
    cin >> date;

    cout << "Enter student's adress: " << endl;
    string address;
    cin >> address;

    return Student(name, surname, phone, date, address);
}

int main()
{
    *Teacher michael = create_user_teacher();

    *Student tamara = create_user_student();
    *Student pavel = create_user_student();
    *Student igor = create_user_student();
    *Student galina = create_user_student();
    vector<*Student> students = {tamara, pavel, igor, galina};

    for (auto &student : students)
    {
        michael.add_student(student);
    }

    michael.show_person();

    michael.set_grade(5, tamara);
    michael.set_grade(1, igor);
    michael.set_grade(2, igor);
    michael.set_grade(1, igor);
    michael.set_grade(5, galina);
    michael.set_grade(1, igor);

    for (auto &student : students)
    {
        student.show_person();
    }

    michael.expel_students();
    michael.show_person();

    return 0;
}