#include <stdio.h>
#define N 3

void transpose(int a[][N], int n)
{
    int i, j, temp;

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
}



int main()
{
    int a[N][N] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    transpose(a, N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }


    return 0;
}