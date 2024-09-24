#include<stdio.h>

int sum(int,int);
int main()
{
	sum(10,0);
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
