#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int solved[26] = {0};

        for (char c : s)
        {
            int value = c - 'A';

            if (solved[value] == 0)
            {
                solved[value] += 2;
            }
            else
            {
                solved[value] += 1;
            }
        }

        int sum = 0;

        for (int i = 0; i < 26; i++)
        {
            if (solved[i] != 0)
            {
                sum = sum + solved[i];
            }
        }

        cout << sum << endl;
    }
    return 0;
}

//* using frequency array / counting array technic