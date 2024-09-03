#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int Sum(int n);
    int num = 0;
    scanf("%d", &num);

    printf("%d", Sum(num));
    return 0;
}
int Sum(int n)
{
    if (n)
    {
        Sum(n / 10);
        return n % 10 + Sum(n / 10);
    }
    return 0;
}
