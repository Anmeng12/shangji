#include <stdio.h>
#include <ctype.h>


int main() 
{
    char ch;
    int letter = 0, space = 0, digit = 0, other = 0;
    printf("输入一行字符：\n");


    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            letter++;
        }
        else if (isspace(ch)) {
            space++;
        }
        else if (isdigit(ch)) {
            digit++;
        }
        else {
            other++;
        }
    }

    printf("英文字母：%d\n空格：%d\n数字：%d\n其它字符：%d\n", letter, space, digit, other);




    return 0;
}