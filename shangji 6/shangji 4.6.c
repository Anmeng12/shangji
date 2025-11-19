#include <stdio.h>
#include <string.h>

void countRepeatedChars(char str[])
{
    int freq[256] = { 0 };
    int i, len = strlen(str);

    for (i = 0; i < len; i++)
        freq[(unsigned char)str[i]]++;

    for (i = 0; i < 256; i++)
        if (freq[i] > 1)

            printf("'%c' : %d times\n", i, freq[i]);
}


int main()
{
    char s[100];
    scanf_s("%s", s);    //?
    countRepeatedChars(s);



    return 0;
}