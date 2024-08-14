#pragma once
//0.1°æ±¾
#include "function cliaming.h"
void Add(int a, int b)
{
    printf("%d", a + b);
}
void Sub(int a, int b)
{
    printf("%d", a - b);
}
void Mul(int a, int b)
{
    printf("%d", a * b);
}
void Div(int a, int b)
{
    if (b > 0)
        printf("%d", a / b);
    else
        printf("Divided by zero!\n");
}
void Bal(int a, int b)
{
    printf("%d", a % b);
}