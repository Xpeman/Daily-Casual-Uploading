#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    double Open, Close, Low, High;
    scanf("%lf %lf %lf %lf", &Open, &High, &Low, &Close);

    //��������
    if (Open > Close)
        printf("BW-Solid");
    else if (Open < Close)
        printf("R-Hollow");
    else
        printf("R-Cross");

    //������
    if (Low < Open && Low < Close)
    {
        printf(" with Lower Shadow");
        if (High > Open && High > Close)
            printf(" and Upper Shadow");
    }
    else if (High > Open && High > Close)
        printf(" with Upper Shadow");

    return 0;
}