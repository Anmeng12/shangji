#include <stdio.h>
int main() 
{
    char gender;
    float weight;
    int blood;
    printf("请输入性别（'m'为男，'f'为女）和体重：");
    scanf_s("%c%f", &gender, &weight);
    if (gender == 'm') {
        if (weight > 120) blood = 200;
        else blood = 180;
    }
    else {
        if (weight > 100) blood = 150;
        else blood = 120;
    }

    printf("输血量为%d毫升\n", blood);









    return 0;
}