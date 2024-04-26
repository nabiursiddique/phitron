#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    vector<int> v1(m);
    for (int i = 0; i < v1.size(); i++)
    {
        cin >> v1[i];
    }

    int n;
    cin >> n;
    vector<int> v2(n);
    for (int i = 0; i < v2.size(); i++)
    {
        cin >> v2[i];
    }

    int idx;
    cin >> idx;

    v1.insert(v1.begin() + idx, v2.begin(), v2.end());

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    return 0;
}