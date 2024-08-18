#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
 
int main(void)
{
    int n = 0; //范围
    scanf("%d", &n);
 
    int i = 0;
    for(i = 1; i <= n; i++)
    {
        int num = i;   //原数字
        int cn = 0;    //翻转数字
        int k = 1; //翻转时除数
        //除数k按情况取值(写的太丑了)
        if(num >= 1 && num < 10)
            k = 1;
        else if(num >= 10 && num < 100)
            k = 10;
        else if(num >= 100 && num < 1000)
            k = 100;
        else if(num >= 1000 && num < 10000)
            k = 1000;
        else if(num >= 10000 && num < 100000)
            k = 10000;
        else
            k = 100000;
        //非10倍数（因为10的倍数必定不是回文）
        if(num % 10 != 0)
        {
            while (num) //翻转
            {
                cn += (num % 10) * k;
                num /= 10;
                k /= 10;
            }
            if(cn == i) //比较
            printf("%d\n", i);
        }
    }   
 
    return 0;
}
