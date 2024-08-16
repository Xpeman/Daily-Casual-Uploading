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
        digit(X, I);    //每当I > 1,进入下一个递归，跳出后继续下一条语句
    }
    printf("%d", num);
}

