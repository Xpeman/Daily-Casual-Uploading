#define _CRT_SECURE_NO_WARNINGS
int Count_Digit(const int N, const int D)
{
    int count = 0;//计数器
    int n = N;
    //为0返1
    if (n == 0)
    {
        return 1;
    }
    //负数取正
    if (n < 0)
    {
        n = -n;
    }
    //计数
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