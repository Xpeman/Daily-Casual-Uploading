#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    int n = 0;
    scanf("%d", &n);

    int num = 0;
    int cnt1 = 0, cnt5 = 0, cnt10 = 0;
    for (; n > 0; n--)
    {
        scanf("%d", &num);
        if (num == 1)
            cnt1++;
        if (num == 5)
            cnt5++;
        if (num == 10)
            cnt10++;
    }
    printf("%d\n%d\n%d\n", cnt1, cnt5, cnt10);

    return 0;
}