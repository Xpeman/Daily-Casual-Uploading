#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int Xigema(int N);
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", Xigema(n));

    return 0;
}
int Xigema(int N)
{
    int sum = 0;
    if (N > 0)
        sum += N + Xigema(N - 1); //4 + 3 + 2 + 1
    return sum;
}