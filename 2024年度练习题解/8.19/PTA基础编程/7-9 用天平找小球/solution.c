#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    int A = 0, B = 0, C = 0;
    scanf("%d %d %d", &A, &B, &C);

    if (B == A && C != B)
        printf("C");
    else if (B == C && A != B)
        printf("A");
    else
        printf("B");

    return 0;
}