#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int title = 0;
    while (scanf("%d", &title) != EOF)
    {
        if (title == 1)
            printf("B");
        else if (title == 2)
            printf("Y");
        else
            printf("R");
    }

    return 0;
}