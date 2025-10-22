#include <stdio.h>
#include <math.h>

#define PI 3.1415926

int main() {
    // 输入圆半径（值为5）
    double radius = 5.0;

    // 计算圆的周长和面积
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    // 输出结果，精确到小数点后3位
    printf("半径为%.1f的圆：\n", radius);
    printf("其周长 = %.3f\n", circumference);
    printf("其面积 = %.2f\n", area);

    return 0;
}