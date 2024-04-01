#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[100];
    char section;
    int total_mark;

    Student(int id, char name[], char section, int total_mark)
    {
        this->id = id;
        strcpy(this->name, name);
        this->section = section;
        this->total_mark = total_mark;
    }
};

Student *compare_marks(Student *std1, Student *std2, Student *std3)
{
    if (std1->total_mark > std2->total_mark && std1->total_mark > std3->total_mark)
    {
        return std1;
    }
    else if (std2->total_mark > std1->total_mark && std2->total_mark > std3->total_mark)
    {
        return std2;
    }
    else
    {
        return std3;
    }
}

int main()
{
    int test;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        int id;
        char name[100];
        char section;
        int total_mark;
        cin >> id >> section >> total_mark;
        getchar();
        cin.getline(name, 100);

        Student *std_1 = new Student(id, name, section, total_mark);

        Student *std_2 = new Student(id, name, section, total_mark);
        cin >> id >> section >> total_mark;
        getchar();
        cin.getline(name, 100);
        std_2->id = id;
        strcpy(std_2->name, name);
        cin >> section;
        cin >> total_mark;

        Student *std_3 = new Student(id, name, section, total_mark);
        cin >> id >> section >> total_mark;
        cin.getline(name, 100);
        std_3->id = id;
        strcpy(std_3->name, name);
        cin >> section;
        cin >> total_mark;

        Student *highest_mark = compare_marks(std_1, std_2, std_3);
        cout << highest_mark->id << " " << highest_mark->name << " " << highest_mark->section << " " << highest_mark->total_mark << endl;
    }

    return 0;
}
