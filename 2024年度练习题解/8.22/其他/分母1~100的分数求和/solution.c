#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    long num = 1;   //遍历变量
    
    double sum = 0.0;//求和
    double num_d = 0.0;//实际分母
    while (num <= 100)
    {
        num_d = (double)num;//实际分母赋值
        if (num % 2 == 0)//偶数变负
        {
            num_d = -num_d;
        }
        sum += 1.0 / num_d;//求和
        num++;
    }
    printf("1/1 - 1 / 2 + …… + 1 / 99 - 1 / 100 = %.2lf\n", sum);

    return 0;
}