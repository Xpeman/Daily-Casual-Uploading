#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    int A, B;
    scanf("%d %d", &A, &B);

    int sum = 0;    //���
    int count = 1;    //���м�����
    for (; A <= B; A++)
    {
        printf("%5d", A);
        sum += A;
        if (count % 5 == 0 || A == B)    //ÿ5����һ�У� B��ӡ����
            printf("\n");
        count++;
    }

    printf("Sum = %d", sum);

    return 0;
}
