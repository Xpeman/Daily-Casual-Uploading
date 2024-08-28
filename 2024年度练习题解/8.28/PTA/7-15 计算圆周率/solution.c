#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double limit_val = 0.0; //定阈值
    scanf("%lf", &limit_val);

    double numerator = 1.0;//分子
    double denominator = 1.0;//分母
    double val = 0.0;//分数值

    double i = 1.0;    //分子变化
    double j = 3.0;    //分母变化

    double sum = 1.0;//圆周率

    while (1)
    {
        numerator *= i; //分子变化
        denominator *= j;   //分母变化
        val = numerator / denominator;  //分数求值
        sum += val; //sum是2/π

        if (val < limit_val)    //超出定阈值停止
            break;

        i++;
        j += 2.0;
    }
    printf("%.6f", sum * 2.0);

    return 0;
}