#define _CRT_SECURE_NO_WARNINGS
/*
��Ŀ����
�ж�һ����n �ܷ�ͬʱ�� 3 �� 5 ������

�����ʽ
����һ�У�����һ������n��

�����ʽ
���һ�У������ͬʱ�� 3 �� 5
������� YES��������� NO��
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if ((n % 3 == 0) && (n % 5 == 0))   //�ж�����
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}