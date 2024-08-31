#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    long n, m;
    scanf("%ld %ld", &n, &m);

    long up = 1;//n£¡
    long down = 1;//(m-n)!
    if (n > m)
    {
        m = n - m;

        for (up = 1; n > 1; n--)
        {
            up *= n;
        }
        for (down = 1; m > 1; m--)
        {
            down *= m;
        }
    }
    else
    {
        up = 0;
    }
    printf("%ld", up / down);

    return 0;
}