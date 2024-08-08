#define _CRT_SECURE_NO_WARNINGS
/*
描述
牛牛很喜欢发短信，他所用的通讯公司的收费方法如下：
1.每条短信收费0.1元
2.每条短息的字数不超过60字，如果超过60字，将按照0.2元的价格收费。
牛牛这个月发了 n 条短信，请问牛牛一共要缴多少短信费
输入描述：
第一行输入一个正整数 n ，表示发送短信的条数，
第二行输入 n 个正整数，表示牛牛发送的 n 条短信中每条短信的字数
输出描述：
输出牛牛这个月要缴的短信费
*/
#include <stdio.h>

double Price(int word);
int main()
{
    int n = 0;
    scanf("%d", &n);

    double Expence = 0;
    int WORD = 0;
    while (scanf("%d", &WORD) != EOF)//短信字数
    {
        Expence += Price(WORD);
    }
    printf("%.1lf", Expence);
    return 0;
}
double Price(int word)
{
    if (word > 60)  //高于60字/条
        return 0.2;
    else//低于
        return 0.1;
}
