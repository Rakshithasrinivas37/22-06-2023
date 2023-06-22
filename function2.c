#include<stdio.h>

void add(void);
int sub(void);
void mul(int a, int b);
int div(int a, int b);

int main()
{
	add();
	int diff = sub();
	printf("Diff is %d\n", diff);
	mul(3, 4);
	int quotient = div(10, 2);
	printf("Quotient = %d\n", quotient);
}

void add()
{
     int a = 10, b = 12, sum = 0;
     sum = a + b;
     printf("Sum = %d\n", sum);
}

int sub()
{
	int a = 12, b = 10;
	return a - b;
}

void mul(int a, int b)
{
	int product = a * b;
	printf("Product = %d\n", product);
}

int div(int a, int b)
{
	return a/b;
}

