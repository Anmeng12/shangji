#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char* start, * end;

    printf("请输入字符串: ");
    fgets(str, 100, stdin);

   
    str[strcspn(str, "\n")] = '\0';

    start = str;
    end = str + strlen(str) - 1;

    printf("反向输出: ");
    while (end >= start) {
        printf("%c", *end);
        end--;
    }
    printf("\n");

    return 0;
}