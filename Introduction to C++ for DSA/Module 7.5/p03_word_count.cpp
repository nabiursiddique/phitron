#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, word;
    getline(cin, s);
    cin >> word;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        bool match = true;
        for (int j = 0; j < word.size(); j++)
        {
            if (s[i + j] != word[j])
            {
                match = false;
                break;
            }
        }
        if (match)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}