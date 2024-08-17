#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    char ch = '\0';
    int num = 0;
    float f1 = 0.0f;
    float f2 = 0.0f;

    scanf("%f %d %c %f", &f1, &num, &ch, &f2);
    printf("%c %d %.2f %.2f", ch, num, f1, f2);

    return 0;
}