#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void digit(int X, int I);
int main()
{
    int x = 0, i = 0;
    scanf("%d %d", &x, &i);

    digit(x, i);
    return 0;
}
void digit(int X, int I)
{
    int num;
    num = X % 10;
    if (I > 1)
    {
        X /= 10;
        I--;
        digit(X, I);    //ÿ��I > 1,������һ���ݹ飬�����������һ�����
    }
    printf("%d", num);
}

