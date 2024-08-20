#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    double water = 0.0, expence = 0.0;
    scanf("%lf", &water);
    if (water <= 15)
        expence = 4.0 * water / 3.0;
    else
        expence = 2.5 * water - 17.5;

    printf("%.2lf", expence);

    return 0;
}