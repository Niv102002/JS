#include<stdio.h>

int main()
{
	int number, factorial_result,i;
	printf("Enter a number to calculate factorial: ");
	scanf("%d", &number);
	factorial_result=1;

	for(i=0;i<=number+1;i++)
	{
		factorial_result = number*factorial_result;
		number--;
	}

	printf("Result of factorial= %d ", factorial_result);

	return 0;

}
