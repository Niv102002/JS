#include <stdio.h>

int fact(int);
void display (int []);

int main()
{
	int factorial[6];
	printf("Factorial of numbers from 2 to 7 are : ");
	for (int i=2,k=0;i<=7;i++,k++)
	{
		factorial[k]=fact(i);
	}
	display (factorial);
	return 0;
}

int fact(int i)
{
	
		int result = 1;
		for (int j=i;j>0;j--)
		{
			result = j*result;
		}
		return result;
}

void display (int factorial[])
{
	for (int i=0;i<=5;i++)
	{
		printf("%d ",factorial[i]);
	}
}
