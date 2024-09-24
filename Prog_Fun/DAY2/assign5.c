#include<stdio.h>

int fibonacci(int);

int main()
{
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	
	printf("fibonacci series upto limit = ");
	fibonacci(num);
	
	return 0;
}

int fibonacci(int num)
{ 
	int sequence=1;
	for (int i=0; i<=num;i++)
	{
		sequence= sequence+(i-1);
		printf("%d ",sequence);
	}
}

