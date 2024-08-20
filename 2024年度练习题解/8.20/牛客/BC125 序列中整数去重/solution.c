#define _CRT_SECURE_NO_WARNINGS

//牛客网的题需支持c99
#include <stdio.h>
int main(void)
{
    int n = 0;
    scanf("%d", &n);

    //数组赋值
    int arr[n];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //重复设置为0
    int k = 0;
    for (i = 0; i < n; i++)
    {
        int flag = 0;   //保存一个元素
        flag = arr[i];
        for (k = i + 1; k < n; k++)  //遍历后面的元素
        {
            if (arr[k] == flag)  //找到重复的元素
            {
                arr[k] = 0; //设置为0
            }
        }
    }
    //跳过-1打印
    for (i = 0; i < n; i++)
    {
        if (arr[i])
            printf("%d ", arr[i]);
    }
    return 0;
}