#include <stdio.h>
#include <stdbool.h>

bool search(int a[], int n, int key) {
    int* p = a;
    for (int i = 0; i < n; i++) {
        if (*(p + i) == key) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int key;

    printf("请输入要查找的键值: ");
    scanf_s("%d", &key);

    if (search(arr, 10, key)) {
        printf("找到该键值\n");
    }
    else {
        printf("未找到该键值\n");
    }

    return 0;
}