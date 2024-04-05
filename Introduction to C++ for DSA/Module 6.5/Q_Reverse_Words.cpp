#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool firstWord = true;

    while (ss >> word)
    {
        int n = word.length();
        for (int i = 0; i < n / 2; i++)
        {
            char temp = word[i];
            word[i] = word[n - i - 1];
            word[n - i - 1] = temp;
        }

        if (!firstWord)
        {
            cout << " ";
        }
        firstWord = false;
        cout << word;
    }
    return 0;
}