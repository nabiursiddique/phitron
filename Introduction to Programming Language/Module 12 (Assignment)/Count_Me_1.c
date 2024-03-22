#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int twoCounter = 0;
    int threeCounter = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0 && arr[i] % 3 == 0)
        {
            twoCounter++;
        }
        else if (arr[i] % 2 == 0)
        {
            twoCounter++;
        }
        else if (arr[i] % 3 == 0)
        {
            threeCounter++;
        }
    }

    printf("%d %d", twoCounter, threeCounter);

    return 0;
}