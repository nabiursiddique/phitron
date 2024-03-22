#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s, k;
    // To calculate how many line will be there corresponding to n
    int line = n / 2 + 6;
    s = line - 1;
    k = 1;
    // Upper part of the pattern
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        s--;
        k = k + 2;
        printf("\n");
    }

    // Lower part of the pattern
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}