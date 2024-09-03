#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    long num = 0;
    scanf("%ld", &num);

    while (num != 1)
    {
        if ((num % 2) == 0)//Å¼Êý
        {
            printf("%ld/2=%ld\n", num, num / 2);
            num /= 2;
        }
        else//ÆæÊý
        {
            printf("%ld*3+1=%ld\n", num, (num * 3) + 1);
            num = (num * 3) + 1;
        }
    }
    printf("End\n");

    return 0;
}