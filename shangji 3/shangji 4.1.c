#include <stdio.h>
int main() 
{
    char gender;
    float weight;
    int blood;
    printf("�������Ա�'m'Ϊ�У�'f'ΪŮ�������أ�");
    scanf_s("%c%f", &gender, &weight);
    if (gender == 'm') {
        if (weight > 120) blood = 200;
        else blood = 180;
    }
    else {
        if (weight > 100) blood = 150;
        else blood = 120;
    }

    printf("��Ѫ��Ϊ%d����\n", blood);









    return 0;
}