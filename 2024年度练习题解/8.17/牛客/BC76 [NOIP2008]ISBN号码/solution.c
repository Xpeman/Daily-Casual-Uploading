#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    //���ԡ�           �����硢     �������š�    ʶ����
    int language = 0, press = 0, press_id = 0;
    char rec = '\0';
    scanf("%d-%d-%d-%c", &language, &press, &press_id, &rec);

    //�����ȷʶ����
    int right_rec = language * 1;   //��ȷʶ�����ʼ��
    int i = 0;
    int press_cv = press, press_id_cv = press_id;
    for (i = 4; i > 1; i--)
    {
        //press��λ����
        right_rec += (press_cv % 10) * i;  //��������ĩ�������۳�
        press_cv /= 10;    //��С
    }
    for (i = 9; i > 4; i--)
    {
        //press_id��λ����
        right_rec += (press_id_cv % 10) * i;
        press_id_cv /= 10;
    }
    right_rec %= 11;

    //�Ƚ�ʶ����
    if (rec == 'X')  //ԭʶ���� = x
    {
        if (right_rec == 10) //��ȷ
            printf("Right\n");
        else    //����
            printf("%d-%d-%d-%d", language, press, press_id, right_rec);
    }
    else       //Դʶ���� ��= x
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