#include <stdio.h>

int check(int x, int y, int n)
{
    if (x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1)
        return 1;
    else
        return 0;
}



int main()
{
    int x, y, n;

    scanf_s("%d %d %d", &x, &y, &n);

    printf("%d\n", check(x, y, n));


    return 0;
}