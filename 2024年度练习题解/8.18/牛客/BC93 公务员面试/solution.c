#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    int score = 0; //�ɼ�
    int sum = 0; //���
    double ave = 0.0; //ƽ��ֵ
 
    int max = 0, min = 101;
    int i = 0;  //������
    while(scanf("%d", &score) != EOF)
    {
        //��͡��������С
        i++;
        sum += score;
        max = score > max? score: max;
        min = score < min? score: min;
         
        if(7 <= i)  //�߸��ɼ�
        {
            sum -= max + min;
            ave = (double)sum / 5.0;
            printf("%.2lf\n", ave);    //��ӡ
            //����
            i = sum = ave = 0;
            max = 0;
            min = 101;
        }
    }
     
    return 0;
}
