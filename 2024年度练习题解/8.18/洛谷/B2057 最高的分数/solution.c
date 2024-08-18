#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    int n = 0, score = 0;
    scanf("%d", &n);

    int i = 0;
    int max = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &score);
        max = score > max ? score : max;
    }
    printf("%d", max);

    return 0;
}