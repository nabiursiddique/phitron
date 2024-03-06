#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int s, k;
    s = 1;
    k = n - s;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf(" ");
        }
        for (int j = s; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
        s++;
        k--;
    }

    return 0;
}