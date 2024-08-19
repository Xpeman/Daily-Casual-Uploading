#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    unsigned int m = 0, n = 0;
    scanf("%d %d", &m, &n);

    int sum = 0;
    while (m <= n)
    {
        if (m % 2 != 0)
            sum += m;

        m++;
    }

    printf("%d", sum);

    return 0;
}