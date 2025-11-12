#include <stdio.h>
#define N 5

//选择法

int main() {
    int a[N], i, j, temp, maxIndex;
    printf("输入%d个整数：\n", N);

    for (i = 0; i < N; i++) {
        scanf_s("%d", &a[i]);
    }
    

    for (i = 0; i < N - 1; i++) {
        maxIndex = i;
        for (j = i + 1; j < N; j++) {
            if (a[j] > a[maxIndex]) {
                maxIndex = j;
            }
        }


        if (maxIndex != i) {
            temp = a[i];
            a[i] = a[maxIndex];
            a[maxIndex] = temp;
        }
    }

    printf("选择法排序结果：");


    for (i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");



    return 0;
}