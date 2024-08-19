#define _CRT_SECURE_NO_WARNINGS

//牛客网支持c99的题
#include <stdio.h>
int main(void)
{
    int N = 0;  //原数组元素个数
    scanf("%d", &N);

    //有序序列数组
    int arr[N + 1];   //足够长的数组
    int i = 0;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    //新整数插入
    int new_z = 0;
    scanf("%d", &new_z);    //插入整数
    int j = 0;

    if (arr[N - 1] < new_z)  //插入数字最大时
    {
        arr[N] = new_z;
    }
    else    //插入数字最小或者在中间时
    {
        for (j = 0; j < N + 1; j++)
        {
            if (new_z <= arr[j])
            {
                int k = 0;  //可以插入时，用于从数组末尾往前递推，比如arr[5] = arr[4],然后arr[4] = arr[3]
                for (k = 0; N - k - 1 >= j; k++) //后一个下标已经到插入的下标时停止
                {
                    arr[N - k] = arr[N - k - 1];
                }
                arr[j] = new_z; //插入
                break;
            }
        }
    }
    //打印
    for (i = 0; i < N + 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}