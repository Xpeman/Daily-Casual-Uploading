#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    long a = 0, b = 0;
    int n = 0;//分子，分母，小数位数
    scanf("%ld %ld %d", &a, &b, &n);

    double dec = 0.0;//小数部分
    dec = ((double)a / (double)b) - (a / b);//小数
    int i = 0;
    while (n)
    {
        dec *= 10.0;//扩大
        n--;//位数减少
    }
    printf("%d", (long)dec % 10);//求位数

    return 0;
}