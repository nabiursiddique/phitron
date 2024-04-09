#include <bits/stdc++.h>
using namespace std;

int calculator(int m, int n)
{
    long long sum = 0;
    for (int i = 2; i <= n; i += 2)
    {
        long long multiply = 1;
        for (int j = 0; j < i; j++)
        {
            multiply = multiply * m;
        }
        sum = sum + multiply;
    }
    cout << sum;
}

int main()
{
    int m, n;
    cin >> m >> n;
    calculator(m, n);
    return 0;
}
