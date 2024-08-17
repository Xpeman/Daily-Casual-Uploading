#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int stu_n = 0;
    scanf("%d", &stu_n);

    int i = 0;
    int age = 0;
    int sum = 0.0;
    double ave = 0.0;
    for (i = 0; i < stu_n; i++) //一遍输入一边求和
    {
        scanf("%d", &age);
        sum += age;
    }
    ave = (double)sum / (double)stu_n;  //强转换后求平均
    printf("%.2lf", ave);

    return 0;
}