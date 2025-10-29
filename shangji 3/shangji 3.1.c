#include <stdio.h>
int main()
{
    int x, y;
    scanf_s("%d", &x);
    if (x > 3 && x <= 9)     //这里有错误 应这样改
        y = x * (x + 2);
    else if (x > -1 && x <= 3)
        y = 2 * x;
    else if (x <= -1)
        y = x - 1;
    else
        y = -1;
    printf("%d\n", y);
    return 0;
}