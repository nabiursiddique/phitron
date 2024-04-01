#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    int age;
    char name[100];

    Student(int id, int age, char name[])
    {
        this->id = id;
        this->age = age;
        strcpy(this->name, name);
    }
};

Student *compare_student(Student *std1, Student *std2)
{

    // std1->age < std2->age ? cout << std1->name << " Student 1 choto" << endl : cout << std2->name << " Student 2 choto" << endl;

    // cout << (std1->age < std2->age ? std1->name : std2->name) << " younger" << endl;

    // * we can return from here
    return std1->age < std2->age ? std1 : std2;
}

int main()
{
    char name[100];
    int id, age;
    cin >> id >> age;
    getchar();
    cin.getline(name, 100);
    Student *nabil = new Student(id, age, name);

    Student *arnob = new Student(id, age, name);
    cin >> id;
    cin >> age;
    getchar();
    cin.getline(name, 100);
    arnob->id = id;
    arnob->age = age;
    strcpy(arnob->name, name);

    Student *younger = compare_student(nabil, arnob);
    cout << younger->name << " "
         << "with " << younger->age << " is younger." << endl;
    return 0;
}