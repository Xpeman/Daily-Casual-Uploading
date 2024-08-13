#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    int day;
    scanf("%d", &day);

    if (day == 1 || day == 3 || day == 5)   //ио©н
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}