#include <stdio.h>
int main()
{
    char ch;
    scanf_s("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')        //�ж��Ƿ�Ϊ��д��ĸ
        ch = ch + 32;
    else if (ch >= 'a' && ch <= 'z')    //�ж��Ƿ�ΪСд��ĸ
        ch = ch - 32;
    printf("%c\n", ch);



    return 0;
}