#include<stdio.h>

int sum(int,int);
int main()
{
	int n,s=0;
	printf("Enter limit for sum : ");
	scanf("%d",&n);
	sum(n,s);
	return 0;
}

int sum(int n,int s)
{ 
	if (n>0)
	{
		s=s+n;
		n--;
		sum(n,s);
	}
	else
	{
		printf("Sum = %d\n",s);
	}
}
