#include <stdio.h>
int main()
{
    int sum = 0;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 5; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}