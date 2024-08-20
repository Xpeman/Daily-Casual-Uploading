#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int num1, num2;
    char cul_sym;
    scanf("%d %c %d", &num1, &cul_sym, &num2);

    switch (cul_sym)
    {
    case '+':
        printf("%d\n", num1 + num2);
        break;
    case '-':
        printf("%d\n", num1 - num2);
        break;
    case '*':
        printf("%d\n", num1 * num2);
        break;
    case '/':
        printf("%d\n", num1 / num2);
        break;
    case '%':
        printf("%d\n", num1 % num2);
        break;
    default:
        printf("ERROR\n");
    }

    return 0;
}