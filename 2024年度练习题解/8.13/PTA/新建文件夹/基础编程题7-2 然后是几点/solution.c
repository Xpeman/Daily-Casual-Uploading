#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int NowTime = 0, PassTime = 0, OverTime = 0;
    scanf("%d %d", &NowTime, &PassTime);

    if (60 <= PassTime)    //����ʱ�䳬��1h
    {
        //����Сʱ��
        PassTime = PassTime - 60 * (PassTime / 60) + 100 * (PassTime / 60);  //����110 = 110 - 60*1 + 100 * 1 = 150;
    }
    if (60 <= (NowTime + PassTime) % 100)
        OverTime = NowTime + 100 - 60;    //ʮλ������1h
    printf("%d", OverTime);

    return 0;
}