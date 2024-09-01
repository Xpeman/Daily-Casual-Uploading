#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    double start_distance = 0.0;//距离
    scanf("%lf", &start_distance);

    double rebound_distance = start_distance;//反弹
    double all_distance = start_distance;//总距离
    int i = 0;
    for (i = 0; i < 9; i++)
    {
        rebound_distance /= 2.0;//弹起高度
        all_distance += rebound_distance * 2.0;//每次弹起和落下的距离一样，所以要加两次
    }
    printf("%f\n%f", all_distance, rebound_distance / 2.0);//第十次反弹在落地之后，因此需要再/2;

    return 0;
}