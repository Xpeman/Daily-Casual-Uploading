#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    long a = 0, b = 0;
    int n = 0;//���ӣ���ĸ��С��λ��
    scanf("%ld %ld %d", &a, &b, &n);

    double dec = 0.0;//С������
    dec = ((double)a / (double)b) - (a / b);//С��
    int i = 0;
    while (n)
    {
        dec *= 10.0;//����
        n--;//λ������
    }
    printf("%d", (long)dec % 10);//��λ��

    return 0;
}