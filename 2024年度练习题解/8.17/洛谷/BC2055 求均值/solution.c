#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int n = 0;
    scanf("%d", &n);

    int i = 0;
    float num = 0.0f;
    float sum = 0.0f;
    float ave = 0.0f;
    for (i = 0; i < n; i++)
    {
        scanf("%f", &num);
        sum += num;
    }
    ave = sum / n;
    printf("%.4f", ave);

    return 0;
}