#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    long num = 0, k = 0;//m, k
    scanf("%ld %ld", &num, &k);

    int count = 0;//������
    for (; num > 0; num /= 10)//����λֵ
    {
        if (num % 10 == 3)//��3��1
        {
            count++;
        }
    }
    if (count == k)//���ռ�������k
    {
        printf("YES\n");
    }
    else//������
    {
        printf("NO\n");
    }
    return 0;
}