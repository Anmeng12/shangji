#include <stdio.h>

int mystrlen(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
        ;
    return(i);
}


int main()
{
    char s[] = "Hello";
    int len = mystrlen(s);
    printf("Length = %d\n", len); 
    return 0;
}