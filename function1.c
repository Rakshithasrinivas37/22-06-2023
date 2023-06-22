#include<stdio.h>

void add()
{
	int a, b, sum = 0;
	printf("Enter value for a and b: ");
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("Sum = %d\n", sum);
}

int main()
{
	add();
	add();
}
