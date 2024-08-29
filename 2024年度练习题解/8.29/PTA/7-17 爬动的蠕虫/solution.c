#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    int distance = 0;//水井深度
    int worm_dis = 0;//虫子爬行
    int worm_break = 0;//虫子掉落
    scanf("%d %d %d", &distance, &worm_dis, &worm_break);
    int time = 0;//耗时

    while (distance)
    {
        distance -= worm_dis;
        time++;
        if (distance <= 0)//爬上去后如果已经出了井口
        {
            break;
        }
        distance += worm_break;
        time++;
    }
    printf("%d", time);
    return 0;
}