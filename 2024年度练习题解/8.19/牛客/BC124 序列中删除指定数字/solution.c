#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int N = 0;
    scanf("%d", &N);

    //序列数组
    int arr[N];
    int i = 0;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    //指定数字
    int num_del = 0;
    scanf("%d", &num_del);

    //删除指定数字
    int j = 0;
    int count = 0;  //被删除的个数

    for (j = 0; j < N; j++)
    {
        if (arr[j] == num_del)   //找到数字
        {
            arr[j] = 0; //置0
        }
    }

    //打印
    for (i = 0; i < N; i++)
    {
        if (arr[i])  //跳过0
            printf("%d ", arr[i]);
    }

    return 0;
}
