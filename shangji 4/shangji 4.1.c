#include <stdio.h>
int main() {


    int a, b, m, n, temp;
    printf("请输入两个正整数：");
    scanf_s("%d %d", &a, &b);
    m = a;
    n = b;
    
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    int gcd = a; // 最大公约数
    int lcm = m * n / gcd; // 最小公倍数
    printf("最大公约数：%d\n", gcd);
    printf("最小公倍数：%d\n", lcm);



    return 0;
}