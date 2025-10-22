#include<stdio.h>

void main()
{
	int a = 5;
	char c = 'a';   //a=97
	float f = 5.3;
	double m = 13.65;
	double result;

	printf("a + c = %d\n", a + c);
	printf("a + c = %c\n", a + c);
	printf("f + m = %.2f\n", f + m);
	printf("a + m = %.2f\n", a + m);
	printf("c + f = %.2f\n", c + f);


	result = a + c * (f + m);
	
	printf("double = %f\n", result);

}