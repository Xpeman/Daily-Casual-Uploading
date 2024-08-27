#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{
    int n = 0;
    scanf("%d", &n);

    int x_main = 0, y_main = 0;   //原点坐标
    int x_house = 0, y_house = 0;   //屋顶坐标
    int people = 0; //待救人员
    double time = 0;   //救援时间
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