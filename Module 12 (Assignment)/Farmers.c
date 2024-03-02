#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int arr[i];
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int dayWillTake = (d * m1) / (m1 + m2);
        int fewerDay = d - dayWillTake;
        printf("%d", fewerDay);
        printf("\n");
    }

    return 0;
}