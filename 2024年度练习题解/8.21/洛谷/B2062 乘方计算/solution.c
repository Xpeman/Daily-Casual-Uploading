#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int a, n;
    scanf("%d %d", &a, &n);

    int mul = 1;
    for (; n >= 1; n--)
    {
        mul *= a;
    }

    printf("%d", mul);

    return 0;
}