#include <stdio.h>
int main()
{
	int number;
	printf("������һ������: ");
	scanf_s("%d",&number);
	
	int rev = 0;
	while (number != 0)
	{
		int temp = number % 10;
		number /= 10;
		rev = rev * 10 + temp;

	}

	printf("%d", rev);




	return 0;
}


