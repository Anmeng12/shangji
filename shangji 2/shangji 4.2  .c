#include <stdio.h>
#include <math.h>

#define PI 3.1415926

int main() {
    
    double radius = 5.0;

    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    
    printf("半径为%.1f的圆：\n", radius);
    printf("其周长 = %.3f\n", circumference);
    printf("其面积 = %.2f\n", area);

    return 0;
}