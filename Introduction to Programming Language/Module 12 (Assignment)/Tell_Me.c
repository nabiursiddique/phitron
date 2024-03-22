#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d ", &arr[i]);
        }
        int target;
        scanf("%d", &target);

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == target)
            {
                count++;
            }
        }
        if (count > 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}