#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
 
int main(void)
{
    int n = 0; //��Χ
    scanf("%d", &n);
 
    int i = 0;
    for(i = 1; i <= n; i++)
    {
        int num = i;   //ԭ����
        int cn = 0;    //��ת����
        int k = 1; //��תʱ����
        //����k�����ȡֵ(д��̫����)
        if(num >= 1 && num < 10)
            k = 1;
        else if(num >= 10 && num < 100)
            k = 10;
        else if(num >= 100 && num < 1000)
            k = 100;
        else if(num >= 1000 && num < 10000)
            k = 1000;
        else if(num >= 10000 && num < 100000)
            k = 10000;
        else
            k = 100000;
        //��10��������Ϊ10�ı����ض����ǻ��ģ�
        if(num % 10 != 0)
        {
            while (num) //��ת
            {
                cn += (num % 10) * k;
                num /= 10;
                k /= 10;
            }
            if(cn == i) //�Ƚ�
            printf("%d\n", i);
        }
    }   
 
    return 0;
}
