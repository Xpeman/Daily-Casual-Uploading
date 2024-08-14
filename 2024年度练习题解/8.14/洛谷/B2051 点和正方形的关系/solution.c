#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);

    if ((x >= -1 && x <= 1) && (y >= -1 && y <= 1))  //Õý·½ÐÎ
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}