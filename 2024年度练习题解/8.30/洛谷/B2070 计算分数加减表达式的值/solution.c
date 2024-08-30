#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    float n = 0.0f;
    scanf("%f", &n);

    float den = 0.0f;//·ÖÄ¸
    float sum = 0.0f;//ÇóºÍ
    float flag = 1;
    for (den = 1.0; den <= n; den++)
    {
        sum += flag * (1.0 / den);
        flag = -flag;
    }
    printf("%.4f", sum);

    return 0;
}