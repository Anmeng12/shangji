#include <stdio.h>
#define N 3 


int main()
{
    int a[N][N] = { 0 }, i = 0, j = N / 2, k;
    a[i][j] = 1; 


    for (k = 2; k <= N * N; k++) {
        i--;
        j++;
        
        if (i < 0 && j >= N) {
            i += 2;
            j--;
        }
        else {
            if (i < 0) i = N - 1;
            if (j >= N) j = 0;
           
            if (a[i][j] != 0) {
                i += 2;
                j--;
            }
        }
        a[i][j] = k;
    }
  

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }



    return 0;
}