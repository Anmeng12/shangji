#include <stdio.h>
int main()
{
    float score;
    printf("请输入学生成绩：");
    scanf_s("%f", &score);

    if (score < 0 || score > 100) {
        printf("成绩输入错误，请输入0-100之间的成绩！\n");
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
        printf("该学生的成绩等级为：%c\n", grade);
    }

    return 0;
}