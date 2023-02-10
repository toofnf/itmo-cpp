/* main.cpp */
#include <iostream>
#include "student.cpp"
int main()
{
    string name;
    string last_name;
    // Ввод имени с клавиатуры
    cout << "Name: ";
    getline(std::cin, name);
    // Ввод фамилии
    cout << "Last name: ";
    getline(std::cin, last_name);

    int number;
    cout << "IdCard number: ";
    cin >> number;
    string cat;
    cout << "IdCard category: ";
    cin >> cat;
    IdCard* idc = new IdCard(number, cat);

    // Выделение памяти для объекта Student
    Student *student02 = new Student(name, last_name, idc);

    // Оценки
    int scores[5];
    // Сумма всех оценок
    int sum = 0;
    // Ввод промежуточных оценок
    for (int i = 0; i < 5; ++i) {
        cout << "Score " << i+1 << ": ";
        cin >> scores[i];
    // суммирование
        sum += scores[i];
    }
    // Сохранение имени и фамилии в объект класса Students
    student02->set_name(name);
    student02->set_last_name(last_name);
    // Сохраняем промежуточные оценки в объект класса Student
    student02->set_scores(scores);
    // Считаем средний балл
    float average_score = sum / 5.0;
    // Сохраняем средний балл в объект класса Student
    student02->set_average_score(average_score);
    // Выводим данные по студенту
    cout << "Average ball for " << student02->get_name() << " "
         << student02->get_last_name() << " is "
         << student02->get_average_score() << endl;

    cout << "IdCard: " << student02->getIdCard().getNumber() << endl;
    cout << "Category: " << student02->getIdCard().getCategory() << endl;

    delete student02;

    return 0;
}