#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void digit(int X);
int main()
{
    int x = 0;
    scanf("%d", &x);

    digit(x);
    return 0;
}
void digit(int X)
{
    if (X)
    {
        printf("%d", X % 10);   //�ȴ�ӡβ������
        digit(X / 10);  //�ٴ���仯ֵ
    }
}