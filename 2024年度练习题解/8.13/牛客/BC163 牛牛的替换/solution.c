#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*ţ����֧��c99����VS2019��֧�֣����Ա����Ϊ��⣬�����ǻ���VS2019����д��*/
void TakePlaceChar(char* CH, int N, int A, int B, int C, int D);    //�ַ��滻����
int main()
{
    int n = 0;
    char a1, a2, a3, a4;
    scanf("%d %c %c %c %c", &n, &a1, &a2, &a3, &a4); //�ַ��������Լ��ĸ��ַ�

    char ch[n]; //�ַ�����
    scanf("%s", ch); //�ַ���
    TakePlaceChar(ch, n, a1, a2, a3, a4);

    return 0;
}
void TakePlaceChar(char* CH, int N, int A, int B, int C, int D)
{
    for (int i = 0; i < N; i++)  //�����������Ԫ��
    {
        if (CH[i] == A)  //A�滻��B
            CH[i] = B;
        else if (CH[i] == C) //C�滻��D
            CH[i] = D;

        printf("%c", CH[i]); //��ӡ
    }
}