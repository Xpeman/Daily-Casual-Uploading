#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    int n = 0;
    scanf("%d", &n);

    long rate = 0.0;//��Ч��
    double examples = 0.0, example_effected = 0.0;  //�ٴ�ʾ������Чʾ��
    scanf("%lf %lf", &examples, &example_effected);
    if (examples > 0)
    {
        rate = (example_effected / examples) * 1000.0;//��һ����Ч��

        int i = 0;
        for (i = 0; i < n - 1; i++)
        {
            long rate_next = 0.0; //���Ʒ���Ч��
            scanf("%lf %lf", &examples, &example_effected); //���Ʒ�

            rate_next = (example_effected / examples) * 1000.0;//�ȼ���С��ֵ����100ȡ����λ��������Ϊrate_naxt�����ͣ���������ʱ�������������֣�ʵ�ֶ�С����λ�ı���
            //�ж���Ч
            if (rate_next - rate > 50)   //>5%
            {
                printf("better");
            }
            if (rate - rate_next > 50)
            {
                printf("worse");
            }
            if(rate - rate_next == 50 ||rate_next - rate == 50)
            {
                printf("same");
            }
            printf("\n");
        }
    }

    return 0;
}