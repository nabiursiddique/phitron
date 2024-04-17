#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> counts(26, 0);
    for (char c : s)
    {
        counts[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (counts[i] > 0)
        {
            char letter = 'a' + i;
            cout << letter << " : " << counts[i] << endl;
        }
    }
    return 0;
}