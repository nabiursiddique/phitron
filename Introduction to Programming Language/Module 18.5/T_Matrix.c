#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // primary diagonal sum
    int primaryDiagonalSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                primaryDiagonalSum = primaryDiagonalSum + arr[i][j];
            }
        }
    }

    // secondary diagonal sum
    int secondaryDiagonalSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                secondaryDiagonalSum = secondaryDiagonalSum + arr[i][j];
            }
        }
    }
    int sum = primaryDiagonalSum - secondaryDiagonalSum;
    printf("%d", abs(sum));

    return 0;
}