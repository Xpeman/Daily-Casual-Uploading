#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int n = 0;
    scanf("%d", &n);

    double p = 1;  //��ĸ
    double q = 2;  //����
    double sum = 0.0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        sum += q / p;   //���
        int temp = q;   //temp����ǰһ��qֵ
        q = p + q;  //q�仯
        p = temp;   //p�仯
    }
    printf("%.4f", sum);

    return 0;
}