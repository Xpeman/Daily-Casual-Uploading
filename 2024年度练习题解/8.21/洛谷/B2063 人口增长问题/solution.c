#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    double people, year;
    scanf("%lf %lf", &people, &year);

    for (; year > 0; year--)
    {
        people *= 1.001;
    }
    printf("%.4lf", people);

    return 0;
}