#include<stdio.h>

void display(int);
int main()
{
	display(5);
	printf("Back in main\n");
	return 0;
}

void display(int n)
{ 
	if (n!=0)
	{
		printf("Hello %d \n",n);
		display(n-1);
	}
}
