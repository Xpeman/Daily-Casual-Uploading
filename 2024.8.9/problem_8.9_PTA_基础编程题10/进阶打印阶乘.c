#define _CRT_SECURE_NO_WARNINGS
/*
����N���û�����Ĳ�������ֵ������1000��
���N�ǷǸ���������ú���������һ���д�ӡ��N!��ֵ�������ӡ��Invalid input����
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
        long long sum = 1;  //�׳�
        for (i = 1; i <= N; i++)    //N!
        {
            sum *= i;
        }
        printf("%lld\n", sum);
    }
    else if (N < 0) //����
        printf("Invalid input\n");
    else    //Ϊ0
        printf("1\n");
}

