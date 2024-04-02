#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    // cin.ignore();
    getchar();
    string s;
    // cin >> s; //we cannot get space with that
    getline(cin, s);
    cout << x << endl;
    cout << s << endl;
    // cout << s.size() << endl;
    return 0;
}

//* space na thakle getline use korar dorkar nai ojotha jhamela korbe. akta integer intput nauar port getline use korle oy string r print hobe na, tokhon cin use korte hobe.karon getline enter nay