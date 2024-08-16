#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    double a = 0.0, b = 0.0, c = 0.0;
    scanf("%lf %lf %lf", &a, &b, &c);

    double x1 = 0.0, x2 = 0.0;

    if (((b * b) - (4.0 * a * c)) >= 0.0)
    {
        x1 = (-b + sqrt((b * b) - (4.0 * a * c))) / (2.0 * a);
        x2 = (-b - sqrt((b * b) - (4.0 * a * c))) / (2.0 * a);

        if (x1 > x2)
            printf("x1=%.5lf;x2=%.5lf", x2, x1);
        else if (x1 < x2)
            printf("x1=%.5lf;x2=%.5lf", x1, x2);
        else
            printf("x1=x2=%.5lf", x1);
    }
    else
    {
        printf("No answer!\n");
    }

    return 0;
}