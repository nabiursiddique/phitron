#include <stdio.h>
int arraySum(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    else
    {
        int sum = arr[n - 1] + arraySum(arr, n - 1);
        return sum;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = arraySum(arr, n);
    printf("%d", sum);
    return 0;
}

//* Not accepted in codeforces