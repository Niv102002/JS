#include<stdio.h>

void display(int);
int main()
{
	display(10);
	return 0;
}

void display(int n)
{ 
	if (n!=0)
	{
		printf(" %d \n",n);
		display(n-1);
	}
}
