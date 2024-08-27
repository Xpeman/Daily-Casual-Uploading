#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    int n = 0;
    scanf("%d", &n);

    long rate = 0.0;//有效率
    double examples = 0.0, example_effected = 0.0;  //临床示例，有效示例
    scanf("%lf %lf", &examples, &example_effected);
    if (examples > 0)
    {
        rate = (example_effected / examples) * 1000.0;//第一个有效率

        int i = 0;
        for (i = 0; i < n - 1; i++)
        {
            long rate_next = 0.0; //新疗法有效率
            scanf("%lf %lf", &examples, &example_effected); //新疗法

            rate_next = (example_effected / examples) * 1000.0;//先计算小数值，乘100取得两位整数，因为rate_naxt是整型，保存数据时仅保留整数部分，实现对小数两位的保存
            //判断疗效
            if (rate_next - rate > 50)   //>5%
            {
                printf("better");
            }
            if (rate - rate_next > 50)
            {
                printf("worse");
            }
            if(rate - rate_next == 50 ||rate_next - rate == 50)
            {
                printf("same");
            }
            printf("\n");
        }
    }

    return 0;
}