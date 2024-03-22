#include <stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);
    if (taka >= 5000)
    {
        printf("Cox's bazar jabo\n");
        if (taka >= 10000)
        {
            printf("Okhan theke Saintmartin jabo\n");
        }
        else
        {
            printf("Ferot chole jabo\n");
        }
    }
    else
    {
        printf("Kothau jabo na\n");
    }
    return 0;
}