#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, x;
        cin >> s >> x;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == x[0])
            {
                bool find = true;
                for (int j = 0; j < x.size(); j++)
                {
                    if (s[i + j] != x[j])
                    {
                        find = false;
                    }
                }
                if (find)
                {
                    s.replace(i, x.size(), "#");
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}