#define _CRT_SECURE_NO_WARNINGS

/*
����
ţţ�ո�ѧ�������Ķ��壺����ֵָ�ڴ���1����Ȼ���У�����1�����������ⲻ����������������Ȼ��
ţţ��֪���� [l,r] ��Χ��ȫ�������ĺ�
����������
�������������� l��r ��ʾ�����䷶Χ
���������
��� [l,r] ��Χ�ڵ������ĺ�
*/
#include <stdio.h>

int Sum(int L, int R);
int main()
{
    int l, r;
    scanf("%d %d", &l, &r);

    printf("%d", Sum(l, r));
    return 0;
}
int Sum(int L, int R)
{
    int sum = 0;
    while (L <= R)
    {
        int i = 2;
        int record = 1;
        for (i = 2; i < 10; i++)
        {
            if (L % i == 0 && L != i)
            {
                record = 0;
                break;
            }
        }
        if (record)
            sum += L;
        L++;
    }
    return sum;
}