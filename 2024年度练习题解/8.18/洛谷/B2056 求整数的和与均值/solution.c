#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    int n = 0, num = 0;
    scanf("%d", &n);

    int i = 0;
    int sum = 0;
    for (i = 0; i < n; i++)  //n个整数
    {
        scanf("%d", &num);
        sum += num; //求和
    }
    printf("%d %.5lf", sum, (double)sum / (double)n);   //打印和与均值

    return 0;
}