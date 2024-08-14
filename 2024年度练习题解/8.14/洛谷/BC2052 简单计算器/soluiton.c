#define _CRT_SECURE_NO_WARNINGS

#include "function cliaming.h"
int main()
{
    int num1 = 0, num2 = 0;
    char culch = '\0';
    scanf("%d %d %c", &num1, &num2, &culch );

    if ('+' == culch)
        Add(num1, num2);
    else if ('-' == culch)
        Sub(num1, num2);
    else if ('*' == culch)
        Mul(num1, num2);
    else if ('/' == culch)
        Div(num1, num2);
    else if ('%' == culch)
        Bal(num1, num2);
    else
        printf("Invalid operator!\n");

    return 0;
}