#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int daily_medicine = 0; //每天的药库存
    scanf("%d", &daily_medicine);

    int patients = 0;   //病人数量
    scanf("%d", &patients);
    int i = 0;
    int not_got_people = 0; //没拿到药的病人
    int people_need = 0;    //病人需要的药
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