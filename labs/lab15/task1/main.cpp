#include <iostream>
#include <map>

using namespace std;

struct StudentGrade
{
    std::string studentName;
    char grade;
};

int main() {
    map <string, char> journal;
    StudentGrade j;
    j.studentName = "Иванов";
    cout << "Введите оценку для Иванова." << endl;
    cin >> journal[j.studentName];
    cout << "Студент(ка) " << j.studentName << " получил(а) оценку " << journal[j.studentName];
    return 0;
}
