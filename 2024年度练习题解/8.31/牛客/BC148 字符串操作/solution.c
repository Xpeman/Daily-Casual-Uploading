#define _CRT_SECURE_NO_WARNINGS

/*牛客网支持边长数组，VS2019不支持*/
#include <stdio.h>

int main(void)
{
    //创建数组
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    char str[n];
    scanf("%s", str);

    //操作替换
    int left = 0;//左边界
    int right = 0;//右边界
    char old_ch = '\0';//原字符
    char new_ch = '\0';//改字符
    while (scanf("%d %d %c %c", &left, &right, &old_ch, &new_ch) != EOF)
    {
        for (; left <= right; left++)
        {
            if (str[left - 1] == old_ch)//范围内找到原字符
            {
                str[left - 1] = new_ch;
            }
        }
    }

    //打印改变后的字符串
    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}