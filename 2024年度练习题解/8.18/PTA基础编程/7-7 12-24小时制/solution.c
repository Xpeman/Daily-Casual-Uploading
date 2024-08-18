#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int H = 0, min = 0;
    scanf("%d:%d", &H, &min);

    //ионГ
    if (H < 12)
    {
        printf("%d:%d AM", H, min);
    }
    //обнГ
    else if (H == 12)
    {
        printf("%d:%d PM", H, min);
    }
    else if (H < 24)
    {
        printf("%d:%d PM", H - 12, min);
    }
    else
    {
        printf("0:%d", min);
    }
    return 0;
}