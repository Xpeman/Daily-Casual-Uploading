#define _CRT_SECURE_NO_WARNINGS

//ţ����֧��c99����
#include <stdio.h>
int main(void)
{
    int N = 0;  //ԭ����Ԫ�ظ���
    scanf("%d", &N);

    //������������
    int arr[N + 1];   //�㹻��������
    int i = 0;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    //����������
    int new_z = 0;
    scanf("%d", &new_z);    //��������
    int j = 0;

    if (arr[N - 1] < new_z)  //�����������ʱ
    {
        arr[N] = new_z;
    }
    else    //����������С�������м�ʱ
    {
        for (j = 0; j < N + 1; j++)
        {
            if (new_z <= arr[j])
            {
                int k = 0;  //���Բ���ʱ�����ڴ�����ĩβ��ǰ���ƣ�����arr[5] = arr[4],Ȼ��arr[4] = arr[3]
                for (k = 0; N - k - 1 >= j; k++) //��һ���±��Ѿ���������±�ʱֹͣ
                {
                    arr[N - k] = arr[N - k - 1];
                }
                arr[j] = new_z; //����
                break;
            }
        }
    }
    //��ӡ
    for (i = 0; i < N + 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}