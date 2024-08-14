#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Judge(int num); //四叶玫瑰数判断函数
int main(void)
{
    int left, right;
    scanf("%d %d", &left, &right);

    int i = 0;
    int count = 0;
    for (i = left; i <= right; i++)  //区间
    {
        if (Judge(i))    //判断
            printf("%d ", i);

    }

    return 0;
}
int Judge(const int num)
{
    int k = 0;
    int sum = 0;
    for (k = num; k > 0; k /= 10)
    {
        int mo = k % 10;    //数位
        sum += mo * mo * mo * mo; //四次方之和
    }
    if (sum == num)  //是
        return 1;
    else    //不是
        return 0;
}