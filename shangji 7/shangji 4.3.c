#include <stdio.h>

int sum_array(int a[], int n) {
    int sum = 0;
    int* p = a;
    for (int i = 0; i < n; i++) {
        sum += *p;
        p++;
    }
    return sum;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int result = sum_array(arr, 10);
    printf("数组元素和为: %d\n", result);

    return 0;
}