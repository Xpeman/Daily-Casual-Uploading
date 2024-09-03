#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    long num = 0, k = 0;//m, k
    scanf("%ld %ld", &num, &k);

    int count = 0;//计数器
    for (; num > 0; num /= 10)//遍历位值
    {
        if (num % 10 == 3)//是3加1
        {
            count++;
        }
    }
    if (count == k)//最终计数等于k
    {
        printf("YES\n");
    }
    else//不等于
    {
        printf("NO\n");
    }
    return 0;
}