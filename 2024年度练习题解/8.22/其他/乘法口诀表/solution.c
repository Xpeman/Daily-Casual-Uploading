#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int i = 0, j = 0;
    for (i = 1; i < 10; i++)//ÿһ��
    {
        for (j = 1; j <= i; j++)    //ÿһ��
        {
            printf("%d * %d = %-3d|", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}