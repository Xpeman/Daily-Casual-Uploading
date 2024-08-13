#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    double x = 0.0f;
    scanf("%lf", &x);

    if (x >= 0.0 && x < 5.0)
        printf("%.3lf", -x + 2.5);
    else if (x > 5.0 && x < 10.0)
        printf("%.3lf", (2 - (1.5 * ((x * x) - (3.0 * 3.0))));
    else if (x >= 10 && x < 20.0)
            printf("%.3lf", (x / 2.0 - 1.5));

    return 0;
}


