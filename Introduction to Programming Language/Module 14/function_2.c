#include <stdio.h>

int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int s = a + b;
    return s;
}
int main()
{
    int s = sum();
    printf("%d", s);
    return 0;
}

//? Difference between using void and without any parameter
//* If you use void then if you give any parameter then it will show you a error.
//* But if you use nothing then it will not use the parameter but it will also not show any error it will just ignore that.