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

Student fun()
{
    Student rahim(342, 5, 4.95);
    return rahim;
}

int main()
{
    Student rahimInfo = fun();
    cout << rahimInfo.roll << " " << rahimInfo.cls << " " << rahimInfo.gpa;
    return 0;
}