#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
    int num, numf = 0;
    scanf("%d", &num);

    while (num % 10 == 0)    //10µÄ±¶Êý
        num /= 10;
    while (num)
    {
        printf("%d", num % 10);
        num /= 10;
    }

    return 0;
}