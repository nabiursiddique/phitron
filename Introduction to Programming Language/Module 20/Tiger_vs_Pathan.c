#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int n;
        scanf("%d", &n);
        char c[n];
        scanf("%s", c);
        int tiger = 0, pathan = 0;
        for (int i = 0; i < n; i++)
        {
            if (c[i] == 'T')
            {
                tiger++;
            }
            else
            {
                pathan++;
            }
        }
        if (tiger > pathan)
        {
            printf("Tiger\n");
        }
        else if (pathan > tiger)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
    return 0;
}