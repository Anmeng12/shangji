#include <stdio.h>
#include <string.h>

int main() 
{
    char a[100], temp;
    int i, j, len;

    printf("ÊäÈë×Ö·û´®£º");

    gets(a); 
    len = strlen(a);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    printf("Äæ×ªºó£º%s\n", a);



    return 0;
}