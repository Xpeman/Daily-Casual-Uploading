#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    int n = 0;//n����λ��
    scanf("%d", &n);

    int i = 0;
    int num = 0;//��λ��
    int count = 0;//������
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        //��ȡ��λ���ٰѸ�λ����
        int unit_num = num % 10;
        num /= 10;
        while (num)//���μ�ȥǧ���١�ʮλ��
        {
            unit_num -= (num % 10);
            num /= 10;
        }
        if (unit_num > 0)//�������1��
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}