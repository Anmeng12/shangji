#include <stdio.h>
#include <math.h>

#define PI 3.1415926

int main() {
    
    double radius = 5.0;

    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    
    printf("�뾶Ϊ%.1f��Բ��\n", radius);
    printf("���ܳ� = %.3f\n", circumference);
    printf("����� = %.2f\n", area);

    return 0;
}