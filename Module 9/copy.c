#include <stdio.h>
int main()
{
    int m;
    scanf("%d", &m);
    int arr1[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int n;
    scanf("%d", &n);
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int ans[m + n];
    for (int i = 0; i < m; i++)
    {
        ans[i] = arr1[i];
    }

    int i = m;
    for (int j = 0; j < n; j++)
    {
        ans[i] = arr2[j];
        i++;
    }

    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}