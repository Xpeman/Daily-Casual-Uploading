#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    long x = 0;
    char c = '\0';
    scanf("%ld %c", &x, &c);    //�������Ӽ�ѡ��

    unsigned long expence = 8;  //����

    if (x > 1000)
        expence += (((x - 1000) / 500) * 4);    //����4Ԫ���㹫ʽ
    if (c == 'y')   //�Ӽ����
        expence += 5;
    if ((x - 1000) % 500 > 0)   //�������
        expence += 4;

    printf("%u", expence);
    return 0;
}