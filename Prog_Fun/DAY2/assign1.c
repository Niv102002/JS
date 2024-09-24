#include<stdio.h>

int addition();

int main()
{
	int limit,sum;
	printf("Enter number as a limit : ");
	scanf("%d",&limit);
	
	sum = addition(limit);
	printf("Addition = %d",sum);
	
	return 0;
}

int addition(int num)
{ 
	int s=0;
	for (int i=1;i<=num;i++)
	{
		s = s+i;
	}
	return s;
}

