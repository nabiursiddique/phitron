#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int count_word = 0;
    bool complete_word = false;
    for (char c : s)
    {
        if (isalpha(c))
        {
            if (complete_word == false)
            {
                count_word++;
                complete_word = true;
            }
        }
        else
        {
            complete_word = false;
        }
    }

    cout << count_word << endl;
    return 0;
}