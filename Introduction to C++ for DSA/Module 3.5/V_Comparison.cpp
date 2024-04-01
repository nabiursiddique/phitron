#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    char c;
    cin >> m >> c >> n;
    if (c == '>')
    {
        if (m > n)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    else if (c == '<')
    {
        if (m < n)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    else
    {
        if (m == n)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    return 0;
}