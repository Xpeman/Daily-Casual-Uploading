#define _CRT_SECURE_NO_WARNINGS
/*
描述
请统计某个给定范围[L, R]的所有整数中，数字2出现的次数。

比如给定范围[2, 22]，
数字2在数2中出现了1次，在数12中出现1次，在数20中出现1次，在数21中出现1次，在数22中出现2次，所以数字2在该范围内一共出现了6次。

输入描述：
输入共1行，为两个正整数L和R，之间用一个空格隔开。
输出描述：
输出共1行，表示数字2出现的次数。
*/
#include <stdio.h>
#include "函数声明.h"
int CountOf2(int le, int r);
int main()
{
    int L, R;
    scanf("%d %d", &L, &R);

    printf("%d", CountOf2(L, R));

    return 0;
}
