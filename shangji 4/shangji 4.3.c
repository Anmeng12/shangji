#include <stdio.h>
#include <math.h>
int main() {



    int days = 30;
    double richManGet = 30 * 100000.0; 
    double richManGive = 0.0;
    double money = 0.01; 
    for (int i = 1; i <= days; i++) {
        richManGive += money;
        money *= 2;
    }
    printf("陌生人给百万富翁：%f元\n", richManGet);
    printf("百万富翁给陌生人：%.2f元\n", richManGive);



    return 0;
}