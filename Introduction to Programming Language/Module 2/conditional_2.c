#include <stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);
    if (taka >= 100)
    {
        printf("Burger khabo");
    }
    else if (taka >= 50)
    {
        printf("Fuchka khabo");
    }
    else if (taka <= 20)
    {
        printf("Icecream khabo");
    }
    else
    {
        printf("Khabo na");
    }
    return 0;
}