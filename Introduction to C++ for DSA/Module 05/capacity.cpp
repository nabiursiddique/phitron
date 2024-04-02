#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s = "Hello world";

    // To get the size of a string
    // cout << s.size() << endl;

    // how many length of string my machine can take
    // cout << s.max_size() << endl;

    // string a;
    // cout << a.capacity() << endl;

    // string s = "Hello";
    // cout << s << endl;
    // we use it to clear a string
    // s.clear();
    // cout << s << endl;
    // cout << s.size() << endl;

    // string s = "hello";
    // if (s.empty() == true)
    //     cout << "empty" << endl;
    // else
    //     cout << "not empty" << endl;

    string s;
    cin >> s; // cin dea string a space naua jay na
    // s.resize(5);
    // s.resize(15, 'x');
    // cout << s.size() << endl;
    // cout << s << endl;

    s.resize(5);
    cout << s << endl;
    s.resize(11, 'x');
    cout << s << endl;

    return 0;
}