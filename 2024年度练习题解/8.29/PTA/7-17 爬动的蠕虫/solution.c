#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    int distance = 0;//ˮ�����
    int worm_dis = 0;//��������
    int worm_break = 0;//���ӵ���
    scanf("%d %d %d", &distance, &worm_dis, &worm_break);
    int time = 0;//��ʱ

    while (distance)
    {
        distance -= worm_dis;
        time++;
        if (distance <= 0)//����ȥ������Ѿ����˾���
        {
            break;
        }
        distance += worm_break;
        time++;
    }
    printf("%d", time);
    return 0;
}