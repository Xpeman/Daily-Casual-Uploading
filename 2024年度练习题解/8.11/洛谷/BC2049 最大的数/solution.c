#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    long num1 = 0, num2 = 0, num3 = 0;
    scanf("%ld %ld %ld", &num1, &num2, &num3);  //������

    //ԭ������max������ֵ�����Աȵģ����Ƿ��������и�����Χ��ȷ��max�ĳ�ʼֵ�Ƚ��ѣ����Բ���ֱ�ӶԱ�
    if (num1 > num2 && num1 > num3)
        printf("%ld", num1);
    else if (num2 > num1 && num2 > num3)
        printf("%ld", num2);
    else
        printf("%ld", num3);

    return 0;
}


