#define _CRT_SECURE_NO_WARNINGS
/*
题目描述
判断一个数n 能否同时被 3 和 5 整除。

输入格式
输入一行，包含一个整数n。

输出格式
输出一行，如果能同时被 3 和 5
整除输出 YES，否则输出 NO。
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if ((n % 3 == 0) && (n % 5 == 0))   //判断整除
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}