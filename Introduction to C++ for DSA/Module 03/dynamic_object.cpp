#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    Student rahim(20, 5, 4.23);
    Student *karim = new Student(20, 5, 4.23);
    cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;
    return 0;
}