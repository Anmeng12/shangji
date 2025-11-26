#include <stdio.h>
#include <string.h>

void replace_foo(char* str) {
    char* p = str;
    while (*p != '\0') {
        if (*p == 'f' && *(p + 1) == 'o' && *(p + 2) == 'o') {
            *p = 'x';
            *(p + 1) = 'x';
            *(p + 2) = 'x';
            p += 2;
        }
        p++;
    }
}

int main() {
    char str[100];

    printf("ÇëÊäÈë×Ö·û´®: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    replace_foo(str);
    printf("Ìæ»»ºóµÄ×Ö·û´®: %s\n", str);

    return 0;
}