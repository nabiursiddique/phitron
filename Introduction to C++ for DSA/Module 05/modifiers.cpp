#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string a = "Hello";
    // string b = "world";

    // a = a + b;
    // a+=b;
    // a.append(b);
    // cout << a << endl;
    // cout << b << endl;

    // a = "HelloA"; ->works
    // a = a + "A"; ->works
    // a[5] = 'A'; ->didn't work
    // a.push_back('A'); // works
    // a.pop_back();
    // a.pop_back();
    // cout << a << endl;

    // a = "gelo";
    // a.assign("Gelo");
    // cout << a << endl;

    string a = "HelloWorld";
    // first er ta start index r porer ta koyta character delete korbo seta
    // a.erase(4, 1);

    // a.replace(4, 3, "so");

    a.insert(5, "nabil");
    cout << a << endl;

    return 0;
}