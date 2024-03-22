#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    int counter[100001] = {0};

    for (int i = 0; i < n; i++)
    {
        int value = arr[i];
        counter[value]++;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", counter[i]);
    }

    return 0;
}