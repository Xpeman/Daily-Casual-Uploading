#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int n = 0;
    scanf("%d", &n);

    double p = 1;  //分母
    double q = 2;  //分子
    double sum = 0.0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        sum += q / p;   //求和
        int temp = q;   //temp留存前一个q值
        q = p + q;  //q变化
        p = temp;   //p变化
    }
    printf("%.4f", sum);

    return 0;
}