#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    int n = 0, num = 0;
    scanf("%d", &n);

    int i = 0;
    int sum = 0;
    for (i = 0; i < n; i++)  //n������
    {
        scanf("%d", &num);
        sum += num; //���
    }
    printf("%d %.5lf", sum, (double)sum / (double)n);   //��ӡ�����ֵ

    return 0;
}