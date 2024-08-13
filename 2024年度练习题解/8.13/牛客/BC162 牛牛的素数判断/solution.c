#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Jugde(int N);   //判断函数
int main()
{
    int n;
    scanf("%d", &n); //个数

    int num;
    for (int i = 0; i < n; i++)    //输入数字
    {
        scanf("%d", &num);
        if (Jugde(num) == 1) //1为素数，0为非素数
            printf("true\n");
        else
            printf("false\n");
    }
    return 0;
}
int Jugde(int N)
{
    for (int k = 2; k < N; k++)    //2~N范围取模判断
    {
        if (N % k == 0)
            return 0;
    }
    return 1;
}