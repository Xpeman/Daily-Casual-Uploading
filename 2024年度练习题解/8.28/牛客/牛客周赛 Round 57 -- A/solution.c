#define _CRT_SECURE_NO_WARNINGS

//Á´½Ó£ºhttps://ac.nowcoder.com/acm/contest/88888/A
#include <stdio.h>
int main(void)
{
    int arr[5] = { 0 };
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == 1)
        {
            printf("%d", i + 1);
            break;
        }
    }
    return 0;
}