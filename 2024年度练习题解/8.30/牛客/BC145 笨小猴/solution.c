#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>
int main(void)
{
    //��ŵ���
    char words[100] = "0";
    scanf("%s", words);

    char sigle_word = '\0';//�����ַ�
    int maxn = 0;   //���
    int minn = sizeof(words) / sizeof(words[0]);//����

    //ȷ�������С
    int i = 0, j = 0;
    for (i = 0; words[i] != '\0'; i++)
    {
        int count = 0;
        sigle_word = words[i];//ȡ����һ���ַ���Ϊ�����ַ�
        for (j = 0; words[j] != '\0'; j++)//��������
        {
            if (words[j] == sigle_word && words[j] != '0')
            {
                //���������Ѿ�������ַ���ɿհױ�־��������0Ϊ��־��
                count++;
                words[j] = '0';
            }
        }
        if (maxn < count && sigle_word != '0')//��⵽�հױ�־�����������
            maxn = count;
        if (minn > count && sigle_word != '0')
            minn = count;
    }
    //�ж�����
    int k = 0;
    int flag = 1;   //1Ϊ������0Ϊ������
    if (maxn - minn > 1)//�����С��ֵ����1
    {
        for (k = 2; k <= maxn - minn; k++)//�ж�
        {
            if ((int)maxn - (int)minn % k == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    else
    {
        flag = 0;
    }
    //��ӡ
    if (flag == 1)
    {
        printf("Lucky Word\n");
        printf("%d", maxn - minn);
    }
    else
    {
        printf("No Answer\n0");
    }
    return 0;
}