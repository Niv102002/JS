#include<stdio.h>

void accept(int*);
void display(int[]);

int main()
{
	int arr[5];
	accept(arr);
	display(arr);
	return 0;
}

void accept (int *arr)
{
	printf("Enter 5 elements of an array : ");
	for (int i=0;i<5;i++)
	{
		scanf("%d ",&arr[i]);
	}
}

void display (int arr)
{
	printf("Array : ");
	for (int i=0;i<5;i++)
	{
		printf("%d ",arr);
	}
}
