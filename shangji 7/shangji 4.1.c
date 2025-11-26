#include <stdio.h>

int main() {
    int arr[15] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29 };
    int num, * p, found = 0;

    printf("请输入要查找的数: ");
    scanf_s("%d", &num);

    p = arr;
    for (int i = 0; i < 15; i++) {
        if (*(p + i) == num) {
            printf("找到该数，位置为: %d\n", i + 1);
            found = 1;
            break;
        }
        if (*(p + i) > num) break; 
    }

    if (!found) 
   {
        printf("No Found\n");
    }

    return 0;
}