#include <stdio.h>

int sstrcmp(char s[], char t[])
{
    int i = 0;
    while (s[i] && t[i] && s[i] == t[i])
        i++;
    return s[i] - t[i];
}

int main()
{
    int x;
    char s1[150], s2[150];
    scanf_s("%s %s", s1, s2);
    x = sstrcmp(s1, s2);
    printf("%d\n", x);
    return 0;
}