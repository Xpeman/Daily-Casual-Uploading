#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
    long num = 0;   //得到的数字
    long k = 1; //数位权重
    scanf("%ld", &num);

    int new_num = 0;
    int flag = 0; //改变的数字0或1
    while (num)
    {
        if (num % 10 % 2 == 0)   //取数位上的数字再判断奇偶
            flag = 0;
        else
            flag = 1;

        new_num += flag * k; //新数变化
        num /= 10;
        k *= 10;    //数位权重递增
    }

    printf("%d", new_num);
    return 0;
}