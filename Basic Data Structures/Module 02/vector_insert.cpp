#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    vector<int> v2 = {1, 2, 3, 4, 5};

    //* vector a insert er khetre pointer dite hoi index kaj kore na
    // v.insert(v.begin() + 5, 60);
    // v.insert(v.begin() + 2, 200);

    //* if we want to insert a full vector
    v.insert(v.begin() + 2, v2.begin(), v2.end());

    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}