#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int children = 0;//����
    scanf("%d", &children);

    int i = 0;
    int apple = 0;//ƻ��
    for (i = 0; i <= children; i++)
    {
        apple += i;
    }
    printf("%d", apple);
    return 0;
}