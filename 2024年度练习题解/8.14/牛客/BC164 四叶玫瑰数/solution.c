#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Judge(int num); //��Ҷõ�����жϺ���
int main(void)
{
    int left, right;
    scanf("%d %d", &left, &right);

    int i = 0;
    int count = 0;
    for (i = left; i <= right; i++)  //����
    {
        if (Judge(i))    //�ж�
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
        int mo = k % 10;    //��λ
        sum += mo * mo * mo * mo; //�Ĵη�֮��
    }
    if (sum == num)  //��
        return 1;
    else    //����
        return 0;
}