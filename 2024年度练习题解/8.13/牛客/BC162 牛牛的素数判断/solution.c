#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Jugde(int N);   //�жϺ���
int main()
{
    int n;
    scanf("%d", &n); //����

    int num;
    for (int i = 0; i < n; i++)    //��������
    {
        scanf("%d", &num);
        if (Jugde(num) == 1) //1Ϊ������0Ϊ������
            printf("true\n");
        else
            printf("false\n");
    }
    return 0;
}
int Jugde(int N)
{
    for (int k = 2; k < N; k++)    //2~N��Χȡģ�ж�
    {
        if (N % k == 0)
            return 0;
    }
    return 1;
}