#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int daily_medicine = 0; //ÿ���ҩ���
    scanf("%d", &daily_medicine);

    int patients = 0;   //��������
    scanf("%d", &patients);
    int i = 0;
    int not_got_people = 0; //û�õ�ҩ�Ĳ���
    int people_need = 0;    //������Ҫ��ҩ
    for (i = 0; i < patients; i++)
    {
        scanf("%d", &people_need);
        if (daily_medicine >= people_need)
        {
            daily_medicine -= people_need;
        }
        else
        {
            not_got_people++;
        }
        
    }
    printf("%d", not_got_people);

    return 0;
}