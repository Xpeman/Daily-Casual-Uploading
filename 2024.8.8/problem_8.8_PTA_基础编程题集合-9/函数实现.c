#define _CRT_SECURE_NO_WARNINGS
int Count_Digit(const int N, const int D)
{
    int count = 0;//������
    int n = N;
    //Ϊ0��1
    if (n == 0)
    {
        return 1;
    }
    //����ȡ��
    if (n < 0)
    {
        n = -n;
    }
    //����
    while (n > 0)
    {
        if (n % 10 == D)
        {
            count++;
        }
        n /= 10;
    }

    return count;
}