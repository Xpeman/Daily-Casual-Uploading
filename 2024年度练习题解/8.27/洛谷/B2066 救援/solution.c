#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{
    int n = 0;
    scanf("%d", &n);

    int x_main = 0, y_main = 0;   //ԭ������
    int x_house = 0, y_house = 0;   //�ݶ�����
    int people = 0; //������Ա
    double time = 0;   //��Ԯʱ��
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d", &x_house, &y_house, &people);
        time += sqrt(pow((double)(x_house - x_main), 2)) + sqrt(pow(x_house - x_main, 2)) + people;
        x_main = x_house;
        y_main = y_house;
    }
    printf("%d", time + 0.5);
    return 0;
}