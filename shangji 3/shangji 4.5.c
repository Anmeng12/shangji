#include <stdio.h>

int main() 
{
    float a, b = 500;
    printf("请输入本月工程利润p元：");
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
  
    printf("该员工本月工资为：%.2f元\n", b);






    return 0;
}