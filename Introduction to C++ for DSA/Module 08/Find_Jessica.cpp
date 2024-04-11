#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string words;
    bool find = false;
    while (ss >> words)
    {
        if (words == "Jessica")
        {
            find = true;
        }
    }

    if (find)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
