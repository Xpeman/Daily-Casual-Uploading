#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
    long num = 0;   //�õ�������
    long k = 1; //��λȨ��
    scanf("%ld", &num);

    int new_num = 0;
    int flag = 0; //�ı������0��1
    while (num)
    {
        if (num % 10 % 2 == 0)   //ȡ��λ�ϵ��������ж���ż
            flag = 0;
        else
            flag = 1;

        new_num += flag * k; //�����仯
        num /= 10;
        k *= 10;    //��λȨ�ص���
    }

    printf("%d", new_num);
    return 0;
}