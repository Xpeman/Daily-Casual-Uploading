#define _CRT_SECURE_NO_WARNINGS
/*
其中N是用户传入的参数，其值不超过1000。
如果N是非负整数，则该函数必须在一行中打印出N!的值，否则打印“Invalid input”。
*/
#include <stdio.h>

void Print_Factorial(const int N);

int main()
{
    int N;

    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}
void Print_Factorial(const int N)
{
    if (N > 0)
    {
        int i;
        long long sum = 1;  //阶乘
        for (i = 1; i <= N; i++)    //N!
        {
            sum *= i;
        }
        printf("%lld\n", sum);
    }
    else if (N < 0) //负数
        printf("Invalid input\n");
    else    //为0
        printf("1\n");
}

