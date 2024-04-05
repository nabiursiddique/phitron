#include <bits/stdc++.h>
using namespace std;

int summationOfDigit(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int reminder = n % 10;
        n = n / 10;
        sum = sum + reminder;
    }
    return sum;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string ticket;
        cin >> ticket;
        string first3 = ticket.substr(0, 3);
        string last3 = ticket.substr(3, 3);
        int first3Int = stoi(first3);
        int last3Int = stoi(last3);
        int sumOfFirst3 = summationOfDigit(first3Int);
        int sumOfLast3 = summationOfDigit(last3Int);
        if (sumOfFirst3 == sumOfLast3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}