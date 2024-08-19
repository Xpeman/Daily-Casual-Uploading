#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    double WorkYear = 0, WorkTimePerWeek = 0;
    scanf("%lf %lf", &WorkYear, &WorkTimePerWeek);

    if (WorkYear >= 5)
    {
        //老员工
        if (WorkTimePerWeek <= 40)    //周工作时间没超过40
        {
            printf("%.2lf", (WorkTimePerWeek * 50.0));
        }
        else    //超过
        {
            printf("%.2lf", (40.0 * 50.0) + ((WorkTimePerWeek - 40.0) * 50.0 * 1.5));
        }
    }
    else
    {
        //新员工
        if (WorkTimePerWeek <= 40)    //周工作时间没超过40
        {
            printf("%.2lf", (WorkTimePerWeek * 30.0));
        }
        else    //超过
        {
            printf("%.2lf", (40.0 * 30.0) + ((WorkTimePerWeek - 40.0) * 30.0 * 1.5));
        }
    }

    return 0;
}