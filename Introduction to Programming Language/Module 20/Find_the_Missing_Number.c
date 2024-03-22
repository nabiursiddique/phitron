#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        long long int multi;
        int a, b, c;
        scanf("%lld %d %d %d", &multi, &a, &b, &c);
        long long int multiply3 = a * b * c;
        long long int ans = multi / multiply3;
        if (multi == 0)
        {
            printf("0\n");
        }
        else if (a * b * c * ans == multi)
        {
            printf("%lld\n", ans);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}