#include <stdio.h>

int main() 
{
    int num, hundreds, tens, units;
    printf("������һ����λ��������");
    scanf_s("%d", &num);

    //��ȡ�� ʮ ��λ����
    hundreds = num / 100;
    tens = (num / 10) % 10;
    units = num % 10;

    if (hundreds * hundreds * hundreds + tens * tens * tens + units * units * units == num) 
    {
        printf("%d��ˮ�ɻ���\n", num);
    }
    else 
    {
        printf("%d����ˮ�ɻ���\n", num);
    }

    return 0;
}