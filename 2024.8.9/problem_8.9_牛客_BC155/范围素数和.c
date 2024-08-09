#define _CRT_SECURE_NO_WARNINGS

/*
描述
牛牛刚刚学了素数的定义：素数值指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数
牛牛想知道在 [l,r] 范围内全部素数的和
输入描述：
输入两个正整数 l，r 表示闭区间范围
输出描述：
输出 [l,r] 范围内的素数的和
*/
#include <stdio.h>

int Sum(int L, int R);
int main()
{
    int l, r;
    scanf("%d %d", &l, &r);

    printf("%d", Sum(l, r));
    return 0;
}
int Sum(int L, int R)
{
    int sum = 0;
    while (L <= R)
    {
        int i = 2;
        int record = 1;
        for (i = 2; i < 10; i++)
        {
            if (L % i == 0 && L != i)
            {
                record = 0;
                break;
            }
        }
        if (record)
            sum += L;
        L++;
    }
    return sum;
}