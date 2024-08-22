#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int num = 0;//判断数字
    int count = 0;//计数器
    for (num = 1; num <= 100; num++)//遍历
    {
        int num_cpy = num;
        while (num_cpy > 0)
        {
            if (num_cpy % 10 == 9)//遇9计1
            {
                printf("数字：%-3d ", num);
                count++;
                if (count % 5 == 0 || num_cpy == 100)
                {
                    printf("\n");
                }
            }
            num_cpy /= 10;
        }
    }
    printf("9出现了：%d 次", count);
    return 0;
}