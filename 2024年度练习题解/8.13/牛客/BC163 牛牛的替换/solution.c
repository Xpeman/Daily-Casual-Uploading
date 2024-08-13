#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*牛客网支持c99，但VS2019不支持，所以本题仅为题解，并不是基于VS2019而编写的*/
void TakePlaceChar(char* CH, int N, int A, int B, int C, int D);    //字符替换函数
int main()
{
    int n = 0;
    char a1, a2, a3, a4;
    scanf("%d %c %c %c %c", &n, &a1, &a2, &a3, &a4); //字符串长度以及四个字符

    char ch[n]; //字符数组
    scanf("%s", ch); //字符串
    TakePlaceChar(ch, n, a1, a2, a3, a4);

    return 0;
}
void TakePlaceChar(char* CH, int N, int A, int B, int C, int D)
{
    for (int i = 0; i < N; i++)  //遍历数组各个元素
    {
        if (CH[i] == A)  //A替换成B
            CH[i] = B;
        else if (CH[i] == C) //C替换成D
            CH[i] = D;

        printf("%c", CH[i]); //打印
    }
}