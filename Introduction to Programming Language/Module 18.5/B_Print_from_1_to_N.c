#include <stdio.h>
int func(int n)
{
    if (n == 0)
    {
        return;
    }
    func(n - 1);
    printf("%d\n", n);
}
int main()
{
    int n;
    scanf("%d", &n);
    func(n);
    return 0;
}