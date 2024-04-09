#include <bits/stdc++.h>
using namespace std;

void printChar()
{
    int n;
    cin >> n;
    char c;
    cin >> c;
    bool firstChar = true;
    for (int i = 0; i < n; i++)
    {
        if (firstChar)
        {
            cout << c;
            firstChar = false;
        }
        else
        {
            cout << " " << c;
        }
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        printChar();
    }
    return 0;
}