#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int word_count = 0;
    bool inside_word = false;

    for (char c : s)
    {
        if (isalpha(c))
        {
            if (inside_word == false)
            {
                word_count++;
            }

            inside_word = true;
        }
        else
        {
            inside_word = false;
        }
    }

    cout << word_count;
    return 0;
}