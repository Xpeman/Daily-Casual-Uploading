#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    void OppoSite(char* left, char* right);

    //创建字符数组
    char arr[100];
    scanf("%s", arr);
    getchar();

    int sz = strlen(arr) - 1;
    OppoSite(arr, arr + sz);
    int i = 0;
    for (i = 0; i < sz + 1; i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}
void OppoSite(char* left, char* right)
{
    
    if (left < right)
    {
        OppoSite(left, right);
    }
    
    char temp = *left;
    *left = *right;
    *right = temp;
}
