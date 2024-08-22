#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    int num = 0;
    int max = 0;

    int i = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        max = num > max ? num: max;
    }
    printf("这10个数中，最大的是 %d\n", max);
    return 0;
}