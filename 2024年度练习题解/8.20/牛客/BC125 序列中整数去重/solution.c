#define _CRT_SECURE_NO_WARNINGS

//ţ����������֧��c99
#include <stdio.h>
int main(void)
{
    int n = 0;
    scanf("%d", &n);

    //���鸳ֵ
    int arr[n];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //�ظ�����Ϊ0
    int k = 0;
    for (i = 0; i < n; i++)
    {
        int flag = 0;   //����һ��Ԫ��
        flag = arr[i];
        for (k = i + 1; k < n; k++)  //���������Ԫ��
        {
            if (arr[k] == flag)  //�ҵ��ظ���Ԫ��
            {
                arr[k] = 0; //����Ϊ0
            }
        }
    }
    //����-1��ӡ
    for (i = 0; i < n; i++)
    {
        if (arr[i])
            printf("%d ", arr[i]);
    }
    return 0;
}