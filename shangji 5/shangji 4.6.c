#include <stdio.h>
int main()
{
    int n = 10;
    float height = 100, sum = 100; // 第一次下落100米.


    for (int i = 2; i <= n; i++)
    {
        height /= 2;    //fanatan
        sum += 2 * height; // 往上弹+下落
    }
    height /= 2;        //第10次落地后反弹高度


    printf("第10次落地共经过：%.5f 米\n", sum);
    printf("第10次反弹高度：%.5f 米\n", height);



    return 0;
}