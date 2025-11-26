#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int (*compare)(const char*, const char*); 

    compare = strcmp; 

    printf("请输入第一行字符串: ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("请输入第二行字符串: ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (compare(str1, str2) == 0) {
        printf("两行字符串一致\n");
    }
    else {
        printf("两行字符串不一致\n");
    }





    return 0;
}