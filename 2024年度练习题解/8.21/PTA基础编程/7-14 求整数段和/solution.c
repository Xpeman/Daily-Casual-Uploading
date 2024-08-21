#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    int A, B;
    scanf("%d %d", &A, &B);

    int sum = 0;    //求和
    int count = 1;    //换行计数器
    for (; A <= B; A++)
    {
        printf("%5d", A);
        sum += A;
        if (count % 5 == 0 || A == B)    //每5个换一行， B打印后换行
            printf("\n");
        count++;
    }

    printf("Sum = %d", sum);

    return 0;
}
