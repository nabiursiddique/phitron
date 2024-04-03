#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;
    Person(string nam, int ag, int m1, int m2)
    {
        name = nam;
        age = ag;
        marks1 = m1;
        marks2 = m2;
    }
    void hello()
    {
        cout << name << " " << age << endl;
    }
    int totalMarks()
    {
        return marks1 + marks2;
    }
};

int main()
{
    Person nabil("Nabiur Siddiqe", 24, 100, 20);
    // cout << nabil.name << " " << nabil.age << endl;
    // nabil.hello();
    cout << nabil.totalMarks();
    return 0;
}