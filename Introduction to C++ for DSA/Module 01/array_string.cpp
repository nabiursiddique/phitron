#include <iostream>
#include <string>
using namespace std;
int main()
{
    char s[100];
    // cin >> s;
    int a;
    cin >> a;
    getchar();
    //* To get a full line with space string in c++, we don't use it normally
    cin.getline(s, 100);
    cout << a << endl;
    cout << s << endl;
    return 0;
}