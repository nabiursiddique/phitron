#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, ans;
    char ex, eq;
    cin >> a >> ex >> b >> eq >> ans;
    if (ex == '+')
    {
        if (a + b == ans)
        {
            cout << "Yes";
        }
        else
        {
            cout << a + b;
        }
    }
    else if (ex == '-')
    {
        if (a - b == ans)
        {
            cout << "Yes";
        }
        else
        {
            cout << a - b;
        }
    }
    else
    {
        if (a * b == ans)
        {
            cout << "Yes";
        }
        else
        {
            cout << a * b;
        }
    }
    return 0;
}