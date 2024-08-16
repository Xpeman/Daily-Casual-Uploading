#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void digit(int X);
int main()
{
    int x = 0;
    scanf("%d", &x);

    digit(x);
    return 0;
}
void digit(int X)
{
    if (X)
    {
        printf("%d", X % 10);   //先打印尾部余数
        digit(X / 10);  //再传入变化值
    }
}