#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>
int main(void)
{
    //存放单词
    char words[100] = "0";
    scanf("%s", words);

    char sigle_word = '\0';//单个字符
    int maxn = 0;   //最多
    int minn = sizeof(words) / sizeof(words[0]);//最少

    //确定最大最小
    int i = 0, j = 0;
    for (i = 0; words[i] != '\0'; i++)
    {
        int count = 0;
        sigle_word = words[i];//取其中一个字符作为参照字符
        for (j = 0; words[j] != '\0'; j++)//遍历后面
        {
            if (words[j] == sigle_word && words[j] != '0')
            {
                //计数，把已经计算的字符变成空白标志（这里以0为标志）
                count++;
                words[j] = '0';
            }
        }
        if (maxn < count && sigle_word != '0')//检测到空白标志，不纳入计算
            maxn = count;
        if (minn > count && sigle_word != '0')
            minn = count;
    }
    //判断素数
    int k = 0;
    int flag = 1;   //1为素数，0为非素数
    if (maxn - minn > 1)//最大最小差值大于1
    {
        for (k = 2; k <= maxn - minn; k++)//判断
        {
            if ((int)maxn - (int)minn % k == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    else
    {
        flag = 0;
    }
    //打印
    if (flag == 1)
    {
        printf("Lucky Word\n");
        printf("%d", maxn - minn);
    }
    else
    {
        printf("No Answer\n0");
    }
    return 0;
}