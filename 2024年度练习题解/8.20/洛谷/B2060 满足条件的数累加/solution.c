#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    int sum = 0;
    for (; n <= m; n++)
    {
        if (n % 17 == 0)
        {
            sum += n;
        }
    }
    printf("%d", sum);

    return 0;
}