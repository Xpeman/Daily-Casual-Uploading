#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int a, b, c;    //Èý±ß
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b)
        printf("1");
    else
        printf("0");

    return 0;
}