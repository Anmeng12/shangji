#include<stdio.h> 
int main()
{
	int a;
	printf("请输入一个十进制的数:");
	scanf_s("%d",&a);
	
	printf("\n%d(10),%o(8),%x(16)\n",a,a,a);


	return 0;
}