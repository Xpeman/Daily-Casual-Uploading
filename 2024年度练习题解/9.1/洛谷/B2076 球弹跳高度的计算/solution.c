#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    double start_distance = 0.0;//����
    scanf("%lf", &start_distance);

    double rebound_distance = start_distance;//����
    double all_distance = start_distance;//�ܾ���
    int i = 0;
    for (i = 0; i < 9; i++)
    {
        rebound_distance /= 2.0;//����߶�
        all_distance += rebound_distance * 2.0;//ÿ�ε�������µľ���һ��������Ҫ������
    }
    printf("%f\n%f", all_distance, rebound_distance / 2.0);//��ʮ�η��������֮�������Ҫ��/2;

    return 0;
}