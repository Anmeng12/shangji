#include <stdio.h>

int digit(int n, int k)
{
    int i;
    for (i = 1; i < k; i++)
        n /= 10;
    return n % 10;


}


int main()
{
    printf("%d\n", digit(829, 1)); 
    printf("%d\n", digit(829, 3)); 



    return 0;
}