#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 2, 3, 2, 4, 5, 3, 2, 1};

    // replace(v.begin(), v.end(), 2, 100);

    //* If I don't want to replace till last
    replace(v.begin(), v.end() - 2, 2, 100);

    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}