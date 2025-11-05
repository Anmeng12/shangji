#include <stdio.h>



//是否为素数
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}



int main() {
    int even;
    printf("请输入一个充分大的偶数： ");
    scanf_s("%d", &even);

    int flag = 0;



    for (int i = 2; i <= even / 2; i++)
    {
        if (isPrime(i) && isPrime(even - i)) {
            printf("%d = %d + %d\n", even, i, even - i);
            flag = 1;
            break;
        }
    }





    if (flag) {
        printf("验证成功，该偶数可表示为两个素数之和\n");
    }
    else {
        printf("验证失败\n");
    }






    return 0;
}