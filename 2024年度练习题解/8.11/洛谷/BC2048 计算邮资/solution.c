#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    long x = 0;
    char c = '\0';
    scanf("%ld %c", &x, &c);    //重量、加急选项

    unsigned long expence = 8;  //费用

    if (x > 1000)
        expence += (((x - 1000) / 500) * 4);    //超额4元计算公式
    if (c == 'y')   //加急情况
        expence += 5;
    if ((x - 1000) % 500 > 0)   //非整情况
        expence += 4;

    printf("%u", expence);
    return 0;
}