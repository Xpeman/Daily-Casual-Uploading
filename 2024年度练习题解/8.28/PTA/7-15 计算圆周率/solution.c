#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double limit_val = 0.0; //����ֵ
    scanf("%lf", &limit_val);

    double numerator = 1.0;//����
    double denominator = 1.0;//��ĸ
    double val = 0.0;//����ֵ

    double i = 1.0;    //���ӱ仯
    double j = 3.0;    //��ĸ�仯

    double sum = 1.0;//Բ����

    while (1)
    {
        numerator *= i; //���ӱ仯
        denominator *= j;   //��ĸ�仯
        val = numerator / denominator;  //������ֵ
        sum += val; //sum��2/��

        if (val < limit_val)    //��������ֵֹͣ
            break;

        i++;
        j += 2.0;
    }
    printf("%.6f", sum * 2.0);

    return 0;
}