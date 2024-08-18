#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int speed = 0;
    scanf("%d", &speed);

    if (speed <= 60)
        printf("Speed: %d - OK", speed);
    else
        printf("Speed: %d - Speeding", speed);

    return 0;
}