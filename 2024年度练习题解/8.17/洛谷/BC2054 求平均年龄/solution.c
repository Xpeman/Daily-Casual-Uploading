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
    for (i = 0; i < stu_n; i++) //һ������һ�����
    {
        scanf("%d", &age);
        sum += age;
    }
    ave = (double)sum / (double)stu_n;  //ǿת������ƽ��
    printf("%.2lf", ave);

    return 0;
}