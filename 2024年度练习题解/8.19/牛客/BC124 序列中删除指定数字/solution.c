#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int N = 0;
    scanf("%d", &N);

    //��������
    int arr[N];
    int i = 0;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    //ָ������
    int num_del = 0;
    scanf("%d", &num_del);

    //ɾ��ָ������
    int j = 0;
    int count = 0;  //��ɾ���ĸ���

    for (j = 0; j < N; j++)
    {
        if (arr[j] == num_del)   //�ҵ�����
        {
            arr[j] = 0; //��0
        }
    }

    //��ӡ
    for (i = 0; i < N; i++)
    {
        if (arr[i])  //����0
            printf("%d ", arr[i]);
    }

    return 0;
}
