#include <stdio.h>

double fun(double x, int y)
{
    int i;
    double z;
    for (i = 1, z = x; i < y; i++)
        z = z * x;
    return z;
}

int main()
{
    double result = fun(2.0, 3); 
    printf("Result = %.2f\n", result); 
    return 0;
}