#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    int a = 0, b = 0;//ԭ���֡��η�
    scanf("%d %d", &a, &b);

    int i = 0;
    int consult = 1;//��
    for (i = 1; i <= b; i++)
    {
        consult = (consult * a) % 1000;//ÿ�γ�7ֻӰ�������λ�����Կ���ÿ�ζ�mod1000
    }
    printf("%03d", consult);//0��ȫ

    return 0;
}