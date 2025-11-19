#include <stdio.h>

void findNumbers()
{
    int i, tens, ones;
    for (i = 10; i < 100; i++)
    {
        if (i % 3 != 0) continue;
        tens = i / 10;
        ones = i % 10;
        if (tens == 5 || ones == 5)
            printf("%d\n", i);
    }
}




int main()
{
    findNumbers();


    return 0;
}