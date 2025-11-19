#include <stdio.h>



int* find_middle(int a[], int n)
{
    return &a[n / 2];
}




int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int* mid = find_middle(arr, n);


    printf("Middle element: %d\n", *mid);



    return 0;
}