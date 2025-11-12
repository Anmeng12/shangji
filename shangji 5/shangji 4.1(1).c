#include <stdio.h>

#define N 5

//起泡法

int main() 
{
    int a[N], i, j, temp;
    printf("输入%d个整数：\n", N);

    for (i = 0; i < N; i++) {
        scanf_s("%d", &a[i]);
    }
    

    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - 1 - i; j++) {
            if (a[j] < a[j + 1]) 
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("起泡法排序的结果：");
    for (i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");


    return 0;
}