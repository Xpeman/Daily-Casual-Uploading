#include <stdio.h>
int main(void)
{
    int n;
    int count = 0;  //��0������
    while (scanf("%d", &n) != EOF)
    {
        //���鸳ֵ
        int i = 2;
        int k = 0;
        int arr[n - 2];
        for (k = 0; k < n - 1; k++)
        {
            arr[k] = i;
            if (i == n)
                break;
            i++;
        }
        //��0
        int j = 0;  //�����±�
        for (j = 0; j < n - 1; j++)
        {
            int s = 0; //2,3,4~n����0�����±꣬�ȱ����±��һλ
            for (s = j + 1; s < n - 1; s++)
            {
                if (arr[s] != 0 && arr[j] != 0 && arr[s] % arr[j] == 0)  //�����������±궼��Ϊ0ʱ���ж��Ƿ�����
                {
                    arr[s] = 0;
                    count++;
                }
            }
        }
        //��ӡ
        for (k = 0; k < n - 1; k++)
        {
            if (arr[k] != 0) //����0
                printf("%d ", arr[k]);
        }
        printf("\n%d\n", count);

    }
    return 0;
}