#define _CRT_SECURE_NO_WARNINGS
/*
����
ţţ��ϲ�������ţ������õ�ͨѶ��˾���շѷ������£�
1.ÿ�������շ�0.1Ԫ
2.ÿ����Ϣ������������60�֣��������60�֣�������0.2Ԫ�ļ۸��շѡ�
ţţ����·��� n �����ţ�����ţţһ��Ҫ�ɶ��ٶ��ŷ�
����������
��һ������һ�������� n ����ʾ���Ͷ��ŵ�������
�ڶ������� n ������������ʾţţ���͵� n ��������ÿ�����ŵ�����
���������
���ţţ�����Ҫ�ɵĶ��ŷ�
*/
#include <stdio.h>

double Price(int word);
int main()
{
    int n = 0;
    scanf("%d", &n);

    double Expence = 0;
    int WORD = 0;
    while (scanf("%d", &WORD) != EOF)//��������
    {
        Expence += Price(WORD);
    }
    printf("%.1lf", Expence);
    return 0;
}
double Price(int word)
{
    if (word > 60)  //����60��/��
        return 0.2;
    else//����
        return 0.1;
}
