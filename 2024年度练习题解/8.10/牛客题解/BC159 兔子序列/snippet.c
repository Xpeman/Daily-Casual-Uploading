#include <stdio.h>
#include <math.h>

long Tuzi(long* seq_max, int seq_size);
int main()
{
    int n;
    scanf("%d",&n);

    long name = 0;
    long seq[n];
    for(int i = 0;i < n;i++)
    {
        scanf("%ld",&seq[i]);
    }
    name = Tuzi(seq, n);
    printf("%ld\n",name);

    return 0;
}
long Tuzi(long* seq_del, int seq_size)
{
    long name_store = 0;
    //遍历数组求最大
    for(int j = 0;j < seq_size;j++)
    {   
        if(name_store <= seq_del[j])    //后者比前者大
        {
            long Double_seq = (long)sqrt((double)seq_del[j]);   //平方根取整
            if((Double_seq * Double_seq) != seq_del[j]) //完全平方数判断
            {
                name_store = seq_del[j];    //存放兔子序列名称
            }
        }
    }

    return name_store;
}
