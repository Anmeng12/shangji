#include <stdio.h>
int main()
{
    char ch;
    scanf_s("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')        //ÅÐ¶ÏÊÇ·ñÎª´óÐ´×ÖÄ¸
        ch = ch + 32;
    else if (ch >= 'a' && ch <= 'z')    //ÅÐ¶ÏÊÇ·ñÎªÐ¡Ð´×ÖÄ¸
        ch = ch - 32;
    printf("%c\n", ch);



    return 0;
}