#define _CRT_SECURE_NO_WARNINGS
int CountOf2(int le, int r)
{
    int count = 0;//������
    while (le <= r) //����[L,R]
    {
        int LE = le;
        while (LE > 0)//��λ�����ж�
        {
            if (LE % 10 == 2)
            {
                count++;
            }
            LE /= 10;
        }
        le++;
    }

    return count;
}