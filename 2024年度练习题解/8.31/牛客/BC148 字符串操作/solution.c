#define _CRT_SECURE_NO_WARNINGS

/*ţ����֧�ֱ߳����飬VS2019��֧��*/
#include <stdio.h>

int main(void)
{
    //��������
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    char str[n];
    scanf("%s", str);

    //�����滻
    int left = 0;//��߽�
    int right = 0;//�ұ߽�
    char old_ch = '\0';//ԭ�ַ�
    char new_ch = '\0';//���ַ�
    while (scanf("%d %d %c %c", &left, &right, &old_ch, &new_ch) != EOF)
    {
        for (; left <= right; left++)
        {
            if (str[left - 1] == old_ch)//��Χ���ҵ�ԭ�ַ�
            {
                str[left - 1] = new_ch;
            }
        }
    }

    //��ӡ�ı����ַ���
    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}