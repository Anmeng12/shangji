#include <stdio.h>
#include <math.h>

#define PI 3.1415926

int main() {
    // ����Բ�뾶��ֵΪ5��
    double radius = 5.0;

    // ����Բ���ܳ������
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    // ����������ȷ��С�����3λ
    printf("�뾶Ϊ%.1f��Բ��\n", radius);
    printf("���ܳ� = %.3f\n", circumference);
    printf("����� = %.2f\n", area);

    return 0;
}