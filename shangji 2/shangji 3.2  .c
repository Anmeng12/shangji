#include <stdio.h> 
int main()
{

	int x, y,a;
	//scanf("%x,%y", &x, &y);  ����
	printf("��������������:");
	scanf_s("%d,%d", &x, &y);
	a = (x + y) / 2;
	printf("The average is %d:\n", a);
	return 0;
}