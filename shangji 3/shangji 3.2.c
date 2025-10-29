#include <stdio.h>
int main()
{
    int x, y;
    scanf_s("%d", &x);
    //Ó¦¸ÄÎª:

    if (x < 0)         
        y = x - 3;
    else if (x == 0)
        y = 0;
    else
        y = x + 3;
    printf("y=%d\n", y);
    return 0;
}