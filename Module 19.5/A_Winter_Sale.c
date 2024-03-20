#include <stdio.h>
int main()
{
    float discount, currentPrice, originalPrice;
    scanf("%f %f", &discount, &currentPrice);
    originalPrice = currentPrice / (1 - discount / 100);
    printf("%0.2f", originalPrice);
    return 0;
}