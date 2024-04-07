#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mark;
};

int main()
{
    int n;
    cin >> n;
    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].mark;
    }

    Student min;
    min.mark = INT_MAX;
    Student max;
    max.mark = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i].mark < min.mark)
        {
            min = arr[i];
        }
        if (arr[i].mark > max.mark)
        {
            max = arr[i];
        }
    }

    cout << "Min: " << min.name << " " << min.roll << " " << min.mark << endl;

    cout << "Max: " << max.name << " " << max.roll << " " << max.mark << endl;

    return 0;
}