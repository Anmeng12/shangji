#include<stdio.h>

int main()
{
	int a = 1, b = 2, c = 3;
	
	int bigger = a > b ? a : b;

	int max = bigger > c ? bigger : c;

	printf("%d", max);
	




	return 0;	
}