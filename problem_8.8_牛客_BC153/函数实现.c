#define _CRT_SECURE_NO_WARNINGS
int CountOf2(int le, int r)
{
    int count = 0;//计数器
    while (le <= r) //区间[L,R]
    {
        int LE = le;
        while (LE > 0)//数位遍历判断
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