#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    double M;
    scanf("%lf", &M);

    double T_walk = M / 1.2;
    double T_bike = 23.0 + 27.0 + (M / 3.0);
    if (T_walk < T_bike)
        printf("Walk\n");
    else if (T_bike < T_walk)
        printf("Bike\n");
    else
        printf("All\n");

    return 0;
}