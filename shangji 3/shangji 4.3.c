#include <stdio.h>
int main()
{
    float score;
    printf("������ѧ���ɼ���");
    scanf_s("%f", &score);

    if (score < 0 || score > 100) {
        printf("�ɼ��������������0-100֮��ĳɼ���\n");
    }
    else {
        char grade;
        if (score >= 90) {
            grade = 'A';
        }
        else if (score >= 80) {
            grade = 'B';
        }
        else if (score >= 70) {
            grade = 'C';
        }
        else if (score >= 60) {
            grade = 'D';
        }
        else {
            grade = 'E';
        }
        printf("��ѧ���ĳɼ��ȼ�Ϊ��%c\n", grade);
    }

    return 0;
}