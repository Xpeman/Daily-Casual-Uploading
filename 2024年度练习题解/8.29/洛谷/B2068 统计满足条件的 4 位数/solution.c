#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    int n = 0;//n个四位数
    scanf("%d", &n);

    int i = 0;
    int num = 0;//四位数
    int count = 0;//计数器
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        //先取个位，再把个位除掉
        int unit_num = num % 10;
        num /= 10;
        while (num)//依次减去千、百、十位数
        {
            unit_num -= (num % 10);
            num /= 10;
        }
        if (unit_num > 0)//大于零计1个
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}