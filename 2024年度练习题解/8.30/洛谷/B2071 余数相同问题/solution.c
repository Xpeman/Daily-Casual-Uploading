#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int a, b, c;    //��������
    scanf("%d %d %d", &a, &b, &c);

    int x = 0;  //����
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