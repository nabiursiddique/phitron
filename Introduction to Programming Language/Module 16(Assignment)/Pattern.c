#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s, k;
    s = 1;
    k = n - s;

    for (int i = 1; i < 2 * n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= s; j++)
        {
            if (i % 2 != 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        if (i < n)
        {
            s += 2;
            k--;
        }
        else
        {
            s -= 2;
            k++;
        }

        printf("\n");
    }

    return 0;
}