#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    //* creating constructor
    // Student(int r, int c, double g)
    // {
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }

    //* if we want to use the same name as in the class
    Student(int roll, int cls, double gpa)
    {
        // (*this).roll = roll;
        // (*this).cls = cls;
        // (*this).gpa = gpa;

        //? We can use both style either arrow or *this (arrow sign is the shortcut)

        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    Student rahim(29, 9, 4.30);
    Student karim(12, 4, 4.5);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}