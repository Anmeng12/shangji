#include <stdio.h>

int main() 
{
    float a, b = 500;
    printf("�����뱾�¹�������pԪ��");
    scanf_s("%f", &a);

    if (a > 10000) {
        b += a * 0.25;
    }
    else if (a > 5000) {
        b += a * 0.20;
    }
    else if (a > 2000) {
        b += a * 0.15;
    }
    else if (a > 1000) {
        b += a * 0.10;
    }
  
    printf("��Ա�����¹���Ϊ��%.2fԪ\n", b);






    return 0;
}