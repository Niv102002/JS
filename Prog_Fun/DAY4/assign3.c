#include <stdio.h>

void fact(int []);
void display (int []);

int main()
{
	int factorial[6];
	printf("Factorial of numbers from 2 to 7 are : ");
	
	fact(factorial);
	display (factorial);
	return 0;
}

void fact(int factorial[])
{
	for (int i=2,k=0;i<=7;i++,k++)
	{
		int result = 1;
		for (int j=i;j>0;j--)
		{
			result = j*result;
		}
		factorial[k]=result;
	}
}

void display (int factorial[])
{
	for (int i=0;i<=5;i++)
	{
		printf("%d ",factorial[i]);
	}
}
