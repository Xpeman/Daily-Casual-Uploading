#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int a, b, c;    //三个整数
    scanf("%d %d %d", &a, &b, &c);

    int x = 0;  //除数
    for(x = 2; ; x++)
    {
        if (a % x == b % x && b % x == c % x)
        {
            break;
        }
    }
    printf("%d", x);

    return 0;
}