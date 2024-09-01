#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    int a = 0, b = 0;//原数字、次方
    scanf("%d %d", &a, &b);

    int i = 0;
    int consult = 1;//幂
    for (i = 1; i <= b; i++)
    {
        consult = (consult * a) % 1000;//每次乘7只影响最后三位，所以可以每次都mod1000
    }
    printf("%03d", consult);//0补全

    return 0;
}