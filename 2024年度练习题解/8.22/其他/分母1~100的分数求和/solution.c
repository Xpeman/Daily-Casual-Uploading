#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    long num = 1;   //��������
    
    double sum = 0.0;//���
    double num_d = 0.0;//ʵ�ʷ�ĸ
    while (num <= 100)
    {
        num_d = (double)num;//ʵ�ʷ�ĸ��ֵ
        if (num % 2 == 0)//ż���为
        {
            num_d = -num_d;
        }
        sum += 1.0 / num_d;//���
        num++;
    }
    printf("1/1 - 1 / 2 + ���� + 1 / 99 - 1 / 100 = %.2lf\n", sum);

    return 0;
}