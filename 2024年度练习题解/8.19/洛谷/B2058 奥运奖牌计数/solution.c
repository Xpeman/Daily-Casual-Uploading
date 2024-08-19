#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    int gold = 0, silver = 0, brozen = 0;
    int g = 0, s = 0, b = 0;
    int n = 0;
    scanf("%d", &n);

    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d", &g, &s, &b);
        gold += g;
        silver += s;
        brozen += b;
    }

    printf("%d %d %d %d", gold, silver, brozen, (gold + silver + brozen));

    return 0;
}
