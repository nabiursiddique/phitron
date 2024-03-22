#include <stdio.h>
#include <stdlib.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int n;
        scanf("%d", &n);

        int arrA[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arrA[i]);
        }

        int arrB[n];
        for (int i = 0; i < n; i++)
        {
            arrB[i] = arrA[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arrB[i] > arrB[j])
                {
                    int temp = arrB[i];
                    arrB[i] = arrB[j];
                    arrB[j] = temp;
                }
            }
        }

        int arrC[n];
        for (int i = 0; i < n; i++)
        {
            arrC[i] = abs(arrA[i] - arrB[i]);
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arrC[i]);
        }

        printf("\n");
    }
    return 0;
}