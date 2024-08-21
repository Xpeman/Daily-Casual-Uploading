#include <stdio.h>
int main(void)
{
    int n;
    int count = 0;  //清0计数器
    while (scanf("%d", &n) != EOF)
    {
        //数组赋值
        int i = 2;
        int k = 0;
        int arr[n - 2];
        for (k = 0; k < n - 1; k++)
        {
            arr[k] = i;
            if (i == n)
                break;
            i++;
        }
        //清0
        int j = 0;  //遍历下标
        for (j = 0; j < n - 1; j++)
        {
            int s = 0; //2,3,4~n的清0遍历下标，比遍历下标后一位
            for (s = j + 1; s < n - 1; s++)
            {
                if (arr[s] != 0 && arr[j] != 0 && arr[s] % arr[j] == 0)  //后遍历与遍历下标都不为0时，判断是否整除
                {
                    arr[s] = 0;
                    count++;
                }
            }
        }
        //打印
        for (k = 0; k < n - 1; k++)
        {
            if (arr[k] != 0) //跳过0
                printf("%d ", arr[k]);
        }
        printf("\n%d\n", count);

    }
    return 0;
}