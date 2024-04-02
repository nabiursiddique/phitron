#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        cout << word << endl;
        // we can separate word from a sentence
        //  we can also count the word with this
    }
    return 0;
}

// stringstream identifies words using space