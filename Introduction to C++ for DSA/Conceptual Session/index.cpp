#include <bits/stdc++.h>
using namespace std;

void fun2()
{
    int n = 30;
    cout << "Iam from fun2" << endl;
}

void fun1()
{
    int n = 20;
    cout << "Iam from fun1" << endl;
    fun2();
}
int main()
{
    int a = 10;
    cout << "Iam from main" << endl;
    fun1();
    return 0;
}