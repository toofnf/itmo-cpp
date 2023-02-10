#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class human {
    public:
        // Получение ФИО человека
        std::string get_full_name()
        {
            std::ostringstream full_name;
            full_name << this->last_name << " "
                      << this->name << " "
                      << this->second_name;
            return full_name.str();
        }
        virtual void getdata()
        {
            cout << "\nВведите имя: ";
            cin >> name;
            cout << "\nВведите фамилию: ";
            cin >> last_name;
            cout << "\nВведите отчество: ";
            cin >> second_name;
        }
        virtual void putdata()
        {
            cout << "\nИмя: " << name;
            cout << "\nФамилия: " << last_name;
            cout << "\nОтчество: " << second_name;

        }
    private:
        std::string name; // имя
        std::string last_name; // фамилия
        std::string second_name; // отчество
};

class teacher : public human {
    public:
                // Получение количества учебных часов
                unsigned int get_work_time()
                {
                    return this->work_time;
                }
        void getdata()
        {
            human::getdata();
            cout << "Введите число учебных часов:";
            cin >> work_time;
        }
        void putdata()
        {
            human::putdata();
            cout << "\nУчебных часов:" << work_time;
        }
    private:
        // Учебные часы
        unsigned int work_time;
};

class student : public human {
    public:
        // Получение среднего балла студента
        float get_average_score()
        {
            // Общее количество оценок
            unsigned int count_scores = this->scores.size();
            // Сумма всех оценок студента
            unsigned int sum_scores = 0;
            // Средний балл
            float average_score;
            for (unsigned int i = 0; i < count_scores; ++i)
            {
                sum_scores += this->scores[i];
            }
            average_score = (float) sum_scores / (float) count_scores;
            return average_score;
        }
        void getdata()
        {
            human::getdata();
            cout << "Введите оценки:";
            std::vector<int> s;
            int a;
            cin >> a;
            while (a > 0)
            {
                s.push_back(a);
                cin >> a;
            }
            scores = s;
        }
        void putdata()
        {
            human::putdata();
            cout << "\nОценки: ";
            for (int i: scores)
                cout << i << '\t';
        }
    private:
        // Оценки студента
        std::vector<int> scores;
};

int main()
{
    //SetConsoleOutputCP(1251);
    human* people [100];

    int n = 0;
    char choice;
    do
    {
        cout << "\nВводить данные для учителя или студента (t/s)?";
        cin >> choice;
        if(choice == 't')
            people[n] = new teacher;
        else
            people[n] = new student;
        people[n++]->getdata();
        cout << "Продолжать((у/n)?";
        cin >> choice;
    }
    while(choice == 'y');

    for(int j=0; j<n; j++) //цикл по всем объектам
        people[j]->putdata(); //вывести данные о публикации
    cout << endl;
    return 0;
}