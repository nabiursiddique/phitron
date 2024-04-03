#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{
    Person *nabiur = new Person("Nabiur Siddique", 24);
    Person *sakib = new Person("Sakib Al Hasan", 23);

    //* we can copy sakib to nabiur
    // nabiur->name = sakib->name;
    // nabiur->age = sakib->age;

    //* we can do this easily
    *nabiur = *sakib;

    delete sakib;
    cout << nabiur->name << " " << nabiur->age;

    return 0;
}