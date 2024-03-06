#include <stdio.h>
int func(int n)
{
    for (int i = 1; i < n; i++)
    {
        printf("%d ", i);
    }
    printf("%d", n);
    return;
}
int main()
{
    int n;
    scanf("%d", &n);
    func(n);
    return 0;
}