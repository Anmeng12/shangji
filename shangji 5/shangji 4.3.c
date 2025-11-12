#include <stdio.h>
#define N 5

int main() 
{
    int a[N][N], i, j, sum = 0;
    printf("输入%d×%d矩阵：\n", N, N);


    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf_s("%d", &a[i][j]);
        }
    }



    for (i = 0; i < N; i++) {
        sum += a[i][i];
        if (i != N - 1 - i) { 
            sum += a[i][N - 1 - i];
        }
    }

    printf("两条对角线元素和：%d\n", sum);


    return 0;
}