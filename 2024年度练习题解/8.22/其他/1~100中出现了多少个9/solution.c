#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int num = 0;//�ж�����
    int count = 0;//������
    for (num = 1; num <= 100; num++)//����
    {
        int num_cpy = num;
        while (num_cpy > 0)
        {
            if (num_cpy % 10 == 9)//��9��1
            {
                printf("���֣�%-3d ", num);
                count++;
                if (count % 5 == 0 || num_cpy == 100)
                {
                    printf("\n");
                }
            }
            num_cpy /= 10;
        }
    }
    printf("9�����ˣ�%d ��", count);
    return 0;
}