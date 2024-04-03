#include <bits/stdc++.h>
using namespace std;

// reverse word printing using recursion
void print(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        print(ss);
        cout << word << endl;
    }
}

// word printing using recursion
// void print(stringstream &ss)
// {
//     string word;
//     if (ss >> word)
//     {
//         cout << word << endl;
//         print(ss);
//     }
// }

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    // string word;
    // while (ss >> word)
    // {
    //     cout << word << endl;
    // }
    print(ss);
    return 0;
}