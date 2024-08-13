#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    long num1 = 0, num2 = 0, num3 = 0;
    scanf("%ld %ld %ld", &num1, &num2, &num3);  //三个数

    //原本想用max变量存值连续对比的，但是发现由于有负数范围，确定max的初始值比较难，所以采用直接对比
    if (num1 > num2 && num1 > num3)
        printf("%ld", num1);
    else if (num2 > num1 && num2 > num3)
        printf("%ld", num2);
    else
        printf("%ld", num3);

    return 0;
}


