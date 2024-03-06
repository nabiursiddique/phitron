#include <stdio.h>
int count_odd(int arr[], int n)
{
    int odd_number = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            odd_number++;
        }
    }
    return odd_number;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    printf("%d", count_odd(arr, n));
    return 0;
}