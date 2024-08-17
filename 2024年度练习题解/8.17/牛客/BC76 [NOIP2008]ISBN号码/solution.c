#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    //语言、           出版社、     出版社编号、    识别码
    int language = 0, press = 0, press_id = 0;
    char rec = '\0';
    scanf("%d-%d-%d-%c", &language, &press, &press_id, &rec);

    //算出正确识别码
    int right_rec = language * 1;   //正确识别码初始化
    int i = 0;
    int press_cv = press, press_id_cv = press_id;
    for (i = 4; i > 1; i--)
    {
        //press三位数字
        right_rec += (press_cv % 10) * i;  //从左往右末端数字累乘
        press_cv /= 10;    //缩小
    }
    for (i = 9; i > 4; i--)
    {
        //press_id五位数字
        right_rec += (press_id_cv % 10) * i;
        press_id_cv /= 10;
    }
    right_rec %= 11;

    //比较识别码
    if (rec == 'X')  //原识别码 = x
    {
        if (right_rec == 10) //正确
            printf("Right\n");
        else    //错误
            printf("%d-%d-%d-%d", language, press, press_id, right_rec);
    }
    else       //源识别码 ！= x
    {
        if ((rec - '0') == right_rec && right_rec != 10)
            printf("Right\n");
        else if (right_rec != 10)
            printf("%d-%d-%d-%d", language, press, press_id, right_rec);
        else
            printf("%d-%d-%d-X", language, press, press_id);
    }

    return 0;
}