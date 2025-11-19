#include <stdio.h>

int age(int n)
{
    if (n == 1)
        return 10;
    else
        return age(n - 1) + 2;
}

int main()
{
    int n = 12;
    printf("Age is %d\n", age(n));
    return 0;
}