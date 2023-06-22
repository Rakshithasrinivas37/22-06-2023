#include<stdio.h>

float avg(int [], int);

int main()
{
	int marks[5] = {10, 20, 25, 30, 40};
	float average = avg(marks, 5);
	printf("Average = %f\n", average);
}

float avg( int marks[], int size)
{
	int sum = 0;
	float avg = 0;
	for(int i = 0;i < size;i++)
	{
		sum = sum + marks[i];
	}
	avg = sum/size;
	return avg;
}


