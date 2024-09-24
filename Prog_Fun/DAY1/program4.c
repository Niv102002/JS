#include<stdio.h>

int main()
{
	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	
	if (num>0)
		printf("The number is positive");
	else if (num==0)
		printf("The number is zero");
	else
		printf("The number is negative");

	return 0;
}
