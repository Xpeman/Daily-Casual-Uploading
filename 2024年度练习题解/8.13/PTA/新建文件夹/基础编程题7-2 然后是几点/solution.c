#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int NowTime = 0, PassTime = 0, OverTime = 0;
    scanf("%d %d", &NowTime, &PassTime);

    if (60 <= PassTime)    //流逝时间超过1h
    {
        //换算小时制
        PassTime = PassTime - 60 * (PassTime / 60) + 100 * (PassTime / 60);  //例如110 = 110 - 60*1 + 100 * 1 = 150;
    }
    if (60 <= (NowTime + PassTime) % 100)
        OverTime = NowTime + 100 - 60;    //十位数超过1h
    printf("%d", OverTime);

    return 0;
}