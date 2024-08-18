#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    int score = 0; //成绩
    int sum = 0; //求和
    double ave = 0.0; //平均值
 
    int max = 0, min = 101;
    int i = 0;  //计数器
    while(scanf("%d", &score) != EOF)
    {
        //求和、求最大最小
        i++;
        sum += score;
        max = score > max? score: max;
        min = score < min? score: min;
         
        if(7 <= i)  //七个成绩
        {
            sum -= max + min;
            ave = (double)sum / 5.0;
            printf("%.2lf\n", ave);    //打印
            //重置
            i = sum = ave = 0;
            max = 0;
            min = 101;
        }
    }
     
    return 0;
}
