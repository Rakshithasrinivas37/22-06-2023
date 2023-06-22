#include<stdio.h>

void func(int *a, int *b);

int main()
{
        int a = 5, b = 10;
        func(&a, &b);
        printf("Inside calling function, a = %d b = %d\n", a, b);
}

void func(int *a, int *b)
{
        *a = 10;
        *b = 5;
        printf("Inside called function, a = %d b = %d\n", *a, *b);
}
